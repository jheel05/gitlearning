#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Points[3][3],i,j,k;

    printf("Enter the coordinates of points:\n");
     for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
              scanf("%d",&Points[i][j]);
          }
      }

      for(i=0;i<3;i++)
      {
          for(j=0;j<3;j++)
          {
              printf("%d\t", Points[i][j]);
          }
          printf(" ");

      }







    return 0;
}
