NAME = libfts.a
SRC = ft_isalpha.s
SRC += ft_puts.s
SRC += ft_toupper.s
SRC += ft_tolower.s
SRC += ft_isdigit.s
SRC += ft_isalnum.s
SRC += ft_isascii.s
SRC += ft_isprint.s
SRC += ft_bzero.s
SRC += ft_strcat.s
SRC += ft_strlen.s
SRC += ft_memcpy.s
SRC += ft_memset.s
SRC += ft_strdup.s
SRC += ft_cat.s
SRC += ft_icmp.s
SRC += ft_putchar.s
	
OBJ = $(SRC:.s=.o)
FLAG = -Wall -Werror -Wextra
CG = \033[92m
CY =  \033[93m
CE = \033[0m
CB = \033[34m
INC = -I ./includes/

all: start $(NAME)
	
$(NAME): $(OBJ)
	@echo "\033[K$(CY)[LIBFTASM] :$(CE) $(CG)Compiling libftasm ...$(CE)";
	@ar rc $(NAME) $(OBJ)

start:
	@echo "\n";
	@echo "			$(CG)      :::      :::::::::::::::::::: ::::::::::::::::::::::::     ::::::::   :::   ::: $(CE)";
	@echo "			$(CG)     :+:           :+:    :+:    :+::+:           :+:  :+: :+:  :+:    :+: :+:+: :+:+: $(CE)";
	@echo "			$(CG)    +:+           +:+    +:+    +:++:+           +:+ +:+   +:+ +:+       +:+ +:+:+ +:+ $(CE)";
	@echo "			$(CG)   +#+           +#+    +#++:++#+ :#::+::#      +#++#++:++#++:+#++:++#+++#+  +:+  +#+  $(CE)";
	@echo "			$(CG)  +#+           +#+    +#+    +#++#+           +#++#+     +#+       +#++#+       +#+   $(CE)";
	@echo "			$(CG) #+#           #+#    #+#    #+##+#           #+##+#     #+##+#    #+##+#       #+#     $(CE)";
	@echo "			$(CG)############################## ###           ######     ### ######## ###       ###     $(CE)";
	@echo "\n";

%.o: %.s
	@echo "\033[K$(CY)[LIBFTASM] :$(CE) $(CG)Compiling $<$(CE) \033[1A";
	@nasm -f macho64 $< -o $@ ;

test: $(NAME) main.c
	@echo "\033[K$(CY)[LIBFTASM] :$(CE) $(CG)Compiling test \033[1A";
	@gcc -c main.c 
	@gcc -o test main.o libfts.a

clean: start
	@echo "\033[K$(CY)[LIBFTASM] :$(CE) $(CG)Cleaning Libftasm objects$(CE)\033[1A";
	@/bin/rm -rf $(OBJ) main.o;

fclean: clean
	@echo "\033[K$(CY)[LIBFTASM] :$(CE) $(CG)Cleaning Libftasm ...$(CE)\033[1A";
	@/bin/rm -f $(NAME) test;

re: fclean all

.PHONY: all clean fclean re