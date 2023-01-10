#include<stdio.h>
//wrong compilation error!!!!
int main()
{
	int even(char c) {
    switch (c) {
        case '0':
        case '2':
        case '4':
        case '6':
        case '8':
            return 1;
        default:
            return 0;
    }
}


int all_even(char* s) {
    while (*s != '\0') {
        if (!even(*s)) {
            return 0;
        }
        s++;
    }
    return 1;
}


char* answer(char* s) {
    return (strlen(s) == 3 && all_even(s)) ? "yes" : "no";
}
}
