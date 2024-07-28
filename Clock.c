#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_write(int a, int b, int c)
{
	//HOURS
	ft_putchar('0' + a / 10);
	ft_putchar ('0' + a % 10);
	write(1, ": ", 2);
	//MINUTES
	ft_putchar('0' + b / 10);
	ft_putchar ('0' + b % 10);
	write(1, ": ", 2);
	//seconds
	ft_putchar('0' + c / 10);
	ft_putchar ('0' + c % 10);
	ft_putchar ('|');
	write(1, "\n", 1);

}

void	ft_time(void)
{
	int h;
	int m;
	int s;

	h = 0;
	while (h <= 24)
	{
		m = 0;
		if (h == 24)
		{
			h = 00;
		}
		while (m <= 60)
		{
		s = 0;
			while (s <= 60)
			{
				sleep (1);
				ft_write(h, m, s);
				s++;
			}
			m++;	
		}
		h++;
	}
}

int main (void)
{
	ft_time();
	return 0;
}
