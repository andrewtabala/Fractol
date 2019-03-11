NAME = fractol
NAMEL = libft.a
CFLAG = -c
FLAGS = -Wall -Wextra -Werror

BOLD = \033[1m
UNDERLINE = \033[4m
RED = \033[0;31m
GREEN = \033[0;32m
RESET = \033[0m

all: $(NAME)

$(NAME): 
	cd libft; \
		gcc $(CFLAG) $(FLAGS) *.c; \
		ar rc $(NAMEL) *.o
	@echo "$(BOLD)$(NAMEL)	$(GREEN)$(UNDERLINE)was created$(RESET)" 
	gcc -I /usr/local/include libft/libft.a \
		fractol.c \
		img.c \
		colorchoose.c \
		setdef.c \
		mousemove.c \
		keyactions.c \
		burningship.c \
		fractstart.c \
		start.c \
		mandelbrot.c \
		julia.c \
		-L /usr/local/lib \
		-lmlx -framework OpenGL \
		-framework Appkit \
		-o fractol
	@echo "$(BOLD)$(NAME)	$(GREEN)$(UNDERLINE)was created$(RESET)"
clean:
	rm -rf *.o
	@echo "$(BOLD).o's	$(RED)$(UNDERLINE)was deleted$(RESET)"
fclean: clean
	rm -rf $(NAME)
	@echo "$(BOLD)$(NAME)	$(RED)$(UNDERLINE)was deleted$(RESET)"

re: fclean all	