#include "MyForm.h"
#include <Windows.h>
#include "DLL.h"
using namespace Interface;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Store db;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
