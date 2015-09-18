
//glBindFramebuffer(GL_FRAMEBUFFER, mainLightPass_fboId);
//glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_RENDERBUFFER, mainLightPass_depth);
 

        //=======================================================================================================================
        glClearColor( 0.0f, 0.0f, 0.0f, 1.0 );
        glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
        //----------------------------------------------------------------------------------
        
           //=======================================================================================================================
        #ifdef WIN32
                
                //-------------------------------------------------------------------------------------------------------               
                glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
                PerspectiveMatrix(projection, fieldOfView, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar[0],  adjustNearFar[1]);
                //-------------------------------------------------------------------------------------------------------          
                                                      //+((GLfloat)viewWidth / (GLfloat)viewHeight)
        
        #endif
        //=======================================================================================================================
     
        //=======================================================================================================================
        #ifdef __APPLE__
                               //__THE_+14_CORRECTS_FOR_DIFFERENCE_IN_iOS_vs._WINDOWS 
                //-------------------------------------------------------------------------------------------------------               
                glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
                PerspectiveMatrix(projection, fieldOfView+14, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar[0],  adjustNearFar[1]);
                //-------------------------------------------------------------------------------------------------------  
                Rotate(projection, 0.0, 0.0, 1.0, -90.0);//_____FOR_iOS_LANDSCAPE_VIEW 
                //-------------------------------------------------------------------------------------------------------          
        #endif                 //__THE_+14_CORRECTS_FOR_DIFFERENCE_IN_iOS_vs._WINDOWS 
        //=======================================================================================================
      /*shaderNumber = 26;//plastic/rubber/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/flowerShield/flowerShield_Render.cpp"
        //=======================================================================================================
        shaderNumber = 26;//plastic/rubber/
        setupTransforms_MainColor();
        #include "_MODEL_FOLDERS_/sculptris/sculptris_Render.cpp"
      *///=======================================================================================================
//        shaderNumber = 26;//plastic/rubber/
//        setupTransforms_MainColor();
//        #include "_MODEL_FOLDERS_/sphere/sphere_Render.cpp"
        //=======================================================================================================
        //shaderNumber = 26;//plastic/rubber/
        //setupTransforms_MainColor();
        //#include "_MODEL_FOLDERS_/knight/knight_Render.cpp"
        //=======================================================================================================
		/*      shaderNumber = 49;//marble/geod_A/
		        setupTransforms_MainColor();
		        #include "_MODEL_FOLDERS_/pillerPlantPot/pillerPlantPot_Render.cpp"
		                 //---------------------------------------------------------
 		                shaderNumber = 50;//leaves/A/
 		                #include "_MODEL_FOLDERS_/plant_v005/plant_v005_Render.cpp"                                                                 
		*/        //=======================================================================================================                                                         



      shaderNumber = 51;
        setupTransforms_MainColor();    
        #include "_MODEL_FOLDERS_/chassisFan/chassisFan_Render.cpp"                                                                 
                     //--------------------------------------------------------- 
                     #include "_MODEL_FOLDERS_/chassisFan/fanBrace_Render.cpp"                                                                 
                     //====================================================================================                                                                
                     #include "_MODEL_FOLDERS_/chassisFan/fanBlades_Render.cpp"                                                                             
					//====================================================================================                                                                

			/*        shaderNumber = 49;
    			    setupTransforms_MainColor();
    			    #include "_MODEL_FOLDERS_/woodLongThinBox_0/woodLongThinBox_0_Render.cpp"                                                                 
     				//====================================================================================                                                                
			*/

        //=================================================================================
        #include "_MODEL_FOLDERS_/lightArmor/lightArmor_RENDER.cpp"

        //=================================================================================
        #include "_MODEL_FOLDERS_/marc/marc_RENDER.cpp"

        //=================================================================================
        #include "_MODEL_FOLDERS_/lion_02/lion_02_RENDER.cpp"

        //=================================================================================
        #include "_MODEL_FOLDERS_/spider_01/spider_01_RENDER.cpp"
                 //=================================================================================
                 #include "_MODEL_FOLDERS_/saddle/saddle_RENDER.cpp"
                 //=================================================================================
                 #include "_MODEL_FOLDERS_/topHat/topHat_RENDER.cpp"


