bool        generateRotationsOnce              =    true;    
bool        displayTileOrNot[30];

//-----------------------------------------------------------------                                                                                   
GLuint      floorTile_2m_BATCH_A_VBO;                                                                                                               
GLuint      floorTile_2m_BATCH_A_INDICES_VBO;
GLuint      numberOfFloorTile_2m_Instances_BATCH_A = 0; 
//-----------------------------------------------------                                                                                  
GLuint      floorTile_2m_BATCH_B_VBO;                                                                                                               
GLuint      floorTile_2m_BATCH_B_INDICES_VBO;
GLuint      numberOfFloorTile_2m_Instances_BATCH_B = 0; 





/*


GLint       floorTextureAssignment_01[]        = {2,  8, 7, 4, 1, 
                                                  9,  4, 3, 6, 5, 
                                                  8,  3, 2, 1, 4};
*/
//-----------------------------------------------------------------  
GLint       floorTextureAssignment_01[]        = {0,  3, 2, 1, 2, 
                                                  3,  1, 0, 2, 3, 
                                                  2,  0, 3, 1, 0};
//-----------------------------------------------------------------  
GLuint      numberOfInstances                  =  2;

GLfloat     floorTile_2m_POSITION[]            =  {  0.0, -2.5, 0.0, 1.0};                                                                   
GLfloat     floorTile_2m_ROTATE[]              =  {  0.0,  1.0,  0.0, 0.0};                                                                  
GLfloat     floorTile_2m_SCALE[]               =  {  1.0,  1.0,  1.0, 1.0};                                                                  
//-----------------------------------------------------------------                                                                                   
GLfloat     floorTile_2m_LIGHT_POSITION_01[]   =  {  2.0, 15.0, 30.0, 1.0};                                                                 
GLfloat     floorTile_2m_SHININESS             =    80.0;                                                                                   
GLfloat     floorTile_2m_ATTENUATION           =     1.0;                                                                                   


                                                                                                       
//-----------------------------------------------------------------                                                                                   
GLuint      floorTile_2m_NORMALMAP;                                                                                                         

const int numberOfMarbleFloorTiles = 20;

GLuint      floorTile_2m_TEXTUREMAP[numberOfMarbleFloorTiles];      

                                                                                               
//====================================================================================   
GLfloat floorTile_2m_boundingBox[6]; 
