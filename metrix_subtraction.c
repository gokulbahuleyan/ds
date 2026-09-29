//metrix subtraction.

# include <stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int row, col, i, j;

    printf("enter the number of row");
    scanf("%d",&row);

    printf("enter the number of column");
    scanf("%d",&col);

    printf("enter the elements for first metrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the elements of second metrix:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //addition

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        { 
            c[i][j]=a[i][j]-b[i][j];
        }
    }

    printf("sum of the metrix is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d",c[i][j]);
        }
    printf("\n");
    }
    return 0;
    
}