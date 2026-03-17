#include <stdio.h>
#include <string.h>

char mapping[10][5] = {
    "", "", "abc", "def", "ghi",
    "jkl", "mno", "pqrs", "tuv", "wxyz"
};

void solve(char *digits, char *output, int index, int len) {
    
    // Base case
    if (index == len) {
        output[index] = '\0';
        printf("%s\n", output);
        return;
    }

    int number = digits[index] - '0';
    char *value = mapping[number];

    for (int i = 0; i < strlen(value); i++) {
        output[index] = value[i];
        solve(digits, output, index + 1, len);
    }
}

int main() {
    char digits[100];
    
    printf("Enter digits: ");
    scanf("%s", digits);

    int len = strlen(digits);

    if (len == 0) {
        return 0;
    }

    char output[100];
    solve(digits, output, 0, len);

    return 0;
}