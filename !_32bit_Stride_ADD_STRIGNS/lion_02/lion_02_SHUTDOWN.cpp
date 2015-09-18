                    if(lion_02_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &lion_02_NORMALMAP);                                                                                
                            lion_02_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(lion_02_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &lion_02_TEXTUREMAP);                                                                               
                            lion_02_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(lion_02_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &lion_02_VBO);                                                                                       
                            lion_02_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(lion_02_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &lion_02_INDICES_VBO);                                                                               
                            lion_02_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
