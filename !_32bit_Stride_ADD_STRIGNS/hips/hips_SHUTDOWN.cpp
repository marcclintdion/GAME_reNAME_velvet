                    if(hips_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &hips_NORMALMAP);                                                                                
                            hips_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(hips_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &hips_TEXTUREMAP);                                                                               
                            hips_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(hips_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &hips_VBO);                                                                                       
                            hips_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(hips_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &hips_INDICES_VBO);                                                                               
                            hips_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
