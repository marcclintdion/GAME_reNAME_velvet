                    if(fanBrace_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &fanBrace_NORMALMAP);                                                                                
                            fanBrace_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(fanBrace_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &fanBrace_TEXTUREMAP);                                                                               
                            fanBrace_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(fanBrace_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &fanBrace_VBO);                                                                                       
                            fanBrace_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(fanBrace_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &fanBrace_INDICES_VBO);                                                                               
                            fanBrace_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
