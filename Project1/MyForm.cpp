#include "MyForm.h"
#include "iostream"

using namespace System;
using namespace std;





[STAThreadAttribute]

int main()
{
	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::Run(gcnew Project1::MyForm());	

	citys kat(10, 10, "Test");
	kat.get_name();


	return 0;
}