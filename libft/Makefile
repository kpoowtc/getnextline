# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksefeane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/19 13:37:45 by ksefeane          #+#    #+#              #
#    Updated: 2019/05/25 16:47:00 by ksefeane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I. -c

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "libft created"

$(OBJ): $(SRC)
	@echo "libft compiling.."
	@gcc $(FLAGS) $(SRC)
	
clean:
	@echo "libft deleting objects.."
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "libft deleted"

re: fclean all
