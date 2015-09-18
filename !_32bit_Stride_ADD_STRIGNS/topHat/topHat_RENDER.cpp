            shaderNumber = 50;//plastic/rubber/                                                                               
            setupTransforms_MainColor();                                                                                      
    glBindBuffer(GL_ARRAY_BUFFER, topHat_VBO);                                                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, topHat_INDICES_VBO);                                                                                                                                
    //----------------------------------------------------------------------------------------------------------------------------------------------           
    Translate(modelView, topHat_POSITION[0], topHat_POSITION[1], topHat_POSITION[2]);                          
    Rotate(modelView, topHat_ROTATE[0], topHat_ROTATE[1], topHat_ROTATE[2], topHat_ROTATE[3]); 

//======================================================================================================                                                       
    SelectShader(shaderNumber);                                                                                                                              
//======================================================================================================                                                       

    glActiveTexture ( GL_TEXTURE1 );                                                                                                                           
    glBindTexture(GL_TEXTURE_2D, topHat_NORMALMAP);                                                                                            
    //---                                                                                                                                                      
    glActiveTexture (GL_TEXTURE0);                                                                                                                             
    glBindTexture(GL_TEXTURE_2D, topHat_TEXTUREMAP);                                                                                           
    //---------------------------------------------------------------------------------------------------------------------------------------------------      
    glDrawElements(GL_TRIANGLES, 3168, GL_UNSIGNED_INT, 0);                                                                                                     

