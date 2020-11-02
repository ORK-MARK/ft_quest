#include <io.h>
#include <stdio.h>


void ft_putchar(char b) {
	_write(1, &b, 1);
}

void ft_print_alphabet() {
	char b = 'a';
	for (; b <= 'z'; b++) {
		ft_putchar(b);
	}
}

void ft_print_reverse_alphabet() {
	char b = 'z';
	for (; b >= 'a'; b--) {
		ft_putchar(b);
	}
}

void ft_print_numbers() {
	char n = '0';
	for (; n <= '9'; n++) {
		ft_putchar(n);
	}
}

void ft_is_negative(int n) {
	if (n >= 0) {
		ft_putchar('P');
	}
	else {
		ft_putchar('N');
	}
}

void ft_putnbr(int nb) {
	int b ;
	char s;
	int i;
	int e;
	int end;
	b = nb;
	e = 10;
	for (; b / e != 0; e *= 10);

	e /= 10;

	for (; e != 0; e /= 10 ) {
		i = nb / e;
		end = i % 10;
		s = 48 + end;
		ft_putchar(s);
	}

	/*while (nb != 0) {
		i = nb % 10;
		s = 48 + i;
		ft_putchar(s);
		nb /= 10;
	}*/
}
//for (int i = 10; nb != 0; i *= 10);
int main() {
	/*ft_print_alphabet();
	ft_print_reverse_alphabet();
	ft_print_numbers();
	ft_is_negative(-2);*/
	ft_putnbr(1234567890);
}