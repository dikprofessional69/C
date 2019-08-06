#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<mmsystem.h>

int main()
{
    int i;
    char key;
    printf("Hello There , in this Program O to 9 correspond to a note \n");
    getch();
    printf("Press From 0 to 9 only notes to different song in note pad file.");
    while(1)
    {
    key=getch();
    switch(key)
        {
    case '1':
    PlaySound(TEXT("1.wav"),NULL,SND_ASYNC);
    break;
    case '2':
    PlaySound(TEXT("2.wav"),NULL,SND_ASYNC);
    break;
    case '3':
    PlaySound(TEXT("3.wav"),NULL,SND_ASYNC);
    break;
    case '4':
    PlaySound(TEXT("4.wav"),NULL,SND_ASYNC);
    break;
    case '5':
    PlaySound(TEXT("5.wav"),NULL,SND_ASYNC);
    break;
    case '6':
    PlaySound(TEXT("6.wav"),NULL,SND_ASYNC);
    break;
    case '7':
    PlaySound(TEXT("7.wav"),NULL,SND_ASYNC);
    break;
    case '8':
    PlaySound(TEXT("8.wav"),NULL,SND_ASYNC);
    break;
    case '9':
    PlaySound(TEXT("9.wav"),NULL,SND_ASYNC);
    break;
    case '0':
    PlaySound(TEXT("0.wav"),NULL,SND_ASYNC);
    break;
    default:
    printf("WRONG CHORD");
        }
    }
    return 0;
}
