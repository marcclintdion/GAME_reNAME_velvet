//=================================================================================================================      
glBindBuffer(GL_ARRAY_BUFFER, knight_VBO);    
glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, knight_INDICES_VBO);                                                                                                                                 
//=================================================================================================================   

       //------------------------------------------------------------------------------------------------
       Translate(LightModelViewMatrix, knight_POSITION[0] * scaleMoveShadows[0], 
                                       knight_POSITION[1] * scaleMoveShadows[1], 
                                       knight_POSITION[2] * scaleMoveShadows[2]);        
                                  //----------------------------------------
       Rotate(LightModelViewMatrix,    knight_ROTATE[0], 
                                       knight_ROTATE[1], 
                                       knight_ROTATE[2], 
                                       knight_ROTATE[3]);        

      
SelectShader(shaderNumber);
//=================================================================================================================


       glDrawElements(GL_TRIANGLES, 1866, GL_UNSIGNED_INT, 0);  
