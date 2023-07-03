#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){
	char newWord[51], oldWord[51], firstletter= '\n', buffer;
	int moreWords, alit= 0;
	while (scanf("%s", newWord) == 1){
        for(int i= 0; i<strlen(newWord); i++) newWord[i]= tolower(newWord[i]);

		if(newWord[0] == oldWord[0]){
			if(newWord[0] != firstletter){
				firstletter= newWord[0];
				alit++;
			}
		}else firstletter= '\n';

		strcpy(oldWord, newWord);
		moreWords= scanf("%c", &buffer);
		if(buffer == '\n' || moreWords != 1){
			printf("%d\n", alit);
			alit= 0;
		}
	}
}