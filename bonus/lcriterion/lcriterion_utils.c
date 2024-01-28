/*
** EPITECH PROJECT, 2024
** secured
** File description:
** lcriterion_utils.c
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>

void redirect_stdout_to_file(const char *filename) {
    freopen(filename, "w", stdout);
}

void reset_stdout() {
    freopen("/dev/stdout", "w", stdout);
}

void stdout_stop() {
    fclose(stdout);
}

static long long get_byte_size(char const *filepath)
{
    struct stat *stat_buf = malloc(sizeof(struct stat));
    long long size = -1;

    if (stat_buf == NULL)
        return -1;
    if (stat(filepath, stat_buf) == 0)
        size = stat_buf->st_size;
    free(stat_buf);
    return size;
}

static char *read_file(const char *filepath)
{
    long long size = get_byte_size(filepath);
    char *buffer;
    int file;

    if (size == -1)
        return NULL;
    buffer = malloc(sizeof(char) * (size + 1));
    if (buffer == NULL)
        return NULL;
    file = open(filepath, O_RDONLY);
    if (file == -1)
        return NULL;
    read(file, buffer, size);
    buffer[size] = '\0';
    close(file);
    return buffer;
}

char *get_result(const char *output_file_path)
{
    char *output_buffer = read_file(output_file_path);

    return output_buffer;
}

int check_result(const char *output_file_path, const char *expected_file_path)
{
    char *expected_buffer = read_file(expected_file_path);
    char *output_buffer = read_file(output_file_path);

    if (strcmp(expected_buffer, output_buffer) != 0) {
        free(expected_buffer);
        free(output_buffer);
        return 1;
    }
    free(expected_buffer);
    free(output_buffer);
    return 0;
}
