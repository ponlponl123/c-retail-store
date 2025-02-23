#include <stdio.h>
#include <windows.h>

#include "./gotoxy.cpp"

void dis_con();

void dis_con()
{
      int i;
      system("cls");
      gotoxy(20, 10);
      ;
      for (i = 1; i <= 10; i++)
            printf("*");
      printf(" * FASHION WEAR * ");
      for (i = 1; i <= 10; i++)
            printf("*");
      printf("\n\n");
      gotoxy(30, 11);
      printf("Departmental Store");
      // textcolor(1);
      gotoxy(32, 17);
      printf("RECORDS");
      // textcolor(8);
      gotoxy(18, 23);
      printf("SN   Item Name   Item Code      Rate     Quantity");
}