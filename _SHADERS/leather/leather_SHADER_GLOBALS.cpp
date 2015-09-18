                    
var         leather_LIGHT_POSITION_01[]     =  {  50.0,  -50.0,  50.0,  1.0};
var         leather_LIGHT_POSITION_02[]     =  {  50.0,   50.0,  50.0,  1.0};
var         leather_LIGHT_POSITION_03[]     =  { -50.0,   50.0,  50.0,  1.0};
var         leather_LIGHT_POSITION_04[]     =  { -50.0,  -50.0,  50.0,  1.0};
var         leather_LIGHT_POSITION_05[]     =  {  50.0,  -50.0, -50.0,  1.0};
var         leather_LIGHT_POSITION_06[]     =  {  50.0,   50.0, -50.0,  1.0};
var         leather_LIGHT_POSITION_07[]     =  { -50.0,   50.0, -50.0,  1.0};
var         leather_LIGHT_POSITION_08[]     =  { -50.0,  -50.0, -50.0,  1.0};


var         ambient_leather                   =    0.0539995; 
var         shininess_leather                 =   18.95;

var         leather_scaleLights               =    1.0;
//--------------------------------------------------
                                    
//=====================================================================================|_SHADER
GLuint      leather_SHADER_VERTEX;                                                                                 
GLuint      leather_SHADER_FRAGMENT;                                                                               
GLuint      leather_SHADER;     
//-------------------------------------------------------------------------------------|_CONFIGURABLE_UNIFORMS
GLuint      UNIFORM_LIGHT_POSITION_01_leather;                                                                     
GLuint      UNIFORM_LIGHT_POSITION_02_leather; 
GLuint      UNIFORM_LIGHT_POSITION_03_leather; 
GLuint      UNIFORM_LIGHT_POSITION_04_leather;                                                                     
GLuint      UNIFORM_LIGHT_POSITION_05_leather; 
GLuint      UNIFORM_LIGHT_POSITION_06_leather; 
GLuint      UNIFORM_LIGHT_POSITION_07_leather;                                                                     
GLuint      UNIFORM_LIGHT_POSITION_08_leather; 

GLuint      UNIFORM_shininess_leather;
GLuint      UNIFORM_ambient_leather;

//-------------------------------------------------------------------------------------|_CORRECTION_UNIFORMS
                                                                              
GLuint      UNIFORM_tileJump_leather;                                                                              
//-------------------------------------------------------------------------------------|_MATRIX_UNIFORMS
GLuint      UNIFORM_MODELVIEW_leather;                                                                             
GLuint      UNIFORM_MODELVIEWPROJ_leather;                                                                         
//----
GLuint      UNIFORM_SHADOW_PROJ_leather;
GLuint      UNIFORM_modelViewShadow_leather;
//----
GLuint      UNIFORM_viewMatrix_leather; 
//----
GLuint      UNIFORM_LIGHT_MATRIX_leather;                                                                          
GLuint      UNIFORM_TEXTURE_MATRIX_leather;                                                                        
//-------------------------------------------------------------------------------------|_TEXTURE_UNIFORMS
GLuint      UNIFORM_ShadowTexture_leather;                                                                        
GLuint      UNIFORM_TEXTURE_DOT3_leather;                                                                          
GLuint      UNIFORM_TEXTURE_leather; 
