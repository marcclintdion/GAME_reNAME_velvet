            shaderNumber = 38;//plastic/rubber/                                                                               
            setupTransforms_MainColor();                                                                                      
    glBindBuffer(GL_ARRAY_BUFFER, lion_02_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, lion_02_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, lion_02_POSITION[0], lion_02_POSITION[1], lion_02_POSITION[2]);                          
    Rotate(modelView, lion_02_ROTATE[0], lion_02_ROTATE[1], lion_02_ROTATE[2], lion_02_ROTATE[3]++); 

//======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, lion_02_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, lion_02_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 50388, GL_UNSIGNED_INT, 0);                                                                                                     

