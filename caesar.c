#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(int argc, string argv[])
{
	// Validating Command Line Arguments
    if (argc != 2)
    {
        printf("Usage: ./div key\n");
        return 1;
    }
    char lowercase[26], uppercase[26];
    int lowerascii = 97, upperascii = 65;
    // For Lowercase Characters
    for (int i = 0;i < 26;i++)
    {
        lowercase[i] = lowerascii;
        lowerascii++;
	}
	// For Uppercase Characters
    for (int i = 0;i < 26;i++)
    {
        uppercase[i] = upperascii;
        upperascii++;
    }
    int k = atoi(argv[1]);
    string plaintext;
    int temporary;
    // Getting Plaintext from the User
    plaintext = GetString();
    // Encrypting the plaintext
    for (int i = 0, n = strlen(plaintext); i < n; i++)
    {
    	// If the character is  in Lowercase
        if (islower(plaintext[i]))
        {
            for (int j = 0; j < 26; j++)
            {	
                if (lowercase[j] == plaintext[i])
                {
                    temporary = (char) ((j + k) % 26);
                    plaintext[i] = lowercase[temporary];
                    break;
                }
            }
        }
        // If the character is  in Uppercase
        else if (isupper(plaintext[i]))
        {
            for (int j = 0; j < 26; j++)
            {	
                if (uppercase[j] == plaintext[i])
                {
                    temporary = (char) ((j + k) % 26);
                    plaintext[i] = uppercase[temporary];
                    break;
                }
            }
        }
    }
    // Printing the Ciphertext
    printf("%s\n",plaintext);
}
