
  
#include<stdio.h>
#include<cs50.h>
  
int main(void){
  type=get_int("Enter type of pattern (1 or 2) ");
  rows=get_int("Number of rows ");
  switch(type){
    case 1:
      for(i=0;i<rows;i++)
      {
        for(j=rows;j>0;j--)
        {
          printf("#");
        }
        printf("\n");
      }
      break;
    case 2:
      for(i=0;i<rows;i++)
      {
        for(j=rows;j>0;j--)
        {
          while(j>rows-i)
            printf("#");
          printf(" ");
        }
        printf("\n");
      }
      break;
  }
}
