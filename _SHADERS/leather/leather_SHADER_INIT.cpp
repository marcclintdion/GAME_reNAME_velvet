    leather_SHADER = glCreateProgram();                                                                                     
        //----------------------------------------------------                                                                  
    const GLchar *vertexSource_leather =                                                                                    

      " #define highp                                                                                                                         \n" 
      
      
                                                                                      
      "    //-------------------------------------------------                                                                                \n"     
      "    uniform  highp vec4  light_POSITION_01;                                                                                            \n" 
      "    uniform  highp vec4  light_POSITION_02;                                                                                            \n" 
      "    uniform  highp vec4  light_POSITION_03;                                                                                            \n" 
      "    uniform  highp vec4  light_POSITION_04;                                                                                            \n" 
      "    uniform  highp vec4  light_POSITION_05;                                                                                            \n" 
      "    uniform  highp vec4  light_POSITION_06;                                                                                            \n" 
      "    uniform  highp vec4  light_POSITION_07;                                                                                            \n" 
      "    uniform  highp vec4  light_POSITION_08;                                                                                            \n" 
      
      "    uniform        mat4  mvMatrix;                                                                                                     \n" 
      "    uniform        mat4  mvpMatrix;                                                                                                    \n" 
           //-----
      "    uniform        mat4  viewMatrix;                                                                                                   \n"                   
           //-----
      "    uniform        mat4  projectionShadow;                                                                                             \n"        
      "    uniform        mat4  modelViewShadow;                                                                                              \n"        
           //-----
      "    uniform        mat4  lightMatrix;                                                                                                  \n" 
           //-----
      "    attribute      vec4   position;                                                                                                        \n"      
      "                   vec4   TEMP_position;                                                                                                        \n"      
           //-----                                                                                                                                     \n" 
      "    uniform        mat4  TextureMatrix;                                                                                                    \n" 
     
      "    attribute      vec2 textureCoords;                                                                                                     \n"
   
    //-------------------------------------------------                                                                
    "      varying highp  vec2  varTexcoord;                                                                                                  \n" 
    //--------------------------------------------   
   
    "      varying highp  vec4  lightPosition_PASS_01;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_02;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_03;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_04;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_05;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_06;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_07;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_08;                                                                                           \n" 
    
    
    
    //--------------------------------------------
    "      varying highp  vec4  shadowTexcoord;                                                                                               \n"       
    //--------------------------------------------
    "      const          mat4  ScaleMatrix = mat4(0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.5, 1.0);           \n"  

    //==================================================================================================================================
    
    " void main()                                                                                                                             \n" 
    " {                                                                                                                                       \n" 
    "            TEMP_position           =  mvpMatrix * position;                                                                                 \n"           
     
                 //-------------------------------------------------------------------------------    
    "            shadowTexcoord   =   ScaleMatrix * projectionShadow * modelViewShadow * viewMatrix * mvMatrix * position;                                                         \n" 
    "            shadowTexcoord   =   shadowTexcoord / shadowTexcoord.w;                                                                      \n"      
                 //-------------------------------------------------------------------------------
    "            varTexcoord             = textureCoords;                                                                                     \n" 
                 //-------------------------------------------------------------------------------    
    "            lightPosition_PASS_01      = normalize(lightMatrix * light_POSITION_01);                                                        \n" 
    "            lightPosition_PASS_02      = normalize(lightMatrix * light_POSITION_02);                                                        \n" 
    "            lightPosition_PASS_03      = normalize(lightMatrix * light_POSITION_03);                                                        \n" 
    "            lightPosition_PASS_04      = normalize(lightMatrix * light_POSITION_04);                                                        \n" 
    "            lightPosition_PASS_05      = normalize(lightMatrix * light_POSITION_05);                                                        \n" 
    "            lightPosition_PASS_06      = normalize(lightMatrix * light_POSITION_06);                                                        \n" 
    "            lightPosition_PASS_07      = normalize(lightMatrix * light_POSITION_07);                                                        \n" 
    "            lightPosition_PASS_08      = normalize(lightMatrix * light_POSITION_08);                                                        \n" 
     
     
                                           
    "            gl_Position             = TEMP_position;                                                                              \n" 
    
    " } \n";   
    
    //===================================================================================================================================                 

    const GLchar *fragmentSource_leather =                                                                                  

    "#ifdef GL_ES                                                                                                                           \n" 
    "#else                                                                                                                                  \n" 
    "#define highp                                                                                                                          \n" 
    "#endif                                                                                                                                 \n" 
    //-----------------------------------------------------------------------------------------------------------------------------------
    "     uniform sampler2D    NormalMap;                                                                                                   \n" 
    "             highp  vec3  NormalTex;                                                                                                   \n" 
    "             highp float  NdotL1;                                                                                                      \n" 
    "             highp float  NdotL2;                                                                                                      \n" 
    "             highp float  NdotL3;                                                                                                      \n" 
    "             highp float  NdotL4;                                                                                                      \n" 
    "             highp float  NdotL5;                                                                                                      \n" 
    "             highp float  NdotL6;                                                                                                      \n" 
    "             highp float  NdotL7;                                                                                                      \n" 
    "             highp float  NdotL8;                                                                                                      \n" 
    
    //--------------------------------------------
    "    uniform sampler2D   ShadowTexture;                                                                                                 \n"   
    "    varying highp vec4  shadowTexcoord;                                                                                                \n"       
    //--------------------------------------------
    "     uniform sampler2D    Texture1;                                                                                                    \n"     
   
    "     uniform highp float  shininess;                                                                                                   \n"    
    "     uniform highp float  ambient;                                                                                                     \n" 
    //--------------------------------------------                                                                      
    "      varying highp  vec2  varTexcoord;                                                                                                  \n" 
    //--------------------------------------------   
   
    "      varying highp  vec4  lightPosition_PASS_01;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_02;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_03;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_04;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_05;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_06;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_07;                                                                                           \n" 
    "      varying highp  vec4  lightPosition_PASS_08;                                                                                           \n" 
    
    //--------------------------------------------                                                                    
    "             highp  float  specular_01;                                                                                                   \n" 
    "             highp  float  specular_02;                                                                                                   \n" 
    "             highp  float  specular_03;                                                                                                   \n" 
    "             highp  float  specular_04;                                                                                                   \n" 
    "             highp  float  specular_05;                                                                                                   \n" 
    "             highp  float  specular_06;                                                                                                   \n" 
    "             highp  float  specular_07;                                                                                                   \n" 
    "             highp  float  specular_08;                                                                                                   \n" 
   
   
   
   //-------------------------------------------- 
                                                                
    //=======================================================================================================================                      
   
   "void main()                                                                                                                             \n" 
    "{                                                                                                                                      \n" 
        
        //---------------------------------------------------------------------------------------------------------------------
        "       highp float comp = (shadowTexcoord.z / shadowTexcoord.w) - 8.4e-005;                                                       \n" 
        "       highp float depth_PowerVR = texture2DProj(ShadowTexture, shadowTexcoord).r;                                                \n" 
        "       highp float shadowVal = comp <= depth_PowerVR ? 1.0 : 0.4;                                                                 \n" 
                //---------------------------------------------------------------------------------------------------------------------
        "       NormalTex       =  texture2D(NormalMap,  varTexcoord.xy).xyz;                                                              \n" 
        "       NormalTex       =  normalize((NormalTex  - 0.5));                                                                          \n" 
        "       NdotL1          =  max(dot(NormalTex, lightPosition_PASS_01.xyz), 0.0);                                                                 \n"   
        "       NdotL2          =  max(dot(NormalTex, lightPosition_PASS_02.xyz), 0.0);                                                                 \n"   
        "       NdotL3          =  max(dot(NormalTex, lightPosition_PASS_03.xyz), 0.0);                                                                 \n"   
        "       NdotL4          =  max(dot(NormalTex, lightPosition_PASS_04.xyz), 0.0);                                                                 \n"   
        "       NdotL5          =  max(dot(NormalTex, lightPosition_PASS_05.xyz), 0.0);                                                                 \n"   
        "       NdotL6          =  max(dot(NormalTex, lightPosition_PASS_06.xyz), 0.0);                                                                 \n"   
        "       NdotL7          =  max(dot(NormalTex, lightPosition_PASS_07.xyz), 0.0);                                                                 \n"   
        "       NdotL8          =  max(dot(NormalTex, lightPosition_PASS_08.xyz), 0.0);                                                                 \n"   
                
                
                
                
                
                //----------------------------------------------------------------------------         



                //----------------------------------------------------------------------------                           

        "       specular_01     =  max(pow(NdotL1, shininess), 0.0);               \n" 
        "       specular_02     =  max(pow(NdotL2, shininess), 0.0);               \n" 
        "       specular_03     =  max(pow(NdotL3, shininess), 0.0);               \n" 
        "       specular_04     =  max(pow(NdotL4, shininess), 0.0);               \n" 
        "       specular_05     =  max(pow(NdotL5, shininess), 0.0);               \n" 
        "       specular_06     =  max(pow(NdotL6, shininess), 0.0);               \n" 
        "       specular_07     =  max(pow(NdotL7, shininess), 0.0);               \n" 
        "       specular_08     =  max(pow(NdotL8, shininess), 0.0);               \n" 


        //"       gl_FragColor    =  texture2D(Texture1, varTexcoord.xy) * shadowVal;                                                                      \n" 
    
    
        "       gl_FragColor    = (texture2D(Texture1, varTexcoord.xy) + vec4(0.05) * NdotL2                         \n" 
    
        "                       + specular_01*0.5 + specular_02*0.5 + specular_03*0.5 + specular_04*0.5         \n"        
        "                       + specular_05*0.5 + specular_06*0.5 + specular_07*0.5 + specular_08*0.5         \n"          
       
       
       
        "      )  * shadowVal;               \n" 
   
   
   
    "}\n";

    
      //--------------------------------------------------------------------------------------------------                    

        leather_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);                                                          
        glShaderSource( leather_SHADER_VERTEX, 1, &vertexSource_leather, NULL );                                        
        glCompileShader( leather_SHADER_VERTEX);                                              //glShaderBinary                              
        //----------------------------------------------------                                                                  
        leather_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);                                                      
        glShaderSource( leather_SHADER_FRAGMENT, 1, &fragmentSource_leather, NULL );                                    
        glCompileShader(leather_SHADER_FRAGMENT);                                              //glShaderBinary                                                                             
        //--------------------------------------------------------------------------------------------------                    
        glAttachShader( leather_SHADER, leather_SHADER_VERTEX );                                                        
        glAttachShader( leather_SHADER, leather_SHADER_FRAGMENT );                                                      
        //--------------------------------------------------------------------------------------------------                    
        glBindAttribLocation(leather_SHADER,   0, "position");                                                              
        glBindAttribLocation(leather_SHADER,   1, "normal");                                                            
        glBindAttribLocation(leather_SHADER,   2, "textureCoords");                                                             
        //--------------------------------------------------------------------------------------------------                    
        glDeleteShader( leather_SHADER_VERTEX);                                                                             
        glDeleteShader( leather_SHADER_FRAGMENT);                                                                           
        glLinkProgram(leather_SHADER);                                                                                      
        //--------------------------------------------------------------------------------------------------                    
        UNIFORM_MODELVIEW_leather               = glGetUniformLocation(leather_SHADER, "mvMatrix");                  
        UNIFORM_MODELVIEWPROJ_leather           = glGetUniformLocation(leather_SHADER, "mvpMatrix");  
        //-------------------------------      
        UNIFORM_viewMatrix_leather              = glGetUniformLocation(leather_SHADER, "viewMatrix");              
        //-------------------------------
        UNIFORM_SHADOW_PROJ_leather             = glGetUniformLocation(leather_SHADER, "projectionShadow");                                                  
        UNIFORM_modelViewShadow_leather         = glGetUniformLocation(leather_SHADER, "modelViewShadow");            
        //-------------------------------      
        UNIFORM_LIGHT_MATRIX_leather            = glGetUniformLocation(leather_SHADER, "lightMatrix");                
        UNIFORM_TEXTURE_MATRIX_leather          = glGetUniformLocation(leather_SHADER, "TextureMatrix");         
        //-----------------------------                                                                                         
        UNIFORM_LIGHT_POSITION_01_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_01");
        UNIFORM_LIGHT_POSITION_02_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_02");        
        UNIFORM_LIGHT_POSITION_03_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_03");        
        UNIFORM_LIGHT_POSITION_04_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_04");        
        UNIFORM_LIGHT_POSITION_05_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_05");        
        UNIFORM_LIGHT_POSITION_06_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_06");        
        UNIFORM_LIGHT_POSITION_07_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_07");        
        UNIFORM_LIGHT_POSITION_08_leather       = glGetUniformLocation(leather_SHADER, "light_POSITION_08");                   
                  
        UNIFORM_shininess_leather               = glGetUniformLocation(leather_SHADER, "shininess");  
        UNIFORM_ambient_leather                 = glGetUniformLocation(leather_SHADER, "ambient");  
          
        UNIFORM_ShadowTexture_leather           = glGetUniformLocation(leather_SHADER, "ShadowTexture");           
        UNIFORM_TEXTURE_DOT3_leather            = glGetUniformLocation(leather_SHADER, "NormalMap");                  
        UNIFORM_TEXTURE_leather                 = glGetUniformLocation(leather_SHADER, "Texture1");  
