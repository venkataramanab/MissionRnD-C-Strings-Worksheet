/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<malloc.h>
char removeSpaces(char *str) {
	int count = 0,len=0;
	if ((str == '\0')||(*str=='\0')){
		return '\0';
	}
	else{
		for (int i = 0; str[i] != '\0'; i++){
			if (str[i] == ' '){
				count++;
			}
			else{
				str[len++] = str[i];
			}
		}
	}
	if (count > 0){
		str[len] = '\0';
	}
	return *str;
}