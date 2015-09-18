                    if(lightArmor_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &lightArmor_NORMALMAP);                                                                                
                            lightArmor_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(lightArmor_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &lightArmor_TEXTUREMAP);                                                                               
                            lightArmor_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(lightArmor_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &lightArmor_VBO);                                                                                       
                            lightArmor_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(lightArmor_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &lightArmor_INDICES_VBO);                                                                               
                            lightArmor_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
