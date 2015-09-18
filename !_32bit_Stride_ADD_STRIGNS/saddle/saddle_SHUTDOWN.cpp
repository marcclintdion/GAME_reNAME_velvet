                    if(saddle_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &saddle_NORMALMAP);                                                                                
                            saddle_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(saddle_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &saddle_TEXTUREMAP);                                                                               
                            saddle_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(saddle_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &saddle_VBO);                                                                                       
                            saddle_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(saddle_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &saddle_INDICES_VBO);                                                                               
                            saddle_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
