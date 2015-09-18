      //------------------------------------------------------------------------------------------                                              
      #ifdef __APPLE__                                                                                                                          
      filePathName = [[NSBundle mainBundle] pathForResource:@"knight_DOT3" ofType:@"png"];                                                  
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &knight_NORMALMAP);                                                                                                     
      glBindTexture(GL_TEXTURE_2D, knight_NORMALMAP);                                                                                          
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      //---------------------                                                                                                                   
      filePathName = [[NSBundle mainBundle] pathForResource:@"knight" ofType:@"png"];                                                       
      image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                   
      glGenTextures(1, &knight_TEXTUREMAP);                                                                                                       
      glBindTexture(GL_TEXTURE_2D, knight_TEXTUREMAP);                                                                                            
      ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                      
      imgDestroyImage(image);                                                                                                                   
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------                                              
      #ifdef WIN32                                                                                                                            
      loadTexture("_MODEL_FOLDERS_/knight/knight_DOT3.png",          knight_NORMALMAP);                                                      
      loadTexture("_MODEL_FOLDERS_/knight/knight.png",               knight_TEXTUREMAP);                                                        
      #endif                                                                                                                                    
      //------------------------------------------------------------------------------------------------------------//___LOAD_VBO               
      #include    "knight.cpp"                                                                                                                
      glGenBuffers(1,              &knight_VBO);                                                                                                
      glBindBuffer(GL_ARRAY_BUFFER, knight_VBO);                                                                                                
      glBufferData(GL_ARRAY_BUFFER, sizeof(knight), knight, GL_STATIC_DRAW);                                                                    
      glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                         
      //------------------------------------------------------------------------------------------------------------//___LOAD_INDEX_VBO          
      #include    "knight_INDICES.cpp"       
      glGenBuffers(1, &knight_INDICES_VBO);                       
      glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, knight_INDICES_VBO);                   
      glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(knight_INDICES), knight_INDICES, GL_STATIC_DRAW);
      //=================================================================================================================================   



