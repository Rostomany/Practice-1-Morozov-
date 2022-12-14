
/*------------------------Ex3------------------------------*/

//t_list сокращенное наименование структуры struct s_list
typedef struct s_list t_list;

/*
* @brief create_node cоздает элемент односвязного списка.
* @param set_number номер создаваемого элемента односвязного списка.
* @return возвращает созданный элемент односвязного списка.
*/
t_list* create_node(int set_number);

/*
* @brief push_back создает и добавляет элемент односвязного списка в его конец.
* @param list указатель на адрес первого элемента списка.
* @param number номер элемента, что будет создан и добавлен в конец списка.
* @return ничего не возвращает.
*/
void push_back(t_list** list, int number);

/*
* @brief delete_node удаляет элемент списка по его номеру.
* @param list указатель на адрес первого элемента списка.
* @param number номер элемента, что будет удален.
* @return ничего не возвращает.
*/
void delete_node(t_list** list, int number);

/*
* @brief search_node ищет адрес элемента по его номеру.
* @param list указатель на адрес первого элемента списка.
* @param number номер искомого элемента.
* @return возвращает адрес искомого элемента.
*/
t_list* search_node(t_list** list, int number);

/*------------------------Ex1------------------------------*/

/*
* @brief square_root вычисляет целую часть квадратного корня числа number_
* @param number_ число, из которого будем извлекать корень.
* @return возвращает целую часть корня числа number_
*/
int square_root(number_);

/*------------------------Ex2------------------------------*/

/*
* @brief LongestCommonPrefix записывает в отдельную строку наиболее длинный перфикс, входящий во все слова массива words
* @param words массив слов
* @param word_count число слов в массиве
* @param word_length максимально возможное число букв в слове (считая знак '\0')
* @return возвращает самый длинный префикс слов массива word.
*/
char* LongestCommonPrefix(char** words, int word_count, int word_length);
