                                                                                                                                           
        //========================================================================                                                                                  
        #ifdef __APPLE__                                                                                                                                            
        //--------------                                                                                                                                            
          spriteImage             = [UIImage imageNamed:@"saddle_DOT3.png"].CGImage;                                                              
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
                glGenTextures(1, &saddle_NORMALMAP);                                                                                                
                glBindTexture(GL_TEXTURE_2D, saddle_NORMALMAP);                                                                                     
          ConfigureAndLoadTexture(spriteData,  width, height);                                                                                                      
          if(spriteData != NULL)                                                                                                                                    
          {                                                                                                                                                         
                  free(spriteData);                                                                                                                                 
          }                                                                                                                                                         
        //----------------------------------------------------------------------------------------------------------                                                
          spriteImage             = [UIImage imageNamed:@"saddle.png"].CGImage;                                                                   
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
          glGenTextures(1, &saddle_TEXTUREMAP);                                                                                                     
          glBindTexture(GL_TEXTURE_2D, saddle_TEXTUREMAP);                                                                                          
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
        loadTexture("_MODEL_FOLDERS_/saddle/saddle_DOT3.png",          saddle_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/saddle/saddle.png",               saddle_TEXTUREMAP);               
        #endif                                                                                                                                             
        //-----------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "saddle.cpp"                                                                                                         
        glGenBuffers(1,              &saddle_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, saddle_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(saddle), saddle, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "saddle_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &saddle_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, saddle_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(saddle_INDICES), saddle_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        saddle_boundingBox[0] = -0.282568;
        saddle_boundingBox[1] = 0.282568;
        saddle_boundingBox[2] = 0.286773;
        saddle_boundingBox[3] = 0.598781;
        saddle_boundingBox[4] = -0.706582;
        saddle_boundingBox[5] = 6.88766e-040;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -0.282568;
        collisionBoxArray[boxCount][1] = 0.282568;
        collisionBoxArray[boxCount][2] = 0.286773;
        collisionBoxArray[boxCount][3] = 0.598781;
        collisionBoxArray[boxCount][4] = -0.706582;
        collisionBoxArray[boxCount][5] = 6.88766e-040;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
