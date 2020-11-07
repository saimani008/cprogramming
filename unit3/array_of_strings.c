#include<stdio.h>
int main()
{
        char *color[5];
        char **final;
        color[0] = "red";
        color[1] = "blue";
        color[2] = "yellow";
        color[3] = "green";
        color[4] = "orange";
        printf("pictures of colors\n");
        final =color+4;
        char** first = color;
        while(first<=final)
        {
             printf("%s\n",*first);
             first++;
        }
return 0;
}
