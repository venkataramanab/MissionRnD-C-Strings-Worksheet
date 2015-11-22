/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>

#define SIZE 31
void check_match(char*, char*, int, int);
char ** commonWords(char *str1, char *str2) {
	if ((str1 == NULL) || (str2 == NULL)){
		return NULL;
	}
	else{
		int start = 0, w_count = 0;
		for (int i = 0; str1[i] != NULL; i++){
			if (str1[i] == ' '){
				if (start != (i - 1)){
					w_count++;
					check_match(str1, str2, start, i - 1);
				}
				start = i + 1;
			}
		}
	}
}
void check_match(char *str1, char *str2, int first, int last){
	int start = 0;
	for (int i = 0; str2[i] != NULL; i++){
		if (str2[i] == ' '){
			if (start != (i - 1)){
				
			}
		}
	}
}