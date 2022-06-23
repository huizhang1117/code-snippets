#define UNICODE
#include <windows.h>
#include <iostream>
using namespace std;


int main()
{
	cout << "start hellowin!" << endl;

    MessageBox(NULL, TEXT("开始学习！"), TEXT("haha"), MB_OKCANCEL | MB_ICONQUESTION | MB_DEFBUTTON2);

    MessageBox(NULL, TEXT("开始学习！"), TEXT("haha"), MB_OK | MB_ABORTRETRYIGNORE);

    int choice;
	while(true){
		choice=MessageBox(NULL, TEXT("开始学习！"), TEXT("haha"), MB_YESNO);
		if (choice == IDYES) {		//如果选择的是yes
			break;
		}
	} 
    
    cout << "end hellowin!" << endl;
}