#include <stdio.h>

// Function to simulate balloon deflation
void deflateBalloons(int air[], int n) {
    while (1) {
        int count = 0;
        int minAir = 1001; // Any value greater than the maximum air level (1000)
        
        // Count non-zero balloons and find the minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                count++;
                if (air[i] < minAir) {
                    minAir = air[i];
                }
            }
        }

        // If no balloons have air left, stop the process
        if (count == 0) {
            break;
        }

        // Print the count of balloons with air at the start of the round
        printf("%d\n", count);

        // Deflate each balloon by the minimum air level
        for (int i = 0; i < n; i++) {
            if (air[i] > 0) {
                air[i] -= minAir;
            }
        }
    }
}

int main() {
    int n;
    // Read number of balloons
    scanf("%d", &n);
    int air[1000];

    // Read air level in each balloon
    for (int i = 0; i < n; i++) {
        scanf("%d", &air[i]);
    }

    // Call the deflateBalloons function
    deflateBalloons(air, n);

    return 0;
}