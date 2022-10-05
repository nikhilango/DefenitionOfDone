#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]){
    char input[]="Hello mah friend \n";
    int size=16;
    printf("Your input reversed is: ");
    while(size>=0){
        printf("%c", input[size]);
        size--;}
    return 0;
}
