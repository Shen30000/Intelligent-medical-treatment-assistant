#include <stdio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
    float addresult;
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    addresult = a + b;
    printf("The result is %f\n",addresult);
    return 0;
}