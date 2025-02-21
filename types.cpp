#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ANS 50
#define ACS 20

typedef struct {
    char name[ANS], code[ACS];
    float rate;
    int quantity;
}