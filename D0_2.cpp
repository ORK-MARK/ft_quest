#include <io.h>
#include <stdio.h>


void ft_putchar(char b) {
	_write(1, &b, 1);
}

int step(int e) {
	int io;
	for (io = 1; e != 0; e--) {
		io *= 10;
	}
	return io;
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
	char sims;
	int i;
	int e;
	int end;
	b = nb;
	e = 1;
	for (; b >= 10; e++, b /= 10);
	e--;
	for (; e >= 0; e-- ) {
		i = nb / step(e);
		end = i % 10;
		sims = 48 + end;
		ft_putchar(sims);
	}
	printf("\n");

	/*while (nb != 0) {
		i = nb % 10;
		s = 48 + i;
		ft_putchar(s);
		nb /= 10;
	}*/
}
int main() {
	/*ft_print_alphabet();
	ft_print_reverse_alphabet();
	ft_print_numbers();
	ft_is_negative(-2);*/
	ft_putnbr(-12345);
}