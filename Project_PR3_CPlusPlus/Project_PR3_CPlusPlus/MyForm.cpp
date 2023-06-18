#include "MyForm.h"
#include <Windows.h>
#include "Zavdanna1.h"
#include "Zavdanna2.h"
using namespace ProjectPR3CPlusPlus; // Project name
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}