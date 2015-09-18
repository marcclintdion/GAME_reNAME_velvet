/*
//------------------------------------------------------------------------------------------
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"lightArmor_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &lightArmor_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, lightArmor_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"lightArmor" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &lightArmor_TEXTUREMAP);                                                                                      
                glBindTexture(GL_TEXTURE_2D, lightArmor_TEXTUREMAP);                                                                           
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
spriteImage             = [UIImage imageNamed:@"lightArmor_DOT3.png"].CGImage;
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
glGenTextures(1, &lightArmor_NORMALMAP);
glBindTexture(GL_TEXTURE_2D, lightArmor_NORMALMAP);
ConfigureAndLoadTexture(spriteData,  width, height);
if(spriteData != NULL)
{
	free(spriteData);
}
//----------------------------------------------------------------------------------------------------------
spriteImage             = [UIImage imageNamed:@"lightArmor.png"].CGImage;
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
glGenTextures(1, &lightArmor_TEXTUREMAP);
glBindTexture(GL_TEXTURE_2D, lightArmor_TEXTUREMAP);
ConfigureAndLoadTexture(spriteData,  width, height);
if(spriteData != NULL)
{
	free(spriteData);
}
//----
#endif


//------------------------------------------------------------------------------------------
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/lightArmor/lightArmor_DOT3.png",          lightArmor_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/lightArmor/lightArmor.png",               lightArmor_TEXTUREMAP);               
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------------------------//___LOAD_VBO                        
        #include    "lightArmor.cpp"                                                                                                         
        glGenBuffers(1,              &lightArmor_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, lightArmor_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(lightArmor), lightArmor, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //------------------------------------------------------------------------------------------------------------                                     
        #include    "lightArmor_INDICES.cpp"                                                                                                 
        glGenBuffers(1,              &lightArmor_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, lightArmor_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(lightArmor_INDICES), lightArmor_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //------------------------------------------------------------------------------------------------------------                                       
        //====================================================================================   
        lightArmor_boundingBox[0] = -0.278123;
        lightArmor_boundingBox[1] = 0.283511;
        lightArmor_boundingBox[2] = -0.633422;
        lightArmor_boundingBox[3] = 1.15155;
        lightArmor_boundingBox[4] = -0.182691;
        lightArmor_boundingBox[5] = 0.195102;
        //====================================================================================   
        collisionBoxArray[boxCount][0] = -0.278123;
        collisionBoxArray[boxCount][1] = 0.283511;
        collisionBoxArray[boxCount][2] = -0.633422;
        collisionBoxArray[boxCount][3] = 1.15155;
        collisionBoxArray[boxCount][4] = -0.182691;
        collisionBoxArray[boxCount][5] = 0.195102;
        collisionBoxArray[boxCount][6] = boxCount;
//        boxCount++;
