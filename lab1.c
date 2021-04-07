#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
    int tot_len = 0;
    for(int i; i<argc; i++){
        tot_len += strlen(argv[i]);
        printf("%-17s%4lu\n",argv[i],strlen(argv[i]));
    }
    float avrg = (float)tot_len/(float)argc;
    printf("\n%-17s%4u\n", "Total length", tot_len);
    printf("%-17s%4.2f\n", "Average length", avrg);

    return tot_len;
}