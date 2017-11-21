#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]){
    if (argc == 2){
        float celsius = atof(argv[1]);
        float fahrenheit = (celsius * 9) / 5 + 32;
        printf("F: %.1f\n", fahrenheit);
        return 0;
    }
    return 1;
}
