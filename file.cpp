#include <windows.h>
//自定义加载的库
#pragma comment(lib,"kernel32.lib")
//#pragma comment(lib,"user32.lib")
//#pragma comment(lib,"msvcrt.lib")
//#pragma comment(linker,"/NODEFAULTLIB:libcmt.lib")
//自定义函数入口
#pragma comment(linker, "/ENTRY:EntryPoint")
//自定义对齐方式
//#pragma comment(linker, "/ALIGN:512")
//#pragma comment(linker, "/FILEALIGN:512")
//优化选项
//#pragma comment(linker, "/opt:nowin98")
//#pragma comment(linker, "/opt:ref")
//#pragma comment (linker, "/OPT:ICF")
//合并区段
//#pragma comment(linker, "/MERGE:.rdata=.data") 
//#pragma comment(linker, "/MERGE:.text=.data") 
//#pragma comment(linker, "/MERGE:.reloc=.data") 
//int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int iCmdShow ); 
int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int iShowCmd ) 
{ 
	//MessageBox(NULL, TEXT("hello!"), TEXT("hi"), 0); 
	CreateFile(TEXT("try.txt"),GENERIC_READ,0,0,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);
	ShellExcuteEx();
	return 0 ; 
}
void EntryPoint() 
{ 
	ExitProcess(WinMain(GetModuleHandle(NULL), NULL, GetCommandLine(), SW_SHOWNORMAL)); 
}
