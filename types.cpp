#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>

#define ANS 15;
#define ACS 4;

typedef struct
{
    char name[ANS], code[ACS];
    float rate;
    int quantity;
} rec;
rec item;