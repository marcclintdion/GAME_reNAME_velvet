        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"hips_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &hips_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, hips_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"hips" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &hips_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, hips_TEXTUREMAP);                                                                           
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
        loadTexture("_MODEL_FOLDERS_/hips/hips_DOT3.png",          hips_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/hips/hips.png",               hips_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "hips.cpp"                                                                                                         
        glGenBuffers(1,              &hips_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, hips_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(hips), hips, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "hips_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &hips_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, hips_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(hips_INDICES), hips_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        hips_boundingBox[0] = -0.175255;
        hips_boundingBox[1] = 0.179103;
        hips_boundingBox[2] = -0.145687;
        hips_boundingBox[3] = 0.099092;
        hips_boundingBox[4] = -0.130492;
        hips_boundingBox[5] = 0.126621;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -0.175255;
        collisionBoxArray[boxCount][1] = 0.179103;
        collisionBoxArray[boxCount][2] = -0.145687;
        collisionBoxArray[boxCount][3] = 0.099092;
        collisionBoxArray[boxCount][4] = -0.130492;
        collisionBoxArray[boxCount][5] = 0.126621;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
