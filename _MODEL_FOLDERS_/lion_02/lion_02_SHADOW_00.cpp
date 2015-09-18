       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, lion_02_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, lion_02_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, lion_02_POSITION[0] * scaleMoveShadows[0],         
                                              lion_02_POSITION[1] * scaleMoveShadows[1],         
                                              lion_02_POSITION[2] * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    lion_02_ROTATE[0],                                 
                                              lion_02_ROTATE[1],                                 
                                              lion_02_ROTATE[2],                                 
                                              lion_02_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 50388, GL_UNSIGNED_INT, 0);                                              
