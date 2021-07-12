#include <iostream>
using namespace std;

int main()
{
    int n = 10; //size
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i % 2 == 0) // for even rows
            {
                if (j % 2 != 0)
                    printf("X ");
                else
                    printf("O ");
            }
            else // for odd rows
            {
                if (j % 2 != 0)
                    printf("O ");
                else
                    printf("X ");
            }
        }
        printf("\n");
    }
}