                    if(woodLongThinBox_0_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &woodLongThinBox_0_NORMALMAP);                                                                                
                            woodLongThinBox_0_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(woodLongThinBox_0_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &woodLongThinBox_0_TEXTUREMAP);                                                                               
                            woodLongThinBox_0_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(woodLongThinBox_0_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &woodLongThinBox_0_VBO);                                                                                       
                            woodLongThinBox_0_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(woodLongThinBox_0_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &woodLongThinBox_0_INDICES_VBO);                                                                               
                            woodLongThinBox_0_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
