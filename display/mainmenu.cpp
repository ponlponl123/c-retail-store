#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "../utils/gotoxy.h"
#include "../utils/window.h"
#include "../utils/curser.h"
#include "mainmenu.h"
#include <iostream>

void d_mainmenu()
{
      std::cout << "Main Menu" << std::endl;
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