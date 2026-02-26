using namespace System;
using namespace System::Windows::Forms;

#include "LogForm.h"
#include <iostream>


[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew ProjectCSmartbudgetmanager::LogForm);
}
