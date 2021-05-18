
 
 #include<stdio.h>
 #include<cs50.h>
 
 int main(void){
    int a,b,c,lhs,rhs;
    a=get_int("side 1 ");
    b=get_int("side 2 ");
    c=get_int("side 3 ");
    if((a>b) && (a>c))
    {
        lhs=(b*b)+(c*c);
        rhs=a*a;
        if(lhs==rhs)
            printf("Yes");
        else
            printf("No");
    }
    else if((b>a) && (b>c))
    {
        lhs=(a*a)+(c*c);
        rhs=b*b;
        if(lhs==rhs)
            printf("Yes");
        else
            printf("No");
    }
    else 
    {
        lhs=(a*a)+(b*b);
        rhs=c*c;
        if(lhs==rhs)
            printf("Yes");
        else
            printf("No");
    }
    
    
    
 }
