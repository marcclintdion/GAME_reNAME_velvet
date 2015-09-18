    glBindBuffer(GL_ARRAY_BUFFER, fanBrace_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, fanBrace_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, fanBrace_POSITION[0], fanBrace_POSITION[1], fanBrace_POSITION[2]);                          
    Rotate(modelView, fanBrace_ROTATE[0], fanBrace_ROTATE[1], fanBrace_ROTATE[2], fanBrace_ROTATE[3]); 


//=================================================================================================================         
SelectShader(shaderNumber);
//=================================================================================================================
                                                                                                                              
   
    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, fanBrace_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, fanBrace_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 336, GL_UNSIGNED_INT, 0);                                                                                                     

