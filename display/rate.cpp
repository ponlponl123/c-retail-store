#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

#include "../utils/gotoxy.cpp"

void d_rate();

void d_rate()
{
      int i, j = 1;
      float a, b;
      FILE *file;
      dis_con();
      file = fopen("record.txt", "rb");
      rewind(file);
      i = 26;
      gotoxy(16, 20);
      ;
      printf("enter lower range: ");
      scanf("%f", &a);
      gotoxy(16, 21);
      printf("enter upper range: ");
      scanf("%f", &b);
      fflush(file);
      while (fread(&item, sizeof(item), 1, file))
      {
            if ((item.rate >= a) && (item.rate <= b))
            {
                  display(&item, i, j);
                  i++;
                  j++;
                  if ((j % 20) == 0)
                  {
                        gotoxy(27, 47);
                        printf("press any key to see more...........");
                        getch();
                        system("cls");
                        dis_con();
                        i = 26;
                        continue;
                  }
            }
      }
      getch();
      if (i == 26)
      {
            gotoxy(28, 30);
            printf(" no item found ");
      }
      getch();
      fclose(file);
      d_search();
}