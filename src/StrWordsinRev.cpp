/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void reverse(char*,int, int);
void str_words_in_rev(char *input, int len){
	int start = 0,w_count=0;
	for (int i = 0; i <= len; i++){
		if (input[i] == ' '){
			w_count++;
			reverse(input, start,i-1);
			start = i + 1;
		}
		else if ((input[i] == '\0')&&(w_count>0)){
			reverse(input, start, len - 1);
		}
	}
	if (w_count > 0){
		reverse(input, 0, len - 1);
	}
}
void reverse(char *in,int first, int last){
	while (first < last){
		in[first] = in[first] + in[last];
		in[last] = in[first] - in[last];
		in[first] = in[first] - in[last];
		first++;
		last--;
	}
}
