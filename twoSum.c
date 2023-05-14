/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include<stdio.h>

int main() {
    int n, target, count;
    scanf("%d", &n);
    scanf("%d", &target);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
                if (arr[i] + arr[j] == target)  
                {
                    printf("[%d , %d]", i, j);
                    count = 1;   
                }
                
        }
        if (count == 1)
        {
            break;
        }
        
        
    }
    
    
}