#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
int exponent(int exp);
void print_binary(unsigned long int);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
unsigned int flip_bits(unsigned lng int n, unsigned long int m);

#endif /* MAIN_H */
