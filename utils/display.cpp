#include <stdio.h>

#include "./gotoxy.cpp"

void display(rec *, int, int);

void display(rec *item, int i, int j)
{
      gotoxy(16, i); // textcolor(13);
      printf("%4d", j);
      printf("%9s", item->name);
      printf("%12s", item->code);
      printf("%14.2f", item->rate);
      printf("%11d", item->quantity);
}