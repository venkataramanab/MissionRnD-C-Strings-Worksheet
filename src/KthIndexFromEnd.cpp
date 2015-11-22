/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
#define NULL '\0'
char KthIndexFromEnd(char *str, int K) {
	if ((str == NULL)||(K<0)||(*str==NULL)){
		return NULL;
	}
	else{
		int len=0;
		while (str[len]!=NULL){
			len++;
		}
		if (K>len){
			return '\0';
		}
		else if(K==0){
			return str[len - 1];
		}
		else if (K==(len-1))
		{
			return str[0];
		}
		else{
			return str[len - K - 1];
		}
	}
}