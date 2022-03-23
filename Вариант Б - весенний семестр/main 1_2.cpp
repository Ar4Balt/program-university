/*/
’арактеристикой слова назовем длину содержащейс€ в нем максимальной серии
(подр€д идущих одинаковых символов). ”пор€дочить слова заданного предло-
жени€ в соответствии с ростом их характеристик. «аписать их в результирую-
щую строку.
/**/
#include <iostream>
#include <vector>
#define n 2500

using namespace std;

class WORD {
private:
	string text;
	char* word = new char[n];
public:	
	int number;

	WORD() : number(0) {}
	void enter(){
		cin.getline(word, n);
	}
	void function(){
		int num = strlen(word);

		for (int i = 0; i < num; i++){
			if (word[i] >= 65 || word[i] <= 90 || word[i] >= 97 || word[i] <= 122)		//смотрим по кодировке UTF-8
			{
				if (word[i] == word[i + 1])
				{
					++number;
				}
			}
			if (word[i] == '.' || word[i] == ',' || word[i] == ';' ||
				word[i] == ':' || word[i] == '!' || word[i] == '?' ||
				word[i] == '(' || word[i] == ')' || word[i] == '-')
			{
				break;
			}
			else
			{
				break;
			}
		}
	}
	void echo() {
		cout << word << "	";
	}
};

int main_1_2()
{
	WORD wd1, wd2;

	wd1.enter();
	wd1.function();
	wd2.enter();
	wd2.function();

	if (wd1.number < wd2.number)
	{
		wd2.echo();
		wd1.echo();
	}
	else
	{
		wd1.echo();
		wd2.echo();
	}

	cout << "hell\n";

	return 0;
}