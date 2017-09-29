#include <stdio.h>
#include <string.h>

void test(char *s1, char *s2);

void testn(char *s1, char *s2, int n);

void test(char *s1, char *s2) {
    int i = strcmp(s1, s2);
    if (i < 0) {
        printf("%s is less than %s\n", s1, s2);
    } else if (i > 0) {
        printf("%s is greater than %s\n", s1, s2);
    } else {
        printf("%s is the same as %s\n", s1, s2);
    }
}

void testn(char *s1, char *s2, int n) {
    int i = strncmp(s1, s2, n);
    if (i < 0) {
        printf("%s is less than %s at %d chars\n", s1, s2, n);
    } else if (i > 0) {
        printf("%s is greater than %s at %d chars\n", s1, s2, n);
    } else {
        printf("%s is the same as %s at %d chars\n", s1, s2, n);
    }
}

int main()
{
    char *s1 = "foo";
    char *s2 = "bar";
    char *s3 = "hello";
    char *s4 = "hello world";

    test(s1, s2);
    test(s2, s3);
    test(s3, s4);
    test(s1, s1);

    printf("\n");

    testn(s1, s2, 3);
    testn(s2, s3, 3);
    testn(s3, s4, 4);
    testn(s1, s1, 3);

    return 0;
}
