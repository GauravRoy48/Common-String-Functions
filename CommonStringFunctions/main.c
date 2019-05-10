#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char name[25][50], temp[25];
    int l, i, n, j;

    printf("\n\nPrint individual characters of string in reverse order: \n");
    printf("----------------------------------------------------------\n");
    printf("Input the string: ");
    scanf("");
    gets(str);

    l = strlen(str);

    printf("The characters of the string in reverse are: \n");

    for (i = l; i >=0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
    printf("----------------------------------------------------------");

    printf("\n\nSorts the strings of an array using bubble sort :  \n");
    printf("---------------------------------------------------------\n");

    printf("Input number of strings (upto 50): ");
    scanf("%d", &n);

    printf("Input %d strings: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf(" ");
        gets(name[i]);
    }

    for(i=1;i<=n;i++)
        for(j=0;j<=n-i;j++)
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }

    printf("The strings appear after sorting:\n");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);

    return 0;
}
