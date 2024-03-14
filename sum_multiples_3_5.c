#include <stdio.h>
#include <unistd.h>



/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 
and 9. The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5below 1000.*/


int main()
{
    int count;
    int i;
    count = 0;
    i = 1;

    while (i < 1000)
    {
        if ( (i % 3) == 0 || (i % 5 ) == 0)
            count += i;
        ++i;
    }
    printf("The result is %d\n", count);

    return 0;
}
