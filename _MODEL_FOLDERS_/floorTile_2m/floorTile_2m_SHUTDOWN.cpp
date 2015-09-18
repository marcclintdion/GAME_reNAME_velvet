                    if(floorTile_2m_NORMALMAP != 0)                                                                                                      
                    {                                                                                                                                              
                            glDeleteTextures(1, &floorTile_2m_NORMALMAP);                                                                                
                            floorTile_2m_NORMALMAP = 0;                                                                                                  
                    }                                                                                                                                              
                    
            //==================================================================        
    
                    if(floorTile_2m_TEXTUREMAP[0]  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &floorTile_2m_TEXTUREMAP[0]);                                                                               
                            floorTile_2m_TEXTUREMAP[0]  = 0;                                                                                                
                    }                                                                                                                                              
                    if(floorTile_2m_TEXTUREMAP[1]  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &floorTile_2m_TEXTUREMAP[1]);                                                                               
                            floorTile_2m_TEXTUREMAP[1]  = 0;                                                                                                
                    }                
                    if(floorTile_2m_TEXTUREMAP[2]  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &floorTile_2m_TEXTUREMAP[2]);                                                                               
                            floorTile_2m_TEXTUREMAP[2]  = 0;                                                                                                
                    }                     
                    if(floorTile_2m_TEXTUREMAP[3]  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &floorTile_2m_TEXTUREMAP[3]);                                                                               
                            floorTile_2m_TEXTUREMAP[3]  = 0;                                                                                                
                    }                
/*                    if(floorTile_2m_TEXTUREMAP[4]  != 0)                                                                                                    
                    {                                                                                                                                              
                            glDeleteTextures(1, &floorTile_2m_TEXTUREMAP[4]);                                                                               
                            floorTile_2m_TEXTUREMAP[4]  = 0;                                                                                                
                    }                          
           
           
*/           
            //==================================================================                    
                    if(floorTile_2m_BATCH_A_VBO  != 0)                                                                                                           
                    {                                                                                                                                              
                            glDeleteBuffers(1, &floorTile_2m_BATCH_A_VBO);                                                                                       
                            floorTile_2m_BATCH_A_VBO  = 0;                                                                                                       
                    }                                                                                                                                              
                    if(floorTile_2m_BATCH_A_INDICES_VBO  != 0)                                                                                                   
                    {                                                                                                                                              
                            glDeleteBuffers(1, &floorTile_2m_BATCH_A_INDICES_VBO);                                                                               
                            floorTile_2m_BATCH_A_INDICES_VBO  = 0;                                                                                               
                    }                                                                                                                                              


