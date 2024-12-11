#include <stdio.h>
#include <string.h>

int main(){

    char text[1000], c;
    int length, max = 0;

    fgets(text, sizeof(text), stdin);

    length = strlen(text);

    c = text[0];
    for(int i = 0; i < length; i++)
        if(c == text[i])
            max++;

    for(int i = 1; i < length; i++){
        int count = 0;

        for(int j = 0; j < length; j++){
            if(text[i] == text[j]){
                count++;
            }
        }
        if(max < count){
            max = count;
            c = text[i];
        }
    }

    printf("Eng ko’p qatnashgan harf ‘%c’, %d marta\n", c, max);

    return 0;
}