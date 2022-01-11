#include <stdio.h>
#include <stdlib.h>

int num_fields(char* line, char lim) {
    int n = 0;
    int i = 0;
    while(line[i] != '\0') {
        if(line[i] == lim) {
            n++;
        }
        i++;
    }
    if (n > 0) {
        n++;
    }
    return n;
}

char** winparse(char* str, char lim, int n) {
    int abs_i = 0;
    int i = 0;
    int counter = 0;
    char** res = (char**)calloc(n, sizeof(str));
    res[counter] = (char*)calloc(1, sizeof(str)/n);
    char c = str[i];
    do {
        if (c == lim) {
            res[counter][i] = '\0';
            if(++counter == n) {
                goto completion;
            }
            i = 0;
            res[counter] = (char*)calloc(1, sizeof(str)/n);
        } else {
            res[counter][i] = c;
            i++;
        }
        abs_i++;
        c = str[abs_i];
    } while(c);
completion:
    return res;
}