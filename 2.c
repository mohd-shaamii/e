// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int locks,stocks,barrels;
    float lprice,sprice,bprice;
    float sales,comm;
    
    lprice = 45.0;
    sprice = 30.0;
    bprice = 25.0;
    
    printf("Enter values of locks, stocks & barrels: \n");
    scanf("%d%d%d",&locks,&stocks,&barrels);
    
    if((locks<1||locks>70)||(stocks<1 || stocks>80) || (barrels<1 || barrels>90))
    {
        printf("Out of range\n");
        printf("No sales");
        
        exit(0);
        
    }
    
    sales = (locks * lprice) + (stocks * sprice) + (barrels * bprice);
    
    if(sales >1800)
    {
        comm = 1000 * 0.10 + 800 * 0.15 + (sales - 1800) * 0.20;    
    }
    else if(sales > 1000)
    {
        comm = 1000 * 0.10 + (sales-1000)*0.15;    
    }
    else 
    {
        comm = sales * 0.10;
    }
    
    printf("Sales = %.2f ",sales);
    printf("Commision = %.2f ",comm);
    

    return 0;
}
