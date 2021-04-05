#include <stdio.h>
#define getVarName(var)(#var)

int i = 3;
float f = 3.4;
char c = 'a';
char* str = "hello";
int arr[5] = {1,2,3,4,5};

int main(){
    printf("Name: %s\nAddress: %p\nValue: %u\n\n", getVarName(i), &i, i);
    printf("Name: %s\nAddress: %p\nValue: %f\n\n", getVarName(f), &f, f);
    printf("Name: %s\nAddress: %p\nValue: %c\n\n", getVarName(c), &c, c);
    printf("Name: %s\nAddress: %p\nValue: %s\n\n", getVarName(str), &str, str);
    printf("Name: %s\nAddress: %p\nValue: %u\n\n", getVarName(arr), &arr, arr);

    return 0;
}