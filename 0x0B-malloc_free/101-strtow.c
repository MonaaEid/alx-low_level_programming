#include <stdlib.h>

int count_words(char *str);
int word_len(char *str);

char **strtow(char *str) {
    int i, j, k;
    int words = count_words(str);
    char **arr;

    if (str == NULL || words == 0) {
        return NULL;
    }

    arr = malloc((words + 1) * sizeof(char *));
    if (arr == NULL) {
        return NULL;
    }

    for (i = 0, j = 0; i < words; i++) {
        while (str[j] == ' ') {
            j++;
        }
        arr[i] = malloc((word_len(&str[j]) + 1) * sizeof(char));
        if (arr[i] == NULL) {
            for (k = 0; k < i; k++) {
                free(arr[k]);
            }
            free(arr);
            return NULL;
        }
        for (k = 0; str[j] != '\0' && str[j] != ' '; j++, k++) {
            arr[i][k] = str[j];
        }
        arr[i][k] = '\0';
    }

    arr[i] = NULL;

    return arr;
}

int count_words(char *str) {
    int i;
    int count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            count++;
        }
    }

    return count;
}

int word_len(char *str) {
    int i;

    for (i = 0; str[i] != '\0' && str[i] != ' '; i++);

    return i;
}

