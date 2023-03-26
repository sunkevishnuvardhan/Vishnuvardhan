#include <stdio.h>

#include <string.h>

#define MAX_NAMES 100

int main() {

    char names[MAX_NAMES][50];  

   

    int num_names = 0;  

    char order;  

    

    while (num_names < MAX_NAMES) {

        printf("Enter a name (or 'done' to stop): ");

        scanf("%s", names[num_names]);

        if (strcmp(names[num_names], "done") == 0) {

            break;

        }

        num_names++;

    }

    printf("Enter the order (A for ascending or D for descending): ");

    scanf(" %c", &order);

    if (order == 'A' || order == 'a') {

        for (int i = 0; i < num_names - 1; i++) {

            for (int j = i + 1; j < num_names; j++) {

                if (strcmp(names[i], names[j]) > 0) {

                    char temp[50];

                    strcpy(temp, names[i]);

                    strcpy(names[i], names[j]);

                    strcpy(names[j], temp);

                }

            }

        }

    } else if (order == 'D' || order == 'd') {
        for (int i = 0; i < num_names - 1; i++) {

            for (int j = i + 1; j < num_names; j++) {

                if (strcmp(names[i], names[j]) < 0) {

                    char temp[50];

                    strcpy(temp, names[i]);

                    strcpy(names[i], names[j]);

                    strcpy(names[j], temp);

                }

            }

        }

    }

    printf("Sorted list of names:\n");

    for (int i = 0; i < num_names; i++) {

        printf("%s\n", names[i]);

    }

    return 0;

}

output:

Enter a name (or 'done' to stop): Banana

Enter a name (or 'done' to stop): Carrot

Enter a name (or 'done' to stop): Apple

Enter a name (or 'done' to stop): Radish

Enter a name (or 'done' to stop): Jack

Enter a name (or 'done' to stop): done

Enter the order (A for ascending or D for descending): A

Sorted list of names:

Apple

Banana

Carrot

Jack

Radish
