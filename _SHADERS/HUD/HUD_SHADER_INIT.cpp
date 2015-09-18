    HUD_SHADER = glCreateProgram();
    //----------------------------------------------------
    const GLchar *vertexSource_HUD =

    " #define highp                                                                                                \n"
          
    //-------------------------------------------------
    "    uniform        mat4  mvpMatrix;                                                                           \n"
    "    attribute      vec4  position;                                                                            \n"

    "    attribute      vec2  textureCoords;                                                                       \n"
    "    varying highp  vec2  varTexcoord;                                                                         \n"
    //--------------------------------------------
    "    uniform        vec4  position_MOVE;                                                                       \n"
    "    uniform        vec4  scale;                                                                               \n"
    "                   vec4  position_FINAL;                                                                      \n"
    //--------------------------------------------
    
    //==================================================================================================
    
    " void main()                                                                                                  \n"
    " {                                                                                                            \n"
    "        varTexcoord             = textureCoords;                                                              \n"
  
    "        position_FINAL          = mvpMatrix * (position);                                           \n"
    
    "        gl_Position             = vec4(position_FINAL.x, position_FINAL.y, 0.0, 1.0);                         \n"
    
    " } \n";
    
    //==================================================================================================

    const GLchar *fragmentSource_HUD =

    "#ifdef GL_ES                                                                                                  \n"
    "#else                                                                                                         \n"
    "#define highp                                                                                                 \n"
    "#endif                                                                                                        \n"
    //--------------------------------------------------------------------------------------------------
    "     uniform sampler2D    Texture1;                                                                           \n"
    "     varying highp  vec2  varTexcoord;                                                                        \n"
    //--------------------------------------------
                                                           
    //==================================================================================================
   
   "void main()                                                                                                    \n" 
    "{                                                                                                             \n" 
        
    "        gl_FragColor    =   texture2D(Texture1, varTexcoord.xy);                                              \n" 
    

    "}\n";

    
      //--------------------------------------------------------------------------------------------------

        HUD_SHADER_VERTEX = glCreateShader( GL_VERTEX_SHADER);
        glShaderSource( HUD_SHADER_VERTEX, 1, &vertexSource_HUD, NULL );
        glCompileShader( HUD_SHADER_VERTEX);                                              //glShaderBinary
        //----------------------------------------------------------------------
        HUD_SHADER_FRAGMENT = glCreateShader( GL_FRAGMENT_SHADER);
        glShaderSource( HUD_SHADER_FRAGMENT, 1, &fragmentSource_HUD, NULL );
        glCompileShader(HUD_SHADER_FRAGMENT);                                              //glShaderBinary
        //--------------------------------------------------------------------------------------------------
        glAttachShader( HUD_SHADER, HUD_SHADER_VERTEX );
        glAttachShader( HUD_SHADER, HUD_SHADER_FRAGMENT );
        //--------------------------------------------------------------------------------------------------
        glBindAttribLocation(HUD_SHADER,   0, "position");
        glBindAttribLocation(HUD_SHADER,   1, "normal");
        glBindAttribLocation(HUD_SHADER,   2, "textureCoords");   
        //--------------------------------------------------------------------------------------------------
        glDeleteShader( HUD_SHADER_VERTEX);
        glDeleteShader( HUD_SHADER_FRAGMENT);
        glLinkProgram(HUD_SHADER);
        //--------------------------------------------------------------------------------------------------
        UNIFORM_MODELVIEWPROJ_HUD           = glGetUniformLocation(HUD_SHADER, "mvpMatrix");
        //--------------------------------------------------------------------------------------------------
        UNIFORM_POSITION_MOVE_HUD           = glGetUniformLocation(HUD_SHADER, "position_MOVE");
        UNIFORM_SCALE_HUD                   = glGetUniformLocation(HUD_SHADER, "scale");        
        
        //--------------------------------------------------------------------------------------------------
        UNIFORM_TEXTURE_HUD                 = glGetUniformLocation(HUD_SHADER, "Texture1");





