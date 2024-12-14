
#include <stdio.h>
#include <stdlib.h>

int isleap(int year)
{
    if((year%4==0 && year%100!=0) || (year %400 ==0))
        return 1;
    else
        return 0;
}

int main() {
    int d,m,y,td,tm,ty;
    
    printf("Enter todays date in dd-mm-yyyy format: \n");
    scanf("%d%d%d",&d,&m,&y);
    
    if(d<1 || d>31)
    {
        printf("Day out of range\n");
        exit(0);
    }
    else if(m<1 || m>12)
    {
        printf("Month out of range\n");
        exit(0);
    }
    else if(y<1812 || y>2012)
    {
        printf("Year out of range\n");
        exit(0);
    }
    else if(((m==4) || (m==6) || (m==9) || (m==11)) && d==31 )
    {
        printf("Day out of range for month\n");
        exit(0);
    }
    else if(isleap(y) && m==2 && d>=30)
    {
        printf("Day out of range\n");
        exit(0);
    }
    else if(!isleap(y) && m==2 && d>=29)
    {
        printf("Day out of range\n");
        exit(0);
    }
    
    tm=m;
    ty=y;
    
    switch(m)
    {
        case 4:
        case 6:
        case 9:
        case 11: if(d == 30)
                {
                    td = 1;
                    tm = m+1;
                }
                else
                {
                    td=d+1;
                }
        break;
        
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10: if(d==31)
                {
                    td = 1;
                    tm = m+1;
                }    
                else
                {
                    td=d+1;
                }
        break;
        
        case 12: if(d==31)
                {
                    if(y==2012)
                    {
                        printf("Year out of range\n");
                        exit(0);
                    }
                    else
                    {
                        td = 1;
                        tm = 1;
                        ty = y+1;
                    }
                }
                else
                {
                    td = d+1;
                }
        break;
        
        case 2: if(isleap(y) && d == 29)
                {
                    td=1;
                    tm = m+1;
                }
                else if(!isleap(y) && d == 28)
                {
                    td = 1;
                    tm = m+1;
                }
                else 
                {
                    td = d+1;
                }
            break;
            
    }
        
        printf("Next date : %d/%d/%d \n",td,tm,ty);
        return 0;
        
    }
    
    
