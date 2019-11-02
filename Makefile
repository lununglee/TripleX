# NAME OF EXECUTABLE
NAME = triple_x

# COMPILER
CC = g++
CFLAGS = -Wall -Wextra -Werror

# DIRECTORIES
SRCDIR = ./srcs/
OBJDIR = ./objs/
INCDIR = ./includes/

# SRCS & OBJS
SRCS = ./srcs/triple_x.cpp
OBJS = ./objs/triple_x.o

# # LIBRARY
# FT = ./libft/
# FT_LIB = $(addprefix $(SRCDIR),libft.a)
# FT_INC = -I $(LIBFT)
# FT_LNK = -L $(LIBFT) -l ft

all: objdir $(NAME)

objdir:
	mkdir -p $(OBJDIR)

# $(OBJDIR)%.o:$(SRCDIR)%.c
# 	$(CC) $(CFLAGS) -I $(SRCS) -I $(INCDIR) -o $@ -c $<

$(NAME): $(OBJDIR)
	$(CC) $(CFLAGS) -I $(INCDIR) -o $(OBJS) -c $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
