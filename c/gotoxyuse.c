#include<windows.h>
void gotoxy(int x,int y)
{
   COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    gotoxy(40,8);
    printf("bhikadiya brijesh hareshbhai");

}
