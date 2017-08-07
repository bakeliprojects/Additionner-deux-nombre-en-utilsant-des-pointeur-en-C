#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res;
    int v1, v2;
    printf("l'additionde deux nombres\n");
    printf(" entrer le premier nombre\n");
    scanf("%d", &v1);
    printf("second nombre\n");
    scanf("%d", &v2);
    int *p1 = &v1;
    int *p2 = &v2;
    res = *p1 + *p2;
    printf(" le resultat de l'addition est:%d" ,res);
    return 0;
}
