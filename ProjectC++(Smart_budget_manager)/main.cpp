
#include "LogForm.h"
#include <iostream>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew ProjectCSmartbudgetmanager::LogForm);
}
