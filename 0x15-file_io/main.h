#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void close_fd(int fd);
void copy_contents(int from_fd, int to_fd, char *src_file, char *dest_file);
#endif
