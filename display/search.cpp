#include <stdio.h>
#include <window.h>

#include "../utils/curser.cpp"
#include "../utils/gotoxy.cpp"
#include "../utils/window.cpp"

void d_search();

void d_search()
{
      char ch;
      int i;
      const char *menu[] = {"   By Code", "   By Rate", "   By Quantity", "   Back to main menu"};
      system("cls");
      // textbackground(11);
      // textcolor(0);
      window(25, 50, 20, 32);
      gotoxy(33, 18);
      printf("SEARCH MENU");
      for (i = 0; i <= 3; i++)
      {
            gotoxy(30, 22 + i + 1);
            printf("%s\n\n\n", menu[i]);
      }
      curser(4);
}