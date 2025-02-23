#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

#include "../utils/gotoxy.cpp"
#include "../utils/dis_con.cpp"

#include "./search.cpp"

void d_code();

void d_code()
{
      int i, j = 1;
      char x[4] = {0};
      FILE *file;
      dis_con();
      file = fopen("record.txt", "rb");
      rewind(file);
      i = 26;
      gotoxy(16, 20);
      printf("enter item code: ");
      scanf("%s", x);
      fflush(file);
      while (fread(&item, sizeof(item), 1, file))
      {
            if ((strcmp(item.code, x) == 0))
            {
                  display(&item, i, j);
                  i++;
                  j++;
                  break;
            }
      }
      if (i == 26)
      {
            gotoxy(28, 30);
            printf("no item found");
      }
      getch();
      fclose(file);
      d_search();
}