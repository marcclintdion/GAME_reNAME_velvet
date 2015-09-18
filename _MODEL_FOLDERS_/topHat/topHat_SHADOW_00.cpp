       shaderNumber = 47;                                                                                       
       setupTransforms_Shadows();                                                                             
                                                                                                                
       glBindBuffer(GL_ARRAY_BUFFER, topHat_VBO);                                               
       glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, topHat_INDICES_VBO);                               
       //------------------------------------------------------------------------------------------------------ 
              //---------------------------------------------------------------------------                     
              Translate(LightModelViewMatrix, (spider_01_POSITION[0] + topHat_POSITION[0]) * scaleMoveShadows[0],         
                                              (spider_01_POSITION[1] + topHat_POSITION[1]) * scaleMoveShadows[1],         
                                              (spider_01_POSITION[2] + topHat_POSITION[2]) * scaleMoveShadows[2]);        
              //---------------------------------------------------------------------------                     
              Rotate(LightModelViewMatrix,    spider_01_ROTATE[0],                                 
                                              spider_01_ROTATE[1],                                 
                                              spider_01_ROTATE[2],                                 
                                              spider_01_ROTATE[3]);                                
       //------------------------------------------------------------------------------------------------------ 
       SelectShader(shaderNumber);                                                                              
       //------------------------------------------------------------------------------------------------------ 
           //-------------------------------------------------------------------------------------------------- 
           glDrawElements(GL_TRIANGLES, 3168, GL_UNSIGNED_INT, 0);                                              
