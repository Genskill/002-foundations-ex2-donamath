
  
#include<stdio.h>
#include<cs50.h>
  
int main(void){
  int i,j;
  int type=get_int("Enter type of pattern (1 or 2) ");
  int rows=get_int("Number of rows ");
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
        for(j=rows;j<rows;j++)
        {
          if(j>rows-i)
            printf("#");
          else
            printf(" ");
            
        }
        
        printf("\n");
      }
      break;
  }
}
