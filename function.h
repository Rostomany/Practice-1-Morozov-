
/*------------------------Ex3------------------------------*/

//t_list ����������� ������������ ��������� struct s_list
typedef struct s_list t_list;

/*
* @brief create_node c������ ������� ������������ ������.
* @param set_number ����� ������������ �������� ������������ ������.
* @return ���������� ��������� ������� ������������ ������.
*/
t_list* create_node(int set_number);

/*
* @brief push_back ������� � ��������� ������� ������������ ������ � ��� �����.
* @param list ��������� �� ����� ������� �������� ������.
* @param number ����� ��������, ��� ����� ������ � �������� � ����� ������.
* @return ������ �� ����������.
*/
void push_back(t_list** list, int number);

/*
* @brief delete_node ������� ������� ������ �� ��� ������.
* @param list ��������� �� ����� ������� �������� ������.
* @param number ����� ��������, ��� ����� ������.
* @return ������ �� ����������.
*/
void delete_node(t_list** list, int number);

/*
* @brief search_node ���� ����� �������� �� ��� ������.
* @param list ��������� �� ����� ������� �������� ������.
* @param number ����� �������� ��������.
* @return ���������� ����� �������� ��������.
*/
t_list* search_node(t_list** list, int number);

/*------------------------Ex1------------------------------*/

/*
* @brief square_root ��������� ����� ����� ����������� ����� ����� number_
* @param number_ �����, �� �������� ����� ��������� ������.
* @return ���������� ����� ����� ����� ����� number_
*/
int square_root(number_);

/*------------------------Ex2------------------------------*/

/*
* @brief LongestCommonPrefix ���������� � ��������� ������ �������� ������� �������, �������� �� ��� ����� ������� words
* @param words ������ ����
* @param word_count ����� ���� � �������
* @param word_length ����������� ��������� ����� ���� � ����� (������ ���� '\0')
* @return ���������� ����� ������� ������� ���� ������� word.
*/
char* LongestCommonPrefix(char** words, int word_count, int word_length);
