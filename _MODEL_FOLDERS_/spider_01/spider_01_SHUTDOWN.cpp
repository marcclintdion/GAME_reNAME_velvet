                    if(spider_01_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &spider_01_NORMALMAP);                                                                                
                            spider_01_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    if(spider_01_TEXTUREMAP  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &spider_01_TEXTUREMAP);                                                                               
                            spider_01_TEXTUREMAP  = 0;                                                                                                
                    }                                                                                                                                              
                    if(spider_01_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &spider_01_VBO);                                                                                       
                            spider_01_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(spider_01_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &spider_01_INDICES_VBO);                                                                               
                            spider_01_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              
