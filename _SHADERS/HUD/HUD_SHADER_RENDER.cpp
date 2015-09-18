LoadIdentity(modelView);

//--------------------------------------------------------------------------
#ifdef WIN32
Translate(modelView, display_00_MOVE[0], display_00_MOVE[1],display_00_MOVE[2]);    
Rotate(modelView, 0.0, 0.0, 1.0, 0.0); 
Scale(modelView, display_00_SCALE[0]/scaleScreenAlignedQuadRatio, display_00_SCALE[1], display_00_SCALE[2]);
#endif

//--------------------------------------------------------------------------
#ifdef __APPLE__
Translate(modelView, display_00_MOVE[0], display_00_MOVE[1],display_00_MOVE[2]);    
Rotate(modelView, 0.0, 0.0, 1.0, -90.0); 
Scale(modelView, display_00_SCALE[0]*scaleScreenAlignedQuadRatio, display_00_SCALE[1], display_00_SCALE[2]);
#endif     

    //-------------------------------------------------------------------------------------------------------------------   
    glUseProgram(HUD_SHADER);          
    //-------------------------------------------------------------------------------         
          glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));                                                  
          glEnableVertexAttribArray(0);	                                                                                              
          glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));                                                 
          glEnableVertexAttribArray(1);	                                                                                          
          glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));
          glEnableVertexAttribArray(2);
          //-------------------------------------------------------------------------
          glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_HUD,   1, 0,         modelView);                                   
          //-------------------------------------------------------------------------
          glUniform4f(UNIFORM_POSITION_MOVE_HUD, display_00_MOVE[0], display_00_MOVE[1], display_00_MOVE[2], display_00_MOVE[3]);
    //-------------------------------------------------------------------------------------------------------------------   
    #ifdef WIN32
       //   glUniform4f(UNIFORM_SCALE_HUD,         display_00_SCALE[0]/scaleScreenAlignedQuadRatio,display_00_SCALE[1],display_00_SCALE[2],display_00_SCALE[3]);
    #endif 
    //--------------  
    #ifdef __APPLE__
       //   glUniform4f(UNIFORM_SCALE_HUD,         display_00_SCALE[1],display_00_SCALE[0]*scaleScreenAlignedQuadRatio,display_00_SCALE[2],display_00_SCALE[3]);
    #endif 
    //-------------------------------------------------------------------------------------------------------------------   
          glUniform1i(UNIFORM_TEXTURE_HUD,        0);
    //===================================================================================================================


