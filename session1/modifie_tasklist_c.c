#include <stdio.h>

char tasks[5][100];
int status[5] = {0};

void markTaskDone(int index) {
    status[index] = 1;
}

int main() {
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
    }

    markTaskDone(1);

    printf("\nUpdated Task List:\n");

    for (i = 0; i < 5; i++) {
        if (status[i] == 1)
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        else
            printf("%d. %s - PENDING\n", i + 1, tasks[i]);
    }

    return 0;
}