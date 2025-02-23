#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>

#include "../../types.cpp"
#include "../gotoxy.cpp"
#include "../window.cpp"

void c_code(char y[]);

void c_code(char y[])
{
      int flag;
      FILE *file;
      file = fopen("record.txt", "rb");
      while (1)
      {
            system("cls");
            window(20, 58, 23, 36);
            gotoxy(32, 18);
            printf(" ADD ARTICLES ");
            flag = 1;
            rewind(file);
            gotoxy(22, 25);
            printf("Enter new code of the article:");
            scanf(" %[^\n]", y);
            while (fread(&item, sizeof(item), 1, file) == 1)
            {
                  if (strcmp(y, item.code) == 0)
                  {
                        flag = 0;
                        gotoxy(26, 30);
                        printf("code already exists");
                        gotoxy(29, 32);
                        printf("enter again");
                        getch();
                        break;
                  }
            }
            if (flag == 1)
                  break;
      }
}