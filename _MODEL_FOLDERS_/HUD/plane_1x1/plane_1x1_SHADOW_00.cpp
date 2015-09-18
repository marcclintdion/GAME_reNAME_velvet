       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, plane_1x1_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, plane_1x1_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, plane_1x1_POSITION[0] * scaleMoveShadows[0],         
                                              plane_1x1_POSITION[1] * scaleMoveShadows[1],         
                                              plane_1x1_POSITION[2] * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    plane_1x1_ROTATE[0],                                 
                                              plane_1x1_ROTATE[1],                                 
                                              plane_1x1_ROTATE[2],                                 
                                              plane_1x1_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);                                              
