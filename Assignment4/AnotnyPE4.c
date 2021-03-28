#include <stdio.h>

int main()
{
    FILE *fp1;
    FILE *fp2;

    char buff1[80];
    char buff2[255];
    int i = 0;
    int count = 0;

    fp1 = fopen("./Releases.txt", "r");
    fp2 = fopen("./Year.txt", "r");

    while (fgets(buff1, 5, fp1) != NULL )
    {
        fgets(buff2, 5, fp2);
        printf("%s :%s", buff1,buff2);
    }

    return 0;
}
