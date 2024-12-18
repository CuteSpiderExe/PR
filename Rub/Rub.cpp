#include <iostream> 
#include <cctype> 
#include <locale> 
using namespace std;

string print(uint16_t x)
{
	if (x > 9999) return "Много).";
	static const char* x19[] = { "Дырка от","один","два","три","четыре","пять","шесть","семь","восемь","девять","десять",
	"одинадцать","двенадцать","тринадцать","четырнадцать","пятнадцать","шестнадцать","семнадцать","восемнадцать",
	"девятнадцать" };
	static const char* x90[] = { "двадцать","тридцать","сорок","пятдесят","шестьдесят","семьдесят","восемьдесят","девяносто" };
	static const char* x900[] = { "сто","двести","триста","четыреста","пятьсот","шестьсот","семьсот","восемьсот","девятьсот" };
	static const char* x9000[] = { "тысяча","две тысячи", "три тысячи","четыре тысячи", "пять тысяч", "шесть тысяч",
	"семь тысяч", "восемь тысяч", "девять тысяч" };
	static const char* rub[] = { " рубль."," рубля."," рублей." };
	string res;
	uint8_t doln = 2;
	if (x > 999)
	{
		res += x9000[x / 1000 - 1]; x %= 1000;
		if (x) res += " ";
	}
	if (x > 99)
	{
		res += x900[x / 100 - 1]; x %= 100;
		if (x) res += " ";
	}
	if (x > 19)
	{
		res += x90[x / 10 - 2]; x %= 10;
		if (x) res += " ";
	}
	if (x || res.empty())
	{
		res += x19[x];
		if (x < 5) doln = 1;
		if (x == 1) doln = 0;
	}
	res.front() = toupper(res.front());
	res += rub[doln];
	return res;
}


int main()
{
	setlocale(LC_ALL, "rus");
	uint16_t sum;
	cin >> sum;
	cout << print(sum);
}