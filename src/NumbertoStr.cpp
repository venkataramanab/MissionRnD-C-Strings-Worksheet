/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
char * swap(char*,int,int);
void number_to_str(float number, char *str,int afterdecimal){//without calculating length;reverse str;
		int i = 0,flag=0,fix;
		float temp;
		if (number < 0)
		{
			flag = 1;
			number *= -1;
		}
		if (afterdecimal > 0){
			temp = number - (int)number;
			while ((int)number != 0){
				str[i] = ((int)number % 10) + '0';
				number /= 10;
				i++;
			}
			if (flag == 1){
				str[i] = '-';
				i++;
			}
			str[i] = '.';
			fix = i;
			i++;
			while (afterdecimal > 0){
				temp *= 10;
				afterdecimal--;
			}
			while ((int)temp != 0){
				str[i] = ((int)temp % 10) + '0';
				temp /= 10;
				i++;
			}
		}
		else{
			while ((int)number != 0){
				str[i] = ((int)number % 10) + '0';
				number /= 10;
				i++;
			}
			if (flag == 1){
				str[i] = '-';
				i++;
			}
			fix = i;
		}
		fix = fix + i;
		i = fix - i;
		fix = fix - i;
		str = swap(str, i, fix);
}
char *swap(char *str, int i, int fix){
	for (int j = 0; j < (i) / 2; j++){
		str[j] = str[j] + str[i - j - 1];
		str[i - j - 1] = str[j] - str[i - j - 1];
		str[j] = str[j] - str[i - j - 1];
	}
	for (int j = i + 1; j < (fix + j) / 2; j++){
		str[j] = str[j] + str[fix - 1];
		str[fix - 1] = str[j] - str[fix - 1];
		str[j] = str[j] - str[fix - 1];
	}
	str[fix] = '\0';
	return str;
}