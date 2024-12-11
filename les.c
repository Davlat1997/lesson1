#include <stdio.h>
#include <string.h>


void find_word(char arr[], char arr2[]) {
    int i, j, found = 0;

   
    arr2[strcspn(arr2, "\n")] = '\0';

    
    for (i = 0; arr[i] != '\0'; i++) {
       
        for (j = 0; arr2[j] != '\0'; j++) {
            if (arr[i + j] != arr2[j]) {
                break;
            }
        }

       
        if (arr2[j] == '\0') {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Bu so'z seriyada mavjud: %s\n", arr2);
    } else {
        printf("Bu so'z seriyada mavjud emas\n");
    }
}

int main() {
    char arr[100], arr2[100];

    printf("Matnni kiriting:\n");
    fgets(arr, sizeof(arr), stdin);

    printf("So'zni kiriting:\n");
    fgets(arr2, sizeof(arr2), stdin);

  
    find_word(arr, arr2);

    return 0;
}