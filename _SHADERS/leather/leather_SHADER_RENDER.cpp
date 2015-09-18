
   MultiplyMatrix(mvpMatrix, projection, modelView);                                                                                                                         
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT             
    LoadIdentity(lightMatrix);                                                                                                                                                
    InvertMatrix(lightMatrix, modelView);                                                                                                                                     
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__LIGHT             
    LoadIdentity(textureMatrix);
    //Translate(textureMatrix, shadowsPositionOffset[0], shadowsPositionOffset[1], shadowsPositionOffset[2]);
    //Scale(textureMatrix, scaleShadows, scaleShadows, scaleShadows);   
 
 
 
 glUseProgram(leather_SHADER);          
          //------------------------------------------------------------------------------         
          glVertexAttribPointer(0,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));                                                  
          glEnableVertexAttribArray(0);	                                                                                              
          glVertexAttribPointer(1,     3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));                                                 
          glEnableVertexAttribArray(1);	                                                                                          
          glVertexAttribPointer(2,     2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));                                                 
          glEnableVertexAttribArray(2);                                                                                               
          //------------------------------------------------------------------------------------------------                                
          glUniform4f(UNIFORM_LIGHT_POSITION_01_leather,          leather_LIGHT_POSITION_01[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_01[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_01[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_01[3]*leather_scaleLights);                      
                           
          glUniform4f(UNIFORM_LIGHT_POSITION_02_leather,          leather_LIGHT_POSITION_02[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_02[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_02[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_02[3]*leather_scaleLights);         
         
          glUniform4f(UNIFORM_LIGHT_POSITION_03_leather,          leather_LIGHT_POSITION_03[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_03[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_03[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_03[3]*leather_scaleLights);         
          
          glUniform4f(UNIFORM_LIGHT_POSITION_04_leather,          leather_LIGHT_POSITION_04[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_04[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_04[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_04[3]*leather_scaleLights);         
        
          glUniform4f(UNIFORM_LIGHT_POSITION_05_leather,          leather_LIGHT_POSITION_05[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_05[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_05[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_05[3]*leather_scaleLights);                      
                           
          glUniform4f(UNIFORM_LIGHT_POSITION_06_leather,          leather_LIGHT_POSITION_06[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_06[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_06[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_06[3]*leather_scaleLights);         
         
          glUniform4f(UNIFORM_LIGHT_POSITION_07_leather,          leather_LIGHT_POSITION_07[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_07[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_07[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_07[3]*leather_scaleLights);         
          
          glUniform4f(UNIFORM_LIGHT_POSITION_08_leather,          leather_LIGHT_POSITION_08[0]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_08[1]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_08[2]*leather_scaleLights,                       
                                                                  leather_LIGHT_POSITION_08[3]*leather_scaleLights);         
          
          //------------------------------------------------------------------------------------------------          
          
          glUniform1f(UNIFORM_shininess_leather,                  shininess_leather);
          glUniform1f(UNIFORM_ambient_leather,                    ambient_leather);   
        
          //------------------------------------------------------------------------------------------------
          glUniformMatrix4fv(UNIFORM_MODELVIEW_leather,       1, 0,         modelView);                                             
          glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_leather,   1, 0,         mvpMatrix);                                   
          //---------------     
          glUniformMatrix4fv(UNIFORM_viewMatrix_leather,      1, 0,         viewMatrix);     
          //---------------     
          glUniformMatrix4fv(UNIFORM_SHADOW_PROJ_leather,     1, 0,         ProjectionShadow);
          glUniformMatrix4fv(UNIFORM_modelViewShadow_leather, 1, 0,         modelViewShadow);    
          //---------------                                                                                                                                      //glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_INVERSE_leather, 1, 0, ModelViewProjectionInverse);                            
          glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX_leather,    1, 0,         lightMatrix);                                           
          glUniformMatrix4fv(UNIFORM_TEXTURE_MATRIX_leather,  1, 0,         textureMatrix);                                       
          //-------------------------------------------------------------------------------------------------                                
          glUniform1i(UNIFORM_ShadowTexture_leather,  3);                                                                      
          glUniform1i(UNIFORM_TEXTURE_DOT3_leather,   1);                                                                        
          glUniform1i(UNIFORM_TEXTURE_leather,        0);                                                        
    //====================================================================================================================

//---------------------------------------------------------------
glActiveTexture ( GL_TEXTURE3 );                                                                                                                                          
glBindTexture(GL_TEXTURE_2D, m_uiShadowMapTexture);                                                                                                                          
//---  


