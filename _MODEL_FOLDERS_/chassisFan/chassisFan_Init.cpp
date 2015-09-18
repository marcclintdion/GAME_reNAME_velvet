/*        //============================================================================================================
        #ifdef __APPLE__
        //---------------
        filePathName = [[NSBundle mainBundle] pathForResource:@"chassisFan_DOT3" ofType:@"png"];
        if(filePathName != nil)
        {
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
                glGenTextures(1, &chassisFan_NORMALMAP);
                glBindTexture(GL_TEXTURE_2D, chassisFan_NORMALMAP);
                ConfigureAndLoadTexture(image->data,  image->width, image->height );
                imgDestroyImage(image);
                filePathName = nil;
        }
        //---------------------
        filePathName = [[NSBundle mainBundle] pathForResource:@"chassisFan" ofType:@"png"];
        if(filePathName != nil)
        {
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);
                glGenTextures(1, &chassisFan_TEXTUREMAP);
                glBindTexture(GL_TEXTURE_2D, chassisFan_TEXTUREMAP);
                ConfigureAndLoadTexture(image->data,  image->width, image->height );
                imgDestroyImage(image);
                filePathName = nil;
        }
        //---------------
        #endif


*/
 //========================================================================
 #ifdef __APPLE__
 //--------------
 spriteImage             = [UIImage imageNamed:@"chassisFan_DOT3.png"].CGImage;
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
 glGenTextures(1, &chassisFan_NORMALMAP);
 glBindTexture(GL_TEXTURE_2D, chassisFan_NORMALMAP);
 ConfigureAndLoadTexture(spriteData,  width, height);
 if(spriteData != NULL)
 {
 free(spriteData);
 }
 //----------------------------------------------------------------------------------------------------------
 spriteImage             = [UIImage imageNamed:@"chassisFan.png"].CGImage;
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
 glGenTextures(1, &chassisFan_TEXTUREMAP);
 glBindTexture(GL_TEXTURE_2D, chassisFan_TEXTUREMAP);
 ConfigureAndLoadTexture(spriteData,  width, height);
 if(spriteData != NULL)
 {
 free(spriteData);
 }
 //----
 #endif
 

 
 
        //============================================================================================================
        #ifdef WIN32
        loadTexture("_MODEL_FOLDERS_/chassisFan/chassisFan_DOT3.png",          chassisFan_NORMALMAP);
        loadTexture("_MODEL_FOLDERS_/chassisFan/chassisFan.png",               chassisFan_TEXTUREMAP);
        #endif
        //------------------------------------------------------------------------------------------------------------
        #include    "chassisFan.cpp"
        glGenBuffers(1,              &chassisFan_VBO);
        glBindBuffer(GL_ARRAY_BUFFER, chassisFan_VBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(chassisFan), chassisFan, GL_STATIC_DRAW);
        glBindBuffer(GL_ARRAY_BUFFER, 0);
        //------------------------------------------------------------------------------------------------------------
        #include    "chassisFan_INDICES.cpp"
        glGenBuffers(1,              &chassisFan_INDICES_VBO);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, chassisFan_INDICES_VBO);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(chassisFan_INDICES), chassisFan_INDICES, GL_STATIC_DRAW);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
        //------------------------------------------------------------------------------------------------------------
