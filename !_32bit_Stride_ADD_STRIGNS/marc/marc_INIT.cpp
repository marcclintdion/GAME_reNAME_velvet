        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"marc_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &marc_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, marc_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"marc" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &marc_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, marc_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------                                                                                                                                  
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/marc/marc_DOT3.png",          marc_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/marc/marc.png",               marc_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "marc.cpp"                                                                                                         
        glGenBuffers(1,              &marc_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, marc_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(marc), marc, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "marc_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &marc_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, marc_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(marc_INDICES), marc_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        marc_boundingBox[0] = -0.262148;
        marc_boundingBox[1] = 0.270252;
        marc_boundingBox[2] = -0.89838;
        marc_boundingBox[3] = 0.902014;
        marc_boundingBox[4] = -0.177793;
        marc_boundingBox[5] = 0.188104;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -0.262148;
        collisionBoxArray[boxCount][1] = 0.270252;
        collisionBoxArray[boxCount][2] = -0.89838;
        collisionBoxArray[boxCount][3] = 0.902014;
        collisionBoxArray[boxCount][4] = -0.177793;
        collisionBoxArray[boxCount][5] = 0.188104;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
