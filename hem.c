#include <stdio.h>
int main()
{  int i,j;
   int transpose[3][3];
   int a[3][3]= {109,23,456,446,56,9875,789,212,98};
    
    for(i=0; i<3; ++i)
{
        for(j=0; j<3; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == 2)
                printf("\n\n");
        }
}
      for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            transpose[j][i] = a[i][j];
        }
        printf("\nTranspose of Matrix:\n");
    for(i=0; i<3; ++i)
        for(j=0; j<3; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==2)
                printf("\n\n");
        }

   

 return 0;
}
