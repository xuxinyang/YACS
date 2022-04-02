#include <iostream>
#include <cstring>
using namespace std;

int n, m, k;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("+-");     
        }
        printf("+\n");
        for (int j = 1; j <= m; j++)
        {
            printf("| ");
        }
        printf("|\n");
    }
    for (int j = 1; j <= m; j++)
    {
        printf("+-");       
    }
    printf("+\n");
    printf("\n");
    return 0;
}