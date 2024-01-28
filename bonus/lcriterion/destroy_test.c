/*
** EPITECH PROJECT, 2024
** secured
** File description:
** destroy_test.c
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include "../../include/hashtable.h"

Test(destroy, destroy_1)
{
    hashtable_t *ht = new_hashtable(hash, 10);

    cr_assert_eq(ht_insert(ht, "key", "value"), 0);
    cr_assert_not_null(ht_search(ht, "key"));
    cr_assert_str_eq(ht_search(ht, "key"), "value");
    delete_hashtable(ht);
}
