CC = gcc
CFLAGS = -Wall -Wextra -I.

SRCS = main.c studentinfo.c examentry.c gradecalculation.c gradetable.c
OBJS = $(SRCS:.c=.o)
HEADER = studentinfo.h examentry.h gradecalculation.h gradetable.h
EXECUTABLE = student_grade_card

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	del $(EXECUTABLE) $(OBJS)
