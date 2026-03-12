#include <string.h>

int minimumTimeToInitialState(char* word, int k) {
    int n = strlen(word);

    for (int t = 1; ; t++) {
        int removed = t * k;

        if (removed >= n)
            return t;

        int match = 1;

        for (int i = removed; i < n; i++) {
            if (word[i] != word[i - removed]) {
                match = 0;
                break;
            }
        }

        if (match)
            return t;
    }
}
