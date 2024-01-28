/*
** EPITECH PROJECT, 2024
** secured
** File description:
** dump_test.c
*/

#include <criterion/criterion.h>
#include "../../include/hashtable.h"
#include "lcriterion_utils.h"

Test(dump, dump_1)
{
    hashtable_t *ht = new_hashtable(hash, 10);
    char *output = "test_result/dump_test_1.test";

    redirect_stdout_to_file(output);
    reset_stdout();
    ht_dump(ht);
    stdout_stop();
    delete_hashtable(ht);
    cr_assert_eq(0, check_result(output, "test_expected/dump_test_1.solved"));
}

Test(dump, dump_2)
{
    hashtable_t *ht = new_hashtable(hash, 10);
    char *output = "test_result/dump_test_2.test";

    ht_insert(ht, "key1", "value1");
    ht_insert(ht, "key2", "value2");
    redirect_stdout_to_file(output);
    reset_stdout();
    ht_dump(ht);
    stdout_stop();
    delete_hashtable(ht);
    cr_assert_eq(0, check_result(output, "test_expected/dump_test_2.solved"));
}

Test(dump, dump_3)
{
    hashtable_t *ht = new_hashtable(hash, 10);
    char *output = "test_result/dump_test_3.test";

    ht_insert(ht, "key1", "value1");
    ht_insert(ht, "key2", "value2");
    ht_insert(ht, "key3", "value3");
    ht_insert(ht, "key4", "value4");
    ht_insert(ht, "key5", "value5");
    ht_insert(ht, "key6", "value6");
    ht_insert(ht, "key7", "value7");
    ht_insert(ht, "key8", "value8");
    ht_insert(ht, "key9", "value9");
    ht_insert(ht, "key10", "value10");
    redirect_stdout_to_file(output);
    reset_stdout();
    ht_dump(ht);
    stdout_stop();
    delete_hashtable(ht);
    cr_assert_eq(0, check_result(output, "test_expected/dump_test_3.solved"));
}

Test(dump, dump_4)
{
    hashtable_t *ht = new_hashtable(hash, 10);
    char *output = "test_result/dump_test_4.test";

    ht_insert(ht, "C/NE/d\">", "value7");
    ht_insert(ht, "ta?r|A@Q", "value3");
    ht_insert(ht, "0n<vQE!6", "value2");
    ht_insert(ht, "Vo{YxNYA", "value1");
    ht_insert(ht, "oh&zNHZ-", "value8");
    ht_insert(ht, "FNz\"U[b@", "value5");
    ht_insert(ht, "3?;5wT[z", "value9");
    ht_insert(ht, "<GGyE*-o", "value0");
    ht_insert(ht, "Xt-bYsXq", "value4");
    ht_insert(ht, "[/yOxN+.", "value6");

    redirect_stdout_to_file(output);
    reset_stdout();
    ht_dump(ht);
    stdout_stop();
    delete_hashtable(ht);
    cr_assert_eq(0, check_result(output, "test_expected/dump_test_4.solved"));
}

Test(dump, dump_5)
{
    hashtable_t *ht = new_hashtable(&hash, 4);
    char *output = "test_result/dump_test_5.test";

    ht_insert(ht, "Vision", "./Documents/Tournament/Modules/Vision") ;
    ht_insert(ht, "Kratos", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
//    ht_insert(ht, "Kratos", "J'aime pas les noirs");
    ht_insert(ht, "<3", "+33 6 31 45 61 23 71") ;
    ht_insert(ht, "</3", "+33 7 51 49 01 38 11") ;//The same index as "<3"
    redirect_stdout_to_file(output);
    reset_stdout();
    ht_dump(ht);
    stdout_stop();
    delete_hashtable(ht);
    cr_assert_eq(0, check_result(output, "test_expected/dump_test_5.solved"));
}
