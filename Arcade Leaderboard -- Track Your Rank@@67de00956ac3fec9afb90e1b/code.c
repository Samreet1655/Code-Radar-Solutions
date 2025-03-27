#include <stdio.h>

// Function to find ranks efficiently
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    // Step 1: Remove duplicate scores to create a unique ranked list
    int uniqueRanked[200000], uniqueSize = 0;
    uniqueRanked[uniqueSize++] = ranked[0];

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanked[uniqueSize++] = ranked[i];
        }
    }

    // Step 2: Traverse player scores from lowest to highest using two-pointer approach
    int index = uniqueSize - 1; // Start from the last ranked position
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= uniqueRanked[index]) {
            index--; // Move up the leaderboard
        }
        result[i] = index + 2; // Rank is 1-based
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }

    scanf("%d", &m);
    int player[200000];

    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }

    int result[200000];
    trackPlayerRanks(ranked, n, player, m, result);

    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}