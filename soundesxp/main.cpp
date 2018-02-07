#include<iostream>
#include<windows.h>
#include<MMsystem.h>
using namespace std;
int main()
{
    playsound(TEXT("Answer-02.wav"), NULL, SND_SYNC);
getch();
return 0;
}
