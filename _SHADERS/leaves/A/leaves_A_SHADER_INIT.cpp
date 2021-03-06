    leaves_A_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_leaves_A =                                                                                    

      " #define highp                                                                                                                           \n" 
      
      
      "    attribute      vec4 position;                                                                                                        \n" 
      "    attribute      vec2 textureCoords;                                                                                                   \n" 
      "    //-------------------------------------------------                                                                                  \n"     
      "    uniform  highp vec4  light_POSITION_01;                                                                                              \n" 
      "    uniform        mat4  mvMatrix;                                                                                                       \n" 
      "    uniform        mat4  mvpMatrix;                                                                                                      \n" 
           //-----
      "    uniform        mat4  viewMatrix;                                                                                                     \n"                   
           //-----
    "      uniform        mat4  projectionShadow;                                                                                               \n"        
    "      uniform        mat4  modelViewShadow;                                                                                                \n"        
           //-----
    "      uniform        mat4  LightMatrix;                                                                                                    \n" 
    "      uniform        mat4  TextureMatrix;                                                                                                  \n" 
    //-------------------------------------------------                                                                
    "      varying highp  vec4  lightPosition_PASS;                                                                                             \n" 
    "      varying highp  vec2  varTexcoord;                                                                                                    \n" 
    //--------------------------------------------
    "      varying highp  vec4  shadowTexcoord;                                                                                                 \n"       
    //--------------------------------------------
    "      const          mat4  ScaleMatrix = mat4(0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.5, 1.0);             \n"  

    //==================================================================================================================================
    
    " void main()                                                                                                                               \n" 
    " {                                                                                                                                         \n" 
                 //-------------------------------------------------------------------------------    
    "            shadowTexcoord   =   ScaleMatrix * projectionShadow * modelViewShadow * viewMatrix * mvMatrix * position;                                                         \n" 
    "            shadowTexcoord   =   shadowTexcoord / shadowTexcoord.w;                                                                        \n"      
                 //-------------------------------------------------------------------------------

    "            varTexcoord             = textureCoords;                                                                                       \n" 
    "            lightPosition_PASS      = normalize(LightMatrix * light_POSITION_01);                                                          \n" 
    
    "            gl_Position             = mvpMatrix * position;                                                                                \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_leaves_A =                                                                                  

    "#ifdef GL_ES                                                                                                                               \n" 
    "#else                                                                                                                                      \n" 
    "#define highp                                                                                                                              \n" 
    "#endif                                                                                                                                     \n" 
    //-----------------------------------------------------------------------------------------------------------------------------------
    "     uniform sampler2D    NormalMap;                                                                                                       \n" 
    "             highp  vec3  NormalTex;                                                                                                       \n" 
    "             highp float  NdotL1;                                                                                                          \n" 
    //--------------------------------------------
    "    uniform sampler2D   ShadowTexture;                                                                                                     \n"   
    "    varying highp vec4  shadowTexcoord;                                                                                                    \n"       
    //--------------------------------------------
    "     uniform sampler2D    Texture1;                                                                                                        \n"     
   
    "     uniform highp float  shininess;                                                                                                       \n"    
    "     uniform highp float  ambient;                                                                                                         \n" 
    //--------------------------------------------                                                                      
    "     varying highp  vec4  lightPosition_PASS;                                                                                              \n" 
    "     varying highp  vec2  varTexcoord;                                                                                                     \n" 
    //--------------------------------------------                                                                       
    "             highp  vec4  tempColor;                                                                                                       \n" 
    "             highp  vec4  specular;                                                                                                        \n"     
    //-------------------------------------------- 
                                                                
    //=======================================================================================================================                      
   
   "void main()                                                                                                                                 \n" 
    "{                                                                                                                                          \n" 
                //---------------------------------------------------------------------------------------------------------------------
        "       highp float comp = (shadowTexcoord.z / shadowTexcoord.w) - 8.4e-005;                                                            \n" 
        "       highp float depth_PowerVR = texture2DProj(ShadowTexture, shadowTexcoord).r;                                                     \n" 
        "       highp float shadowVal = comp <= depth_PowerVR ? 1.0 : 0.4;                                                                      \n" 
                //---------------------------------------------------------------------------------------------------------------------
        "       NormalTex       =  texture2D(NormalMap,  varTexcoord.xy).xyz;                                                                   \n" 
        "       NormalTex       =  normalize((NormalTex  - 0.5));                                                                               \n" 
        "       NdotL1          =  dot(NormalTex, lightPosition_PASS.xyz);                                                                      \n"   
                //----------------------------------------------------------------------------                                                   

                //----------------------------------------------------------------------------                                           
 //     "       tempColor       =  texture2D(Texture1, varTexcoord.xy);                                                                         \n" 
//_THE_ABOVE_MIGHT_BE_BETTER_FOR_LEAVES
       "       tempColor       =  pow(NdotL1, 50.0) * texture2D(Texture1, varTexcoord.xy) + texture2D(Texture1, varTexcoord.xy);               \n" 

                //----------------------------------------------------------------------------   
//        "       specular        =  (highp vec4(1.0, .7, .2, 1.0) * pow(NdotL1,  shininess) * tempColor) * shadowVal * shadowVal;                \n" 
        "       gl_FragColor    =  texture2D(Texture1, varTexcoord.xy) * NdotL1 * shadowVal;                                                                                 \n" 
    "}\n";

    
      //--------------------------------------------------------------------------------------------------                    

        leaves_A_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( leaves_A_SHADER_VERTEX, 1, &vertexSource_leaves_A, NULL );                                        
        glCompileShader( leaves_A_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        leaves_A_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( leaves_A_SHADER_FRAGMENT, 1, &fragmentSource_leaves_A, NULL );                                    
        glCompileShader(leaves_A_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( leaves_A_SHADER, leaves_A_SHADER_VERTEX );                                                        
        glAttachShader( leaves_A_SHADER, leaves_A_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(leaves_A_SHADER,   0, "position");                                                              
        glBindAttribLocation(leaves_A_SHADER,   1, "normal");                                                            
        glBindAttribLocation(leaves_A_SHADER,   2, "textureCoords");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( leaves_A_SHADER_VERTEX);                                                                             
        glDeleteShader( leaves_A_SHADER_FRAGMENT);                                                                           
        glLinkProgram(leaves_A_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_MODELVIEW_leaves_A               = glGetUniformLocation(leaves_A_SHADER, "mvMatrix");                  
        UNIFORM_MODELVIEWPROJ_leaves_A           = glGetUniformLocation(leaves_A_SHADER, "mvpMatrix");  
        //-------------------------------      
        UNIFORM_viewMatrix_leaves_A              = glGetUniformLocation(leaves_A_SHADER, "viewMatrix");              
        //-------------------------------
        UNIFORM_SHADOW_PROJ_leaves_A             = glGetUniformLocation(leaves_A_SHADER, "projectionShadow");                                                  
        UNIFORM_modelViewShadow_leaves_A         = glGetUniformLocation(leaves_A_SHADER, "modelViewShadow");            
        //-------------------------------      
        UNIFORM_LIGHT_MATRIX_leaves_A            = glGetUniformLocation(leaves_A_SHADER, "LightMatrix");                
        UNIFORM_TEXTURE_MATRIX_leaves_A          = glGetUniformLocation(leaves_A_SHADER, "TextureMatrix");         
        //-----------------------------                                                                                         
        UNIFORM_LIGHT_POSITION_01_leaves_A       = glGetUniformLocation(leaves_A_SHADER, "light_POSITION_01");          
        UNIFORM_shininess_leaves_A               = glGetUniformLocation(leaves_A_SHADER, "shininess");  
       
        UNIFORM_ambient_leaves_A                 = glGetUniformLocation(leaves_A_SHADER, "ambient");  
          
        UNIFORM_ShadowTexture_leaves_A           = glGetUniformLocation(leaves_A_SHADER, "ShadowTexture");           
        UNIFORM_TEXTURE_DOT3_leaves_A            = glGetUniformLocation(leaves_A_SHADER, "NormalMap");                  
        UNIFORM_TEXTURE_leaves_A                 = glGetUniformLocation(leaves_A_SHADER, "Texture1");  
