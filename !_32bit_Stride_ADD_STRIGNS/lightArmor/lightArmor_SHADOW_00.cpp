       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, lightArmor_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, lightArmor_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, lightArmor_POSITION[0] * scaleMoveShadows[0],         
                                              lightArmor_POSITION[1] * scaleMoveShadows[1],         
                                              lightArmor_POSITION[2] * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    lightArmor_ROTATE[0],                                 
                                              lightArmor_ROTATE[1],                                 
                                              lightArmor_ROTATE[2],                                 
                                              lightArmor_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 18243, GL_UNSIGNED_INT, 0);                                              
