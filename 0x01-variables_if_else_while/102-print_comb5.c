#include<stdio.h>
/**
 * main - habaal
 *
 * Return: Zero
 */
int main(void)
{
        int a ;
        int b ;
        int c ;
        int d ;
  


            for (a = '0'; a <= '9' ; a++){
                
             for (b = '0'; b <= '9'; b++){
                for (c = '0'; c <= '9'; c++){
                
                  for (d = '0'; d <= '9'; d++){
             
                if( a != c || b != d){
                    if ( a == c && b < d ){
                putchar(a);
                putchar(b);
                putchar(' ');
                putchar(c);
                putchar(d);
                if (a == '9' && b == '8' && c == '9' && d == '9')
                {
                        putchar('\n');
                        break;
                }
                putchar(',');
                putchar(' ');}
                
                else if (a < c ){
                                        putchar(a);
                putchar(b);
                putchar(' ');
                putchar(c);
                putchar(d);
                if (a == '9' && b == '8' && c == '9' && d == '9')
                {
                        putchar('\n');
                        break;
                }
                putchar(',');
                putchar(' ');
                }
                
                }
                

                
        }}}}
        return (0);
}
