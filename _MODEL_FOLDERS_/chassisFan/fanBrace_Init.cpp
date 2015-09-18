/*        //------------------------------------------------------------------------------------------
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"fanAssembly_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &fanBrace_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, fanBrace_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"fanAssembly" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &fanBrace_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, fanBrace_TEXTUREMAP);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------                                                                                                                                  
        #endif   
*/


//========================================================================
#ifdef __APPLE__
//--------------
spriteImage             = [UIImage imageNamed:@"fanAssembly_DOT3.png"].CGImage;
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
glGenTextures(1, &fanBrace_NORMALMAP);
glBindTexture(GL_TEXTURE_2D, fanBrace_NORMALMAP);
ConfigureAndLoadTexture(spriteData,  width, height);
if(spriteData != NULL)
{
	free(spriteData);
}
//----------------------------------------------------------------------------------------------------------
spriteImage             = [UIImage imageNamed:@"fanAssembly.png"].CGImage;
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
glGenTextures(1, &fanBrace_TEXTUREMAP);
glBindTexture(GL_TEXTURE_2D, fanBrace_TEXTUREMAP);
ConfigureAndLoadTexture(spriteData,  width, height);
if(spriteData != NULL)
{
	free(spriteData);
}
//----
#endif

        //------------------------------------------------------------------------------------------
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/chassisFan/fanAssembly_DOT3.png",          fanBrace_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/chassisFan/fanAssembly.png",               fanBrace_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "fanBrace.cpp"                                                                                                         
        glGenBuffers(1,              &fanBrace_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, fanBrace_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(fanBrace), fanBrace, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "fanBrace_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &fanBrace_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, fanBrace_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(fanBrace_INDICES), fanBrace_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        fanBrace_boundingBox[0] = -0.850145;
        fanBrace_boundingBox[1] = 0.850146;
        fanBrace_boundingBox[2] = 0.208965;
        fanBrace_boundingBox[3] = 0.238526;
        fanBrace_boundingBox[4] = -0.850147;
        fanBrace_boundingBox[5] = 0.850146;
        //====================================================================================   
/*        collisionBoxArray[boxCount][0] = -0.850145;
        collisionBoxArray[boxCount][1] = 0.850146;
        collisionBoxArray[boxCount][2] = 0.208965;
        collisionBoxArray[boxCount][3] = 0.238526;
        collisionBoxArray[boxCount][4] = -0.850147;
        collisionBoxArray[boxCount][5] = 0.850146;
        collisionBoxArray[boxCount][6] = boxCount;
        boxCount++;
*/
                                                            
//==================================================================================== 
