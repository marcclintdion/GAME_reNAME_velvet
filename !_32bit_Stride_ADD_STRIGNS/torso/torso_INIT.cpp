        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"torso_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &torso_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, torso_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"torso" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &torso_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, torso_TEXTUREMAP);                                                                           
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
        loadTexture("_MODEL_FOLDERS_/torso/torso_DOT3.png",          torso_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/torso/torso.png",               torso_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "torso.cpp"                                                                                                         
        glGenBuffers(1,              &torso_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, torso_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(torso), torso, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "torso_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &torso_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, torso_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(torso_INDICES), torso_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        torso_boundingBox[0] = -0.170691;
        torso_boundingBox[1] = 0.18035;
        torso_boundingBox[2] = 0.003407;
        torso_boundingBox[3] = 0.547819;
        torso_boundingBox[4] = -0.194314;
        torso_boundingBox[5] = 0.124792;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -0.170691;
        collisionBoxArray[boxCount][1] = 0.18035;
        collisionBoxArray[boxCount][2] = 0.003407;
        collisionBoxArray[boxCount][3] = 0.547819;
        collisionBoxArray[boxCount][4] = -0.194314;
        collisionBoxArray[boxCount][5] = 0.124792;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
