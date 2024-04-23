#include <stdio.h>

int main()
{

    char str[] = "1234,122342,yuer";


    int index = 0;


    char delimiter = ',';


    char *token = strtok(str, &delimiter);


    while (token != NULL)
    {

        printf("index %d: %d len\n", index, strlen(token));


        index++;


        token = strtok(NULL, &delimiter);
    }


    return 0;
}
