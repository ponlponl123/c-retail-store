#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "../utils/gotoxy.cpp"
#include "../utils/window.cpp"
#include "../utils/curser.cpp"

void d_mainmenu();

void d_mainmenu()
{
      int i;
      char ch;
      const char *menu[] = {"   Calculate Bill", "   Add Goods", "   Edit Goods", "   Display All ", "   Search", "   Delete Goods", "   Exit"};
      system("cls");
      // textbackground(11);
      // textcolor(0);
      //_setcursortype(_NOCURSOR);
      window(25, 50, 20, 32);
      gotoxy(33, 18);
      printf("MAIN MENU");
      for (i = 0; i <= 6; i++)
      {
            gotoxy(30, 22 + i + 1);
            printf("%s\n\n\n", menu[i]);
      }
      curser(7);
}