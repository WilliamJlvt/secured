/*
** EPITECH PROJECT, 2024
** secured
** File description:
** insert_test.c
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include "../../include/hashtable.h"

Test(insert, insert_1)
{
    hashtable_t *ht = new_hashtable(hash, 10);

    cr_assert_eq(ht_insert(ht, "key", "value"), 0);
    cr_assert_not_null(ht_search(ht, "key"));
    cr_assert_str_eq(ht_search(ht, "key"), "value");
    delete_hashtable(ht);
}

Test(insert, insert_2)
{
    hashtable_t *ht = new_hashtable(hash, 1);

    cr_assert_eq(ht_insert(ht, "key1", "value"), 0);
    cr_assert_eq(ht_insert(ht, "key2", "value"), 0);
    delete_hashtable(ht);
}

Test(insert, insert_3)
{
    hashtable_t *ht = new_hashtable(hash, 10);

    cr_assert_eq(ht_insert(ht, NULL, "value"), 84);
    cr_assert_eq(ht_insert(ht, "key", NULL), 84);
    cr_assert_eq(ht_insert(ht, NULL, NULL), 84);
    delete_hashtable(ht);
}
