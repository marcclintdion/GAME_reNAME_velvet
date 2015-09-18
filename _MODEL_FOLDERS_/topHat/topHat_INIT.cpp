                                                                                                                           
        //========================================================================                                                                                  
        #ifdef __APPLE__                                                                                                                                            
        //--------------                                                                                                                                            
          spriteImage             = [UIImage imageNamed:@"topHat_DOT3.png"].CGImage;                                                              
          width                   =  CGImageGetWidth(spriteImage);                                                                                                  
          height                  =  CGImageGetHeight(spriteImage);                                                                                                 
          spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                                                                            
          spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
          CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                                                                                   
          CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                                                                                   
          CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                                                                                   
          CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                                                                         
          CGContextRelease(spriteContext);                                                                                                                          
          //---------                                                                                                                                               
                glGenTextures(1, &topHat_NORMALMAP);                                                                                                
                glBindTexture(GL_TEXTURE_2D, topHat_NORMALMAP);                                                                                     
          ConfigureAndLoadTexture(spriteData,  width, height);                                                                                                      
          if(spriteData != NULL)                                                                                                                                    
          {                                                                                                                                                         
                  free(spriteData);                                                                                                                                 
          }                                                                                                                                                         
        //----------------------------------------------------------------------------------------------------------                                                
          spriteImage             = [UIImage imageNamed:@"topHat.png"].CGImage;                                                                   
          width                   =  CGImageGetWidth(spriteImage);                                                                                                  
          height                  =  CGImageGetHeight(spriteImage);                                                                                                 
          spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                                                                            
          spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
          CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                                                                                   
          CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                                                                                   
          CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                                                                                   
          CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                                                                         
          CGContextRelease(spriteContext);                                                                                                                          
          //---------                                                                                                                                               
          glGenTextures(1, &topHat_TEXTUREMAP);                                                                                                     
          glBindTexture(GL_TEXTURE_2D, topHat_TEXTUREMAP);                                                                                          
          ConfigureAndLoadTexture(spriteData,  width, height);                                                                                                      
          if(spriteData != NULL)                                                                                                                                    
          {                                                                                                                                                         
                  free(spriteData);                                                                                                                                 
          }                                                                                                                                                         
        //----                                                                                                                                                      
        #endif                                                                                                                                                      
        //========================================================================                                                                                  
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/topHat/topHat_DOT3.png",          topHat_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/topHat/topHat.png",               topHat_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "topHat.cpp"                                                                                                         
        glGenBuffers(1,              &topHat_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, topHat_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(topHat), topHat, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "topHat_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &topHat_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, topHat_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(topHat_INDICES), topHat_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        topHat_boundingBox[0] = -0.171257;
        topHat_boundingBox[1] = 0.171257;
        topHat_boundingBox[2] = 0.378092;
        topHat_boundingBox[3] = 0.628931;
        topHat_boundingBox[4] = -0.168346;
        topHat_boundingBox[5] = 0.170111;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -0.171257;
        collisionBoxArray[boxCount][1] = 0.171257;
        collisionBoxArray[boxCount][2] = 0.378092;
        collisionBoxArray[boxCount][3] = 0.628931;
        collisionBoxArray[boxCount][4] = -0.168346;
        collisionBoxArray[boxCount][5] = 0.170111;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
