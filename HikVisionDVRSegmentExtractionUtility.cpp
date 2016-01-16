// HikVisionDVRSegmentExtractionUtility.cpp : main project file.

#include "stdafx.h"
#include "FormMain.h"
#include "HCNetSDK_Imports.h"
#include "HCNetSDK.h"



using namespace HikVisionDVRSegmentExtractionUtility;
[STAThreadAttribute]

int main(array<System::String ^> ^args)
{

	System::Windows::Forms::Form^ mainForm;

	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	NET_DVR_Init();
	
	// Create the main window and run it
	 mainForm = gcnew FormMain();
	//new Utilities();

	Application::Run(mainForm);
	NET_DVR_Cleanup();
	return 0;
}


