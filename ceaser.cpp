#include <stdio.h>
#include <ctype.h> 
int main() {
char text[500], ch; int key;
// encryption
printf("Enter a message to encrypt: "); scanf("%s", text);
printf("Enter the key: "); scanf("%d", &key);
for (int i = 0; text[i] != '\0'; ++i) { ch = text[i];
if (isalnum(ch)	{
if (islower(ch))	{
ch = (ch - 'a' + key) % 26 + 'a';
}
if (isupper(ch))	{
ch = (ch - 'A' + key) % 26 + 'A';
}
if (isdigit(ch))	{
ch = (ch - '0' + key) % 10 + '0';
}
}
else	{
printf("Invalid Message");
}
text[i] = ch;
}
printf("Encrypted message: %s\n", text);

// decryption
for (int i = 0; text[i] != '\0'; ++i) { ch = text[i];
if (isalnum(ch)) {

if (islower(ch))
ch = (ch - 'a'	{
- key
+ 26)
% 26
+ 'a';
}
if (isupper(ch))	{
ch = (ch - 'A'	- key	+ 26)	% 26	+ 'A';
}

if (isdigit(ch)) {
ch = (ch - '0' - key + 10) % 10 + '0';
}
}
else {
printf("Invalid Message");
}
text[i] = ch;
}
printf("Decrypted message: %s\n", text); return 0;
}
