/**
 * times_table - prints time table
 *
 */
void times_table(void);
{
int c,m,r;
for(c =0; c < 10; c++)
{
for(m =0; m < 10; m++)
{
r = c * m;
_putchar('0' + r);
_putchar(',');
}
_putchar('\n');
}
}
