/*
** EPITECH PROJECT, 2024
** secured
** File description:
** main.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "../include/hashtable.h"

char *random_string(int len)
{
    char *str = malloc(sizeof(char) * (len + 1));
    int i = 0;

    while (i < len) {
        str[i] = rand() % (126 - 34) + 33;
        i++;
    }
    str[i] = '\0';
    return str;
}

int main(void)
{
    //test
    int test_size = 100000;
    hashtable_t *ht = new_hashtable(hash, test_size / 100);
    char *key;
    char *value;
    char **keys = malloc(sizeof(char *) * test_size);
    char **values = malloc(sizeof(char *) * test_size);

    for (int i = 0; i < test_size; i++) {
        key = random_string(100);
        value = random_string(25);
        keys[i] = key;
        values[i] = value;
        ht_insert(ht, key, value);
        printf("loading (inserting): %d%% [%d/%d]\r", (i * 100) / test_size, i, test_size);
    }
    printf("loaded (inserting): 100%% [%d/%d]\n", test_size, test_size);

    ht_dump(ht);

    clock_t start, end;
    for (int i = 0; i < test_size; i += rand() % 100) {
        start = clock();
        printf("searching for key: %s\n", keys[i]);
        char *found = ht_search(ht, keys[i]);
        end = clock();
        printf("found: %s (%f milliseconds)\n", found, ((double) (end - start)) / CLOCKS_PER_SEC * 1000);
    }

    delete_hashtable(ht);
    for (int i = 0; i < test_size; i++) {
        free(keys[i]);
        free(values[i]);
    }
    free(keys);
    free(values);
    return 0;
}
