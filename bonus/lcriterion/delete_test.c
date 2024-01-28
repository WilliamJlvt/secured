/*
** EPITECH PROJECT, 2024
** secured
** File description:
** delete_test.c
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include "../../include/hashtable.h"

Test(delete, delete_1)
{
    hashtable_t *ht = new_hashtable(hash, 10);

    cr_assert_eq(ht_insert(ht, "key", "value"), 0);
    cr_assert_not_null(ht_search(ht, "key"));
    cr_assert_str_eq(ht_search(ht, "key"), "value");
    cr_assert_eq(ht_delete(ht, "key"), 0);
    cr_assert_null(ht_search(ht, "key"));
    delete_hashtable(ht);
}

Test(delete, delete_2)
{
    hashtable_t *ht = new_hashtable(hash, 10);

    cr_assert_eq(ht_insert(ht, "key", "value"), 0);
    cr_assert_eq(ht_insert(ht, "key2", "value2"), 0);
    cr_assert_not_null(ht_search(ht, "key"));
    cr_assert_str_eq(ht_search(ht, "key"), "value");
    cr_assert_not_null(ht_search(ht, "key2"));
    cr_assert_str_eq(ht_search(ht, "key2"), "value2");
    cr_assert_eq(ht_delete(ht, "key"), 0);
    cr_assert_null(ht_search(ht, "key"));
    cr_assert_not_null(ht_search(ht, "key2"));
    cr_assert_str_eq(ht_search(ht, "key2"), "value2");
    delete_hashtable(ht);
}

Test(delete, delete_3)
{
    hashtable_t *ht = new_hashtable(hash, 10);

    cr_assert_eq(ht_insert(ht, "key", "value"), 0);
    cr_assert_eq(ht_delete(ht, "key2"), 84);
    delete_hashtable(ht);
}
