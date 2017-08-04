#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    int t;
    scanf("%d", &t);
    float h[t], n[t], m[t], count[t];
    if(1<=t<=500)
    {
    for(int j = 0; j < t; j++)
    {
        scanf("%f%f%f", &h[j],&n[j],&m[j]);
    }
    }
    
    for(int j = 0; j < t; j++)
    {
        if(1<=h[j]<=1000 && 1<=n[j]<=10 && 1<=m[j]<=10)
    {
    	float upto = h[j]-n[j];
    	float x = 0.0;
    	float i = 0;
    	while(i < upto)
   	{
        	i = (i+n[j])-m[j];
	        count[j]++;
	}
   	if (n[j] == (h[j]-i))
        	count[j]++;
    	else
    	{
        	x = (h[j]-i)/n[j];
	        count[j] = count[j]+x;
    	}
    }
    }
    for(int j = 0; j < t; j++)
    	printf("\n%.2f", count[j]);
    return (EXIT_SUCCESS);
}