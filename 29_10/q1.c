#include <stdio.h>
#include <string.h>

int main(){
    char bin[100];
    printf("Enter a binary number: ");
    scanf("%s", bin);
    for (int i = 0; i < strlen(bin); i++){
        if (bin[i] == '1') {
            bin[i] = '0';
        }
        else if (bin[i] == '0'){
            bin[i] = '1';
        }
        else{
            printf("Invalid input: not a binary number\n");
            return 1;
        }
    }

    printf("Inverted binary number: %s\n", bin);
    return 0;
}
