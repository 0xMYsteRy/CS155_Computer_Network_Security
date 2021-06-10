#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]){
    unsigned short s;
    int i;
    char buf[100];

    if(argc < 3){
        return -1;
    }

    i = atoi(argv[1]);
    s = i;

    if(s >= 80){           
        printf("Test\n");
        return -1;
    }

    printf("s = %d\n", s);

    memcpy(buf, argv[2], i);
    buf[i] = '\0';
    printf("%s\n", buf);

    return 0;
}