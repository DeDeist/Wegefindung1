#include "MyForm.h"
#include "iostream"


using namespace System;
using namespace std;





[STAThreadAttribute]

int main()
{
	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::Run(gcnew Project1::MyForm(5));	

	return 0;
}