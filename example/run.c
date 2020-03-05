#include <stdio.h>
extern float add(float x,float y);
extern float sub(float x,float y);
extern float multi(float x,float y);
extern float div(float x,float y);
void  main(){
    float a=88.8, b=3.45;
    float result;
    result=add(a,b);
    printf("add result=%f\n",result);
    result=sub(a,b);
    printf("sub result=%f\n",result);
    result=multi(a,b);
    printf("multi result=%f\n",result);
    result=div(a,b);
    printf("div result=%f\n",result);
}