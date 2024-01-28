/*
** EPITECH PROJECT, 2024
** secured
** File description:
** lcriterion_utils.h
*/

#ifndef LCRI_H
    #define LCRI_H

    void redirect_stdout_to_file(char *filepath);
    void reset_stdout(void);
    void stdout_stop(void);
    int check_result(char *output, char *expected);
    char *get_result(const char *output_file_path);

#endif /* LCRI_H */
