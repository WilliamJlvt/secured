/*
** EPITECH PROJECT, 2024
** secured
** File description:
** utils.h
*/

#ifndef UTILS_H
    #define UTILS_H

typedef struct key_value_s {
    char *key;
    char *value;
} key_value_t;

int my_strlen(char const *str);
void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
char *my_strdup(char *str);
int my_strcmp(char const *s1, char const *s2);

#endif /* UTILS_H */
