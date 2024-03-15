



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
            if ((col == 1 && row == 1) || (col == icol && row == 1) || (col == 1 && row == irow) || (col == icol && row = irow))
            {
                ft_putchar('o');
            }
            if ((col != 1 && col != icol) && (row == 1 || row == irow))
            {
                ft_putchar('-');
            }
            if ((col == 1 && ))
            if (icol == col)
            {
                icol = 0;
                write(1, '\n', 2);
            }
        }
    }
    
}


int main(void)
{
    rush(5,5);
    return(0);
}
