#pragma comment(lib,"user32.lib")
#include <windows.h> 
using namespace std;
int WINAPI AA(  HINSTANCE hInstance, HINSTANCE hPrevInstance, 
PSTR szCmdLine, int iCmdShow) 
{ 
	HWND hWnd = GetDesktopWindow();
    MessageBox (hWnd, TEXT (szCmdLine), TEXT ("HelloMsg"), 0);
	
    return 0 ; 
}
