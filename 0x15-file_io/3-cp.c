#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 on success, exit with code on failure
 */
int main(int argc, char *argv[])
{
  int fd_from, fd_to;
  char buffer[BUFFER_SIZE];
  ssize_t bytes_read, bytes_written;

  if (argc != 3)
  {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
  }


  fd_from = open(argv[1], O_RDONLY);

  if (fd_from == -1)
  {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
  }

    /* open the file_to in write-only mode, create it if it does not exist, and truncate it if it exists */
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    /* check if the file_to can not be created or written */
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(fd_from);
        exit(99);
    }

    /* read and write the file content until EOF or error */
    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        /* check if write fails or does not write the expected amount of bytes */
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }
    /* check if read fails */
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    /* close the files */
    if (close(fd_from) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        close(fd_to);
        exit(100);
    }
    if (close(fd_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }

    /* return 0 on success */
    return (0);
}
