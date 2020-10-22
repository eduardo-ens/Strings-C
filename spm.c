#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

char * capitalize(char * str1) {
    int i, j, k;

    for(i = 0; i < strlen(str1) - 1; i++) {
        if(str1[0] == ' ') {
            for(j = 0; str1[j] == ' '; j++);
            for(k = 0; j < strlen(str1); k++) {
                str1[k] = str1[j];
                j++;
            }
            ++i;
        }
    }

    for(i = 0; i < strlen(str1) -1; i++) {
        if(str1[i] == ' ' && str1[i + 1] == ' ') {
            j = i + 1;
            for(k = i; j < strlen(str1); k++) {
                str1[k] = str1[j];
                j++;
            }
        }
    }

    for(i = strlen(str1) - 1; str1[i] == ' '; i--);
    str1[i + 1] = '\0';

    for(i = 0; i < strlen(str1); i++) {
        if(i == 0){
            str1[i] = toupper(str1[i]);
        } else if(str1[i - 1] == ' ') {
            str1[i] = toupper(str1[i]);
        } else {
            str1[i] = tolower(str1[i]);
        }
    }

    return str1;
}

char * center(char * s, int width, char fillchar) {
    int i, j, k;
    int tam = ((width - strlen(s)) - 1) / 2;

    for(i = width - 1; s[i] == ' ' || s[i] == '\0'; i--);

    for(j = width - 1; i >= 0; i--) {
        s[j] = s[i];
        j--; 
    }
    
    for(i = 0; i < tam; i++) {
        s[i] = fillchar;
    }

    k = width - 1;
    j++;

    for(i; j <= k; i++) {
        s[i] = s[j];
        s[j] = fillchar;
        j++;
        
    }

    s[k] = '\0';

    for(i = (k - 1); i >= 0; i--){
        if(s[i] == '\0') {
            s[i] = fillchar;
        }
    }
    
    return s;
}

bool isstrlower(const char * s) {
    int i;
    for(i = 0; i < strlen(s); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            return false;
        }
    }
    return true;
}

bool isstrupper(const char * s) {
    int i;
    for(i = 0; i < strlen(s); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            return false;
        }
    }
    return true;
}