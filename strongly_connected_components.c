#include<stdio.h>
#define MAX 20
int graph[MAX][MAX], transopse[MAX][MAX];
int visited[MAX];

int n;

//dfs traversal
void DFS(int v)

{
    visited[v] = 1;
    printf("%d",v);

    for (int i=0; i<n;i++)
    {
        if (graph[v][i] == i && !visited[1])
        {
            DFS (i);
        }
    }
}


//

void fillOrder(int v, int stack[], int *top)
{
    visited[v] =1;
    for (int i=0;i<n;i++)
    {
        if(graph[v][i] == 1 && !visited[i])
        {
            fillOrder(i,stack,top);
        }
    }
    stack[++(*top)]=v;
}


//find transpose of graph
void findTranspose()

{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            transopse[i][j] = graph[j][j];
        }
    }
}


int main()

{
    int stack[MAX], top=-1;
    
    printf("enter number of vertices:");
    scanf("%d",&n);

    printf("enter adjacency matrix:\n");

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }

//step 1:perform DFS and store finishing order

for(int i=0;i<n;i++)
    visited[i]=0;

for (int i=0;i<n;i++)
{
    if (!visited[i])
        fillOrder(i,stack,&top);
}

//step 2: Find transpose graph 

findTranspose();

//step 3: Reset visited array
for (int i=0;i<n;i++)
    visited[i]=0;

//step3: Reset visited array
for (int i=0;i<n;i++)
    visited[i]=0;

//step 4: Perform DFS in stack order

printf("\nStrongly Connected Components:\n");

    while(top>=0)
    {
        int v =stack[top--];
        if (! visited[v])
        {
            DFS(v);
            printf("\n");
        }
    }

    return 0;
}




