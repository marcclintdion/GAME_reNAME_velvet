       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, hips_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, hips_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, hips_POSITION[0] * scaleMoveShadows[0],         
                                              hips_POSITION[1] * scaleMoveShadows[1],         
                                              hips_POSITION[2] * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    hips_ROTATE[0],                                 
                                              hips_ROTATE[1],                                 
                                              hips_ROTATE[2],                                 
                                              hips_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 588, GL_UNSIGNED_INT, 0);                                              
