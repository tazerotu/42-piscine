
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void rush(int row, int col)
{
    int icol = 1;
    int irow = 1;
    char c;
    while (irow <= row)
        while(icol <= col)
    {
        {
            if ((icol == 1 && irow == 1) || (icol == col && irow == 1) || (icol == 1 && irow == row) || (icol == col && irow = row))
            {
                ft_putchar('o');
            }
            if ((icol != 1 && icol != col) && (irow == 1 || irow == row))
            {
                ft_putchar('-');
            }
            if ((icol == 1 || icol == col) && (irow != 1 || irow != row))
            {
                ft ft_putchar('|');
            }
            if (icol == col)
            {
                icol = 0;
                write(1, '\n', 2);
            }
            icol++;
        }
        irow++;
    }
    
}


int main(void)
{
    rush(5,5);
    return(0);
}
