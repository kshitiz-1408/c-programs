#include <stdio.h>

void inc( );
void main()
{
inc( );
inc( );
inc( );
}
void inc()
{
int i=69;
printf("%d", i);
i++;

}