#include <stdio.h>
int main() {
    int a[10][10];
    int row, col, i, j;

    printf("enter the number of row");
    scanf("%d",&row);

    printf("enter the number of columns");
    scanf("%d",&col);

    printf("enter metrix elemlents");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        scanf("%d",&a[i][j]);
    }

    printf("the metrix is:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",a[i][j]);
        }
    
    printf("\n");
    }
    return 0; 
}