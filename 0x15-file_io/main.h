#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <sys/stat.h>


ssize_t read_textfile(const char *filename, size_t letters);

#endif
