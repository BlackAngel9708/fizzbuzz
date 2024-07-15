/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** lib
*/

#ifndef LIBMY_
        #define LIBMY_

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include "./lib/my/menu.h"
    #include "./lib/my/my_printf.h"
    #include <sys/stat.h>

    #define IS_LOWERCASE(c) ((c) >= 'a' && (c) <= 'z')
    #define IS_UPPERCASE(c) ((c) >= 'A' && (c) <= 'Z')
    #define IS_ALPHA(c) (IS_LOWERCASE(c) || IS_UPPERCASE(c))
    #define IS_NUM(c) ((c) >= '0' && (c) <= '9')
    #define IS_ALPHANUM(c) (IS_NUM(c) || IS_ALPHA(c))
    #define IS_PRINTABLE(c) ((c) >= ' ' && (c) <= '~')

    #define MIN(x, y) (((x) < (y)) ? (x) : (y))
    #define MAX(x, y) (((x) > (y)) ? (x) : (y))
    #define ABS(n) (((n) > 0) ? (n) : -(n))

    #define BASE_BIN "01"
    #define BASE_OCT "01234567"
    #define BASE_DEC "0123456789"
    #define BASE_HEX "0123456789abcdef"
    #define BASE_HEX_MIN "0123456789abcdef"
    #define BASE_HEX_MAJ "0123456789ABCDEF"

int my_getnbr(char *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strupcase(char *str);
void my_swap(int *a, int *b);
int afficher_dossier(int argc, char **argv);
int ls_cache(int argc, char **argv);
int my_putnstr(char const *str, unsigned int n);
int directory(int argc, char **argv);
int my_printf(const char *restrict format, ...);
int printf_bool_helper(printf_args_t *arg, char *str_true, char *str_false);
int printf_char(printf_args_t *arg);
int printf_purcent(printf_args_t *arg);
int printf_float(printf_args_t *arg);
int printf_rounded_float(printf_args_t *arg);
int printf_int(printf_args_t *arg);
int printf_len(printf_args_t *arg);
int printf_octal(printf_args_t *arg);
int printf_decimal(printf_args_t *arg);
int printf_hexadecimal(printf_args_t *arg);
int printf_hexadecimal2(printf_args_t *arg);
int printf_str(printf_args_t *arg);
int printf_pointer(printf_args_t *arg);
int printf_bool_min(printf_args_t *arg);
int my_nbr_len(int n, const char *base);
int my_put_double(double n, int precision);
int my_nbr_len(int n, const char *base);
int my_putnchar(char c, int n);
int my_put_double_base(double n, const char *base, int precision);
int my_put_unsigned_base(unsigned int nbr, char const *base);
int my_put_long_base(unsigned long nbr, char const *base);
int right_pad(printf_args_t *arg, int written);
int left_pad(printf_args_t *arg, int written);
int may_you_show_this_formatting(char **ptr, printf_args_t *arg);
int my_putnbr_base(int nbr, char const *base);
int game_setup(void);
sfSprite sprite(sfRenderWindow *window, sfEvent event, sfSprite *sprite);
int fermeture(sfRenderWindow *window, sfEvent event, sfSprite *sprite);
int mouse_click(sfRenderWindow *window);
int game(sfRenderWindow *window, sfEvent event);
int *position(char *map, char search, int taille);
int get_nb_cols(char *buffer);
int get_nb_rows(char *buffer);
int bigger_line(int line_1, int line_2);
int error_management(int argc, char **argv);
int invalid_map_error(char const *filepath);
int open_or_read_or_close_error(char const *filepath);
int file_error(char const *filepath);
int arguments_error(int argc);
char **fill_tab(char **tab, char *buffer, int rows);
int check_end_game_victory(char **map, char **saved_map, int nb_rows);
int get_nb_o(char **saved_map, int nb_rows);
int check_end_defeat(char *buffer, char **map);
int get_nb_x(char **map, int nb_rows);
int array(char **array, int nb_rows);
char **malloc_2d_arrays(int rows, int cols);
void up_management(char **map, int pi, int pj, char **saved_map);
void down_management(char **map, int pi, int pj, char **saved_map);
void right_management(char **map, int pi, int pj, char **saved_map);
void left_management(char **map, int pi, int pj, char **saved_map);
char **move_left(char **map, int nb_rows, char **saved_map);
char **move_right(char **map, int nb_rows, char **saved_map);
char **move_down(char **map, int nb_rows, char **saved_map);
char **move_up(char **map, int nb_rows, char **saved_map);
char **deplacement(int input, char **map, int nb_rows, char **saved_map);
void display(char **map, char *buffer);
int reset_game(char **map, char **saved_map, int nb_rows);
int end_management(char *buffer, char **map, char **saved_map, int nb_rows);
void description(void);
char *open_or_read_file(char const *filepath);
long file_size(char const *filepath);
void init_screen(void);
void close_screen(char *buffer, char **map);
int my_screen(char *buffer, char **map, char **saved_map, int nb_rows);
int check_stuck(char **map, int i, int j);
int fuzzbozz(int argc, char **argv);
int fizzbuzz(int argc, char **argv);

#endif
