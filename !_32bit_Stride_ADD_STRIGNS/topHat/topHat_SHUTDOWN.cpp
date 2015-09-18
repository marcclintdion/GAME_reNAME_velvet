                    if(topHat_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &topHat_NORMALMAP);                                                                                
                            topHat_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(topHat_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &topHat_TEXTUREMAP);                                                                               
                            topHat_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(topHat_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &topHat_VBO);                                                                                       
                            topHat_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(topHat_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &topHat_INDICES_VBO);                                                                               
                            topHat_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
