     
        //====================================================================================

        //==========================
        glBindBuffer(GL_ARRAY_BUFFER, floorTile_2m_BATCH_A_VBO);                                                           
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, floorTile_2m_BATCH_A_INDICES_VBO);                                      
        //====================================================================================
        SelectShader(shaderNumber);                                                                                                                              
        //========================================================
        glActiveTexture ( GL_TEXTURE1 );                          
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_NORMALMAP);             
        //---                                                    
        glActiveTexture (GL_TEXTURE0);                          
        glBindTexture(GL_TEXTURE_2D, floorTile_2m_TEXTUREMAP[0]); 
        //-------------------------------------------------------
        glDrawElements(GL_TRIANGLES, 180 * numberOfFloorTile_2m_Instances_BATCH_A, GL_UNSIGNED_INT, 0);  
        //====================================================================================
      
