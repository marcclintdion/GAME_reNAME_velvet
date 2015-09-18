            shaderNumber = 26;//plastic/rubber/                                                                               
            setupTransforms_MainColor();                                                                                      
    glBindBuffer(GL_ARRAY_BUFFER, lightArmor_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, lightArmor_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, lightArmor_POSITION[0], lightArmor_POSITION[1], lightArmor_POSITION[2]);                          
    Rotate(modelView, lightArmor_ROTATE[0], lightArmor_ROTATE[1], lightArmor_ROTATE[2], lightArmor_ROTATE[3]); 

//======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, lightArmor_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, lightArmor_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 18243, GL_UNSIGNED_INT, 0);                                                                                                     

