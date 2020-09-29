#include<stdio.h>
int switch3(){
    int x=5,y=10;
    switch(x>y && x+y>0){
    case 1:
        printf("h1");
        break;
    case 0:
        printf("Bye");
        break;
    default:
        printf("Hello bye");
    }
}
