#include "MyForm.h"
#include "iostream"
#include <iomanip>
#include <stdio.h>


using namespace System;
using namespace std;

[STAThreadAttribute]

int main()
{
	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::Run(gcnew Project1::MyForm());	
	return 0;
}