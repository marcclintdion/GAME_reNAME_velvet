        //------------------------------------------------------------------------------------------                                                       
        #ifdef __APPLE__                                                                                                                                   
        //---------------                                                                                                                                  
        filePathName = [[NSBundle mainBundle] pathForResource:@"floorTile_2m_DOT3" ofType:@"png"];                                           
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &floorTile_2m_NORMALMAP);                                                                                       
                glBindTexture(GL_TEXTURE_2D, floorTile_2m_NORMALMAP);                                                                            
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------------                                                                                                                            
        filePathName = [[NSBundle mainBundle] pathForResource:@"marble_100" ofType:@"png"];                                                
        if(filePathName != nil)                                                                                                                                
        {                                                                                                                                                  
                image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
                glGenTextures(1, &floorTile_2m_TEXTUREMAP[0]);                                                                                      
                glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[0]);                                                                           
                ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
                imgDestroyImage(image);                                                                                                                    
           filePathName = nil;                                                                                                                                 
        }else                                                                                                                                              
            {                                                                                                                                              
               //add error file output here                                                                                                                
            }                                                                                                                                              
        //---------------  
                                                                                                                                    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_101" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[1]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[1]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_102" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[2]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[2]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_103" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[3]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[3]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    
/*
//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_35" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[4]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[4]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_36" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[5]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[5]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    

//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_37" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[6]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[6]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_38" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[7]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[7]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    
//---------------    
filePathName = [[NSBundle mainBundle] pathForResource:@"marble_39" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[8]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[8]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------       

filePathName = [[NSBundle mainBundle] pathForResource:@"marble_40" ofType:@"png"];                                                
if(filePathName != nil)                                                                                                                                
{                                                                                                                                                  
        image = imgLoadImage([filePathName cStringUsingEncoding:NSASCIIStringEncoding]);                                                           
        glGenTextures(1, &floorTile_2m_TEXTUREMAP[9]);                                                                                      
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[9]);                                                                           
        ConfigureAndLoadTexture(image->data,  image->width, image->height );                                                                       
        imgDestroyImage(image);                                                                                                                    
        filePathName = nil;                                                                                                                                 
}else                                                                                                                                              
{                                                                                                                                              
        //add error file output here                                                                                                                
}                                                                                                                                              
//---------------    

*/


        //==================================================================================================
        #endif                                                                                                                                             
        //------------------------------------------------------------------------------------------                                                       
        #ifdef WIN32                                                                                                                                       
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/floorTile_2m_DOT3.png",          floorTile_2m_NORMALMAP);                
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_100.png",               floorTile_2m_TEXTUREMAP[0]);               
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_101.png",               floorTile_2m_TEXTUREMAP[1]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_102.png",               floorTile_2m_TEXTUREMAP[2]);        
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_103.png",               floorTile_2m_TEXTUREMAP[3]);          
/*        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_35.png",               floorTile_2m_TEXTUREMAP[4]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_36.png",               floorTile_2m_TEXTUREMAP[5]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_37.png",               floorTile_2m_TEXTUREMAP[6]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_38.png",               floorTile_2m_TEXTUREMAP[7]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_39.png",               floorTile_2m_TEXTUREMAP[8]);          
        loadTexture("_MODEL_FOLDERS_/floorTile_2m/marble_40.png",               floorTile_2m_TEXTUREMAP[9]);               
*/      
       
        #endif                                                                                                                                             
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================         
        
        numberOfFloorTile_2m_Instances_BATCH_A = 0;                                                                                                                     

//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================   

        #include    "floorTile_2m.cpp"                                                                                                         
        #include    "floorTile_2m_INDICES.cpp"   
        //----------------------------------------------------------------------
        GLfloat flippedAxisFloorTiles_2m[COUNT_OF(floorTile_2m)];
        //-----------------
        float angle_rad; 
        float angleDegrees;    
        //---------------------
        GLuint   currentValue;
        GLuint   highestValueSoFar = 0;
        //-----------------------------   
        GLfloat tile_2m_BATCH_A_CreateInstance[5];
        GLfloat tile_2m_BATCH_B_CreateInstance[5];        
              
//================================================        
tile_2m_BATCH_A_CreateInstance[0] = 1;
tile_2m_BATCH_A_CreateInstance[1] = 1;
tile_2m_BATCH_A_CreateInstance[2] = 1;
tile_2m_BATCH_A_CreateInstance[3] = 1;
tile_2m_BATCH_A_CreateInstance[4] = 1;

#include "BATCH_A/batch_A_INIT.cpp"
//-------------------------------------
tile_2m_BATCH_B_CreateInstance[0] = 1;
tile_2m_BATCH_B_CreateInstance[1] = 1;
tile_2m_BATCH_B_CreateInstance[2] = 1;
tile_2m_BATCH_B_CreateInstance[3] = 1;
tile_2m_BATCH_B_CreateInstance[4] = 0;

#include "BATCH_B/batch_B_INIT.cpp"
//-------------------------------------








                              
                                  
