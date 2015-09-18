                    if(fanBlades_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &fanBlades_NORMALMAP);                                                                                
                            fanBlades_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(fanBlades_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &fanBlades_TEXTUREMAP);                                                                               
                            fanBlades_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(fanBlades_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &fanBlades_VBO);                                                                                       
                            fanBlades_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(fanBlades_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &fanBlades_INDICES_VBO);                                                                               
                            fanBlades_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
