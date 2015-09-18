                                                                                                                                            
                    if(plane_1x1_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &plane_1x1_TEXTUREMAP);                                                                               
                            plane_1x1_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(plane_1x1_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &plane_1x1_VBO);                                                                                       
                            plane_1x1_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(plane_1x1_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &plane_1x1_INDICES_VBO);                                                                               
                            plane_1x1_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
