                                                                                   
    glBindBuffer(GL_ARRAY_BUFFER, plane_1x1_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, plane_1x1_INDICES_VBO);                                                                                                                                
    //------------------------------------------------------------------------------------------------------     
    
    //Transforms are in the shader    
    
    //Translate(modelView_HUD, plane_1x1_POSITION[0], plane_1x1_POSITION[1], plane_1x1_POSITION[2]);                          
    //Rotate(modelView_HUD, plane_1x1_ROTATE[0], plane_1x1_ROTATE[1], plane_1x1_ROTATE[2], plane_1x1_ROTATE[3]); 
    
    //Transforms are in the shader
   
    //======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
    //===================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, plane_1x1_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, plane_1x1_TEXTUREMAP);                                                                                           
    //---------------------------------------------------
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);                                                                                                     

