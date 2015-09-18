
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================          
        
#ifdef WIN32
        //=============================================================
        ofstream outBatch_B_Vertices("_MODEL_FOLDERS_/floorTile_2m/BATCH_B/floorTile_2m_BATCH_B.cpp");
        outBatch_B_Vertices << "var floorTile_2m_BATCH_B[] = "  << "\n{";
        outBatch_B_Vertices << "//  numberOfFloorTile_2m_Instances_BATCH_B = " << numberOfFloorTile_2m_Instances_BATCH_B  << "\n";                 
        //=============================================================
        //------------------------------------------------------------------------------------------------------------------------
        //=============================================================
        ofstream outBatch_B_Indices("_MODEL_FOLDERS_/floorTile_2m/BATCH_B/floorTile_2m_BATCH_B_INDICES.cpp");
        outBatch_B_Indices << "GLuint floorTile_2m_BATCH_B_INDICES[] = "  << "\n{";
        outBatch_B_Indices << "//     numberOfFloorTile_2m_Instances_BATCH_B = " << numberOfFloorTile_2m_Instances_BATCH_B  << "\n";                 
#endif
		//=============================================================
        //------------------------------------------------------ 
        for(GLuint i = 0; i < COUNT_OF( floorTile_2m_INDICES); i++)  
        {
        
              currentValue = floorTile_2m_INDICES[i];
              
              if(currentValue > highestValueSoFar)
              {
                   highestValueSoFar = currentValue;
              }
        
        }
        
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================            
 if(tile_2m_BATCH_B_CreateInstance[0] == 1)
 {      
        
        floorTile_2m_POSITION[0]    =  -7.0; 
        floorTile_2m_POSITION[1]    =  -2.5;
        floorTile_2m_POSITION[2]    =   0.0;        
        //----------------------------------
        floorTile_2m_ROTATE[0]      =   1.0;
        floorTile_2m_ROTATE[1]      =   0.0;      
        floorTile_2m_ROTATE[2]      =   0.0;      
        floorTile_2m_ROTATE[3]      =   0.0;       
        
        angle_rad                   =   floorTile_2m_ROTATE[3] * 3.14159 / 180.0; 
        
        //===============================================================
        for(int i = 0; i < COUNT_OF( floorTile_2m); i += 8)
        {
                //flippedAxisFloorTiles_2m[i + 0] =  floorTile_2m[i + 0];
                //flippedAxisFloorTiles_2m[i + 1] =  floorTile_2m[i + 1];                
                //flippedAxisFloorTiles_2m[i + 2] =  floorTile_2m[i + 2];                
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 0] =    floorTile_2m[i + 0]                                                              +  floorTile_2m_POSITION[0];                
                flippedAxisFloorTiles_2m[i + 1] =    floorTile_2m[i + 1]                                                              +  floorTile_2m_POSITION[1];                
                flippedAxisFloorTiles_2m[i + 2] =    floorTile_2m[i + 2]                                                              +  floorTile_2m_POSITION[2];       
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 3] =  1.0;
                flippedAxisFloorTiles_2m[i + 4] =  1.0;                
                flippedAxisFloorTiles_2m[i + 5] =  1.0;         
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 6] =  floorTile_2m[i + 6];
                flippedAxisFloorTiles_2m[i + 7] =  floorTile_2m[i + 7];                
                //=====================================================
#ifdef WIN32
                outBatch_B_Vertices << flippedAxisFloorTiles_2m[i + 0] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 1] << ", "  
                                 << flippedAxisFloorTiles_2m[i + 2] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 3] << ", "                               
                                 << flippedAxisFloorTiles_2m[i + 4] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 5] << ", "         
                                 << flippedAxisFloorTiles_2m[i + 6] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 7] << ", "    << "\n";
#endif
         }
	 
  #ifdef WIN32   
	 outBatch_B_Vertices << "//========================================================="  << "\n";

         //==========================================================================================
         outBatch_B_Indices << "//" << numberOfFloorTile_2m_Instances_BATCH_B << "\n"; 
         for(GLuint j = 0; j < COUNT_OF( floorTile_2m_INDICES); j++)
         {        
                outBatch_B_Indices << floorTile_2m_INDICES[j]  << ", " << "\n"; 
         }
         outBatch_B_Indices << "//==========================================================="  << "\n";  
         //==========================================================================================                      
#endif
numberOfFloorTile_2m_Instances_BATCH_B ++;

}//_END_tile_2m_BATCH_B_CreateInstance[0]
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================         
 if(tile_2m_BATCH_B_CreateInstance[1] == 1)
 {      
            
        floorTile_2m_POSITION[0]    =  -3.0; 
        floorTile_2m_POSITION[1]    =  -2.5;
        floorTile_2m_POSITION[2]    =   0.0;        
        //----------------------------------
        floorTile_2m_ROTATE[0]      =   1.0;
        floorTile_2m_ROTATE[1]      =   0.0;      
        floorTile_2m_ROTATE[2]      =   0.0;       
        floorTile_2m_ROTATE[3]      =   180;       
        
        angle_rad                   =   floorTile_2m_ROTATE[3] * 3.14159 / 180.0; 
         
        //===============================================================
        for(int i = 0; i < COUNT_OF( floorTile_2m); i += 8)
        {
                //flippedAxisFloorTiles_2m[i + 0] =  floorTile_2m[i + 0];
                //flippedAxisFloorTiles_2m[i + 1] =  floorTile_2m[i + 1];                
                //flippedAxisFloorTiles_2m[i + 2] =  floorTile_2m[i + 2];                
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 0] =    floorTile_2m[i + 0]                                                               +  floorTile_2m_POSITION[0];                
                flippedAxisFloorTiles_2m[i + 1] =  ((floorTile_2m[i + 1] *  cos(angle_rad)) + (floorTile_2m[i + 2] * sin(angle_rad)))  +  floorTile_2m_POSITION[1];                
                flippedAxisFloorTiles_2m[i + 2] =  ((floorTile_2m[i + 1] * -sin(angle_rad)) + (floorTile_2m[i + 2] * cos(angle_rad)))  +  floorTile_2m_POSITION[2];      
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 3] =  1.0;
                flippedAxisFloorTiles_2m[i + 4] = -1.0;                
                flippedAxisFloorTiles_2m[i + 5] = -1.0;         
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 6] =  floorTile_2m[i + 6];
                flippedAxisFloorTiles_2m[i + 7] =  floorTile_2m[i + 7];                
                //=====================================================
#ifdef WIN32
                outBatch_B_Vertices << flippedAxisFloorTiles_2m[i + 0] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 1] << ", "  
                                 << flippedAxisFloorTiles_2m[i + 2] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 3] << ", "                               
                                 << flippedAxisFloorTiles_2m[i + 4] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 5] << ", "         
                                 << flippedAxisFloorTiles_2m[i + 6] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 7] << ", "    << "\n";
#endif        
		}
#ifdef WIN32
	 outBatch_B_Vertices << "//=========================================================="  << "\n";

         //===========================================================================================
         outBatch_B_Indices << "//" << numberOfFloorTile_2m_Instances_BATCH_B << "\n"; 
         for(GLuint j = 0; j < COUNT_OF( floorTile_2m_INDICES); j++)
         {        
                outBatch_B_Indices << floorTile_2m_INDICES[j] + (highestValueSoFar * 1) + 1 << ", " << "\n"; 
         }
         outBatch_B_Indices << "//============================================================"  << "\n";  
         //===========================================================================================  
#endif
numberOfFloorTile_2m_Instances_BATCH_B ++;
        
}//_END_tile_2m_BATCH_B_CreateInstance[1]
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================        
 if(tile_2m_BATCH_B_CreateInstance[2] == 1)
 {              
        floorTile_2m_POSITION[0]    =   1.0; 
        floorTile_2m_POSITION[1]    =  -2.5;
        floorTile_2m_POSITION[2]    =   0.0;
        //----------------------------------
        floorTile_2m_ROTATE[0]      =   0.0;
        floorTile_2m_ROTATE[1]      =   1.0;      
        floorTile_2m_ROTATE[2]      =   0.0;       
        floorTile_2m_ROTATE[3]      =   180;       
        
        angle_rad                   =   floorTile_2m_ROTATE[3] * 3.14159 / 180.0; 

        //===============================================================
        for(int i = 0; i < COUNT_OF( floorTile_2m); i += 8)
        {
                //flippedAxisFloorTiles_2m[i + 0] =  floorTile_2m[i + 0];
                //flippedAxisFloorTiles_2m[i + 1] =  floorTile_2m[i + 1];                
                //flippedAxisFloorTiles_2m[i + 2] =  floorTile_2m[i + 2];                
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 0] =  ((floorTile_2m[i + 0] *  cos(angle_rad)) + (floorTile_2m[i + 2] * sin(angle_rad))) +  floorTile_2m_POSITION[0];                
                flippedAxisFloorTiles_2m[i + 1] =    floorTile_2m[i + 1]                                                              +  floorTile_2m_POSITION[1];                
                flippedAxisFloorTiles_2m[i + 2] =  ((floorTile_2m[i + 0] * -sin(angle_rad)) + (floorTile_2m[i + 2] * cos(angle_rad))) +  floorTile_2m_POSITION[2];       
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 3] =  -1.0;
                flippedAxisFloorTiles_2m[i + 4] =  1.0;                
                flippedAxisFloorTiles_2m[i + 5] =  -1.0;         
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 6] =  floorTile_2m[i + 6];
                flippedAxisFloorTiles_2m[i + 7] =  floorTile_2m[i + 7];                
                //=====================================================
 #ifdef WIN32
                outBatch_B_Vertices << flippedAxisFloorTiles_2m[i + 0] << ", " 
                                    << flippedAxisFloorTiles_2m[i + 1] << ", "  
                                    << flippedAxisFloorTiles_2m[i + 2] << ", " 
                                    << flippedAxisFloorTiles_2m[i + 3] << ", "                               
                                    << flippedAxisFloorTiles_2m[i + 4] << ", "      
                                    << flippedAxisFloorTiles_2m[i + 5] << ", "         
                                    << flippedAxisFloorTiles_2m[i + 6] << ", "      
                                    << flippedAxisFloorTiles_2m[i + 7] << ", "    << "\n";        
 #endif    
		}
 #ifdef WIN32
	 outBatch_B_Vertices << "//========================================================"  << "\n";

         //=========================================================================================          
         outBatch_B_Indices << "//" << numberOfFloorTile_2m_Instances_BATCH_B << "\n"; 
         for(GLuint j = 0; j < COUNT_OF( floorTile_2m_INDICES); j++)
         {        
                outBatch_B_Indices << floorTile_2m_INDICES[j] + (highestValueSoFar * 2) + 2 << ", " << "\n"; 
         }
         outBatch_B_Indices << "//=========================================================="  << "\n";  
         //=========================================================================================           
#endif         
         
numberOfFloorTile_2m_Instances_BATCH_B ++;     
   
}//_END_tile_2m_BATCH_B_CreateInstance[2]        
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================        
if(tile_2m_BATCH_B_CreateInstance[3] == 1)
 {             
        floorTile_2m_POSITION[0]    =   9.0; 
        floorTile_2m_POSITION[1]    =  -2.5;
        floorTile_2m_POSITION[2]    =   0.0;  
        //----------------------------------
        floorTile_2m_ROTATE[0]      =   0.0;
        floorTile_2m_ROTATE[1]      =   0.0;      
        floorTile_2m_ROTATE[2]      =   1.0;       
        floorTile_2m_ROTATE[3]      =   180;       
        
        angle_rad                   =   floorTile_2m_ROTATE[3] * 3.14159 / 180.0; 

        //===============================================================
        for(int i = 0; i < COUNT_OF( floorTile_2m); i += 8)
        {
                //flippedAxisFloorTiles_2m[i + 0] =  floorTile_2m[i + 0];
                //flippedAxisFloorTiles_2m[i + 1] =  floorTile_2m[i + 1];                
                //flippedAxisFloorTiles_2m[i + 2] =  floorTile_2m[i + 2];                
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 0] =  ((floorTile_2m[i + 0] *  cos(angle_rad)) + (floorTile_2m[i + 1] * sin(angle_rad))) +  floorTile_2m_POSITION[0];                
                flippedAxisFloorTiles_2m[i + 1] =  ((floorTile_2m[i + 0] * -sin(angle_rad)) + (floorTile_2m[i + 1] * cos(angle_rad))) +  floorTile_2m_POSITION[1];                
                flippedAxisFloorTiles_2m[i + 2] =    floorTile_2m[i + 2]                                                              +  floorTile_2m_POSITION[2];     
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 3] =  -1.0;
                flippedAxisFloorTiles_2m[i + 4] =  -1.0;                
                flippedAxisFloorTiles_2m[i + 5] =  1.0;         
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 6] =  floorTile_2m[i + 6];
                flippedAxisFloorTiles_2m[i + 7] =  floorTile_2m[i + 7];                
                //=====================================================
  #ifdef WIN32
                outBatch_B_Vertices << flippedAxisFloorTiles_2m[i + 0] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 1] << ", "  
                                 << flippedAxisFloorTiles_2m[i + 2] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 3] << ", "                               
                                 << flippedAxisFloorTiles_2m[i + 4] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 5] << ", "         
                                 << flippedAxisFloorTiles_2m[i + 6] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 7] << ", "    << "\n";        
 #endif      
		}
  #ifdef WIN32
	 outBatch_B_Vertices << "//========================================================"  << "\n";

         //=========================================================================================
         outBatch_B_Indices << "//" << numberOfFloorTile_2m_Instances_BATCH_B << "\n"; 
         for(GLuint j = 0; j < COUNT_OF( floorTile_2m_INDICES); j++)
         {        
                outBatch_B_Indices << floorTile_2m_INDICES[j] + (highestValueSoFar * 3) + 3 << ", " << "\n"; 
         }
         outBatch_B_Indices << "//=========================================================="  << "\n";  
         //=========================================================================================
#endif

numberOfFloorTile_2m_Instances_BATCH_B ++;

}//_END_tile_2m_BATCH_B_CreateInstance[3]   
        
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================        

if(tile_2m_BATCH_B_CreateInstance[4] == 1)
 {              
        floorTile_2m_POSITION[0]    =   9.0; 
        floorTile_2m_POSITION[1]    =  -2.5;
        floorTile_2m_POSITION[2]    =   0.0;  
        //----------------------------------   
        floorTile_2m_ROTATE[0]      =   1.0;
        floorTile_2m_ROTATE[1]      =   0.0;      
        floorTile_2m_ROTATE[2]      =   0.0;       
        floorTile_2m_ROTATE[3]      =   0.0;       
        
        angle_rad                   =   floorTile_2m_ROTATE[3] * 3.14159 / 180.0; 

        //===============================================================
        for(int i = 0; i < COUNT_OF( floorTile_2m); i += 8)
        {
                //flippedAxisFloorTiles_2m[i + 0] =  floorTile_2m[i + 0];
                //flippedAxisFloorTiles_2m[i + 1] =  floorTile_2m[i + 1];                
                //flippedAxisFloorTiles_2m[i + 2] =  floorTile_2m[i + 2];                
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 0] =    floorTile_2m[i + 0]                                                            +  floorTile_2m_POSITION[0];                
                flippedAxisFloorTiles_2m[i + 1] =    floorTile_2m[i + 1]                                                            +  floorTile_2m_POSITION[1];                
                flippedAxisFloorTiles_2m[i + 2] =    floorTile_2m[i + 2]                                                            +  floorTile_2m_POSITION[2];     
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 3] =  1.0;
                flippedAxisFloorTiles_2m[i + 4] =  1.0;                
                flippedAxisFloorTiles_2m[i + 5] =  1.0;         
                //------------------------------------------------------
                flippedAxisFloorTiles_2m[i + 6] =  floorTile_2m[i + 6];
                flippedAxisFloorTiles_2m[i + 7] =  floorTile_2m[i + 7];                
                //=====================================================
#ifdef WIN32
                outBatch_B_Vertices << flippedAxisFloorTiles_2m[i + 0] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 1] << ", "  
                                 << flippedAxisFloorTiles_2m[i + 2] << ", " 
                                 << flippedAxisFloorTiles_2m[i + 3] << ", "                               
                                 << flippedAxisFloorTiles_2m[i + 4] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 5] << ", "         
                                 << flippedAxisFloorTiles_2m[i + 6] << ", "      
                                 << flippedAxisFloorTiles_2m[i + 7] << ", "    << "\n";        
 #endif	       
		}
 #ifdef WIN32
	 
         outBatch_B_Vertices << "//====================================================="  << "\n";  
        
        //======================================================================================        
        outBatch_B_Indices << "//" << numberOfFloorTile_2m_Instances_BATCH_B << "\n"; 
        for(GLuint j = 0; j < COUNT_OF( floorTile_2m_INDICES); j++)
        {        
                outBatch_B_Indices << floorTile_2m_INDICES[j] + (highestValueSoFar * 4) + 4 << ", " << "\n"; 
        }
        outBatch_B_Indices << "//======================================================="  << "\n";  
        //======================================================================================       
#endif        
numberOfFloorTile_2m_Instances_BATCH_B ++;
                              
}//_END_tile_2m_BATCH_B_CreateInstance[4]               
               
               
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================  
#ifdef WIN32 
outBatch_B_Vertices << "}"  << ";\n"; 
outBatch_B_Indices << "};" << "\n"; 
 #endif     

//#############################################################################################################################  
//#############################################################################################################################  
//#############################################################################################################################  
//#############################################################################################################################            
//=============================================================================================================================        








//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================         
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================       
        
/*    
        //--------------------------------------------------------------------------------------------------------      
        glGenBuffers(1,              &floorTile_2m_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, floorTile_2m_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(flippedAxisFloorTiles_2m), flippedAxisFloorTiles_2m, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //--------------------------------------------------------------------------------------------------------                                     
        glGenBuffers(1,              &floorTile_2m_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, floorTile_2m_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(floorTile_2m_INDICES), floorTile_2m_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //--------------------------------------------------------------------------------------------------------                                      
*/             
        #include    "floorTile_2m_BATCH_B.cpp"                                                                                                         
        #include    "floorTile_2m_BATCH_B_INDICES.cpp"   
        //--------------------------------------------------------------------------------------------------------      
        glGenBuffers(1,              &floorTile_2m_BATCH_B_VBO);                                                                                         
        glBindBuffer(GL_ARRAY_BUFFER, floorTile_2m_BATCH_B_VBO);                                                                                         
        glBufferData(GL_ARRAY_BUFFER, sizeof(floorTile_2m_BATCH_B), floorTile_2m_BATCH_B, GL_STATIC_DRAW);                                             
        glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                                  
        //--------------------------------------------------------------------------------------------------------                                     
        glGenBuffers(1,              &floorTile_2m_BATCH_B_INDICES_VBO);                                                                                   
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, floorTile_2m_BATCH_B_INDICES_VBO);                                                                           
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(floorTile_2m_BATCH_B_INDICES), floorTile_2m_BATCH_B_INDICES, GL_STATIC_DRAW);                       
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                                            
        //--------------------------------------------------------------------------------------------------------          
       
        
        
//=====================================================================================================================                       
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//---------------------------------------------------------------------------------------------------------------------        
//=====================================================================================================================         
        

