#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Arrays to store x and y coordinates
    int x[n], y[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    // Variables to count unique x and y values
    int countX = 0, countY = 0;

    // Counting unique x and y values
    for (int i = 0; i < n; i++) {
        int uniqueX = 1, uniqueY = 1;

        // Check if x[i] is already counted
        for (int j = 0; j < i; j++) {
            if (x[i] == x[j]) {
                uniqueX = 0;
            }
            if (y[i] == y[j]) {
                uniqueY = 0;
            }
        }
        
        if (uniqueX) countX++;
        if (uniqueY) countY++;
    }

    printf("%d\n", countX < countY ? countX : countY); // Print the smaller of the two counts
    return 0;
}
