#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "../utils/gotoxy.cpp"
#include "../utils/display.cpp"
#include "../utils/dis_con.cpp"

#include "./mainmenu.cpp"

void d_all();

void d_all()
{
      int i, j = 1;
      FILE *file;
      dis_con();
      file = fopen("record.txt", "rb");
      rewind(file);
      i = 26;
      fflush(file);
      while (fread(&item, sizeof(item), 1, file))
      {
            display(&item, i, j);
            i++;
            j++;
            if ((j % 20) == 0)
            {
                  gotoxy(27, 47); /*textcolor(0)*/
                  ;
                  printf("press any key to see more...........");
                  getch();
                  system("cls");
                  dis_con();
                  i = 26;
                  continue;
            }
      }
      getch();
      if (i == 26)
      {
            gotoxy(24, 30);
            printf("-- no articles found --");
      }
      getch();
      fclose(file);
      d_mainmenu();
}