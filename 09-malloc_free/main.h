#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
void *malloc_checked(unsigned int b);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
#endif

