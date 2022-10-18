NAME    = phone
OS		= $(shell uname)

# directories
SRCDIR        =    ./src
INCDIR        =    ./includes
OBJDIR        =    ./obj

# src / obj files
SRC        = main.cpp\
            Contact.class.cpp\
            PhoneBook.class.cpp\


OBJ        = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

# compiler
CC        = c++
CFLAGS    = -Wall -Wextra -Werror -g3 #-fsanitize=address


all:	obj $(NAME)

obj:	
		mkdir -p $(OBJDIR)


$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp
				$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<


$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -lm -o $(NAME)

clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -rf $(NAME)

re:		fclean
		make all