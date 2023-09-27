#include "funWithComplexity.h"

//=============================================================================
// Exercise 4: Analyzing a river
//=============================================================================
// TODO
int FunWithComplexity::river(const vector<int> &v, int k, int t) {
    int ans = 0;
    for (int i = 0; i <= v.size() - k; i++) {
        int count = 0;
        for (int j = i; j < i + k; j++)
            if (v[j] >= t) count++;
        if ((k % 2 == 0 && count >= k / 2) || (k % 2 != 0 && count >= k / 2 + 1)) ans++;
    }
    return ans;
}



//=============================================================================
// Exercise 5: Spiral of Numbers
//=============================================================================
// TODO
pair<int, int> FunWithComplexity::spiral(int n) {
    pair<int, int> ans = {0, 0};

    if (n == 1) {
        return {0, 0}; // Caso especial para o número 1
    }

    int layer = 0;
    int sideLength = 1;
    int maxValueInLayer = 1;

    while (maxValueInLayer < n) {
        layer++;
        sideLength += 2;
        maxValueInLayer = sideLength * sideLength;
    }

    int diff = maxValueInLayer - n;
    int halfSide = sideLength / 2;

    int x, y;

    if (diff < sideLength - 1) {
        x = halfSide;
        y = halfSide - diff;
    } else if (diff < 2 * (sideLength - 1)) {
        x = halfSide - (diff - (sideLength - 1));
        y = -halfSide;
    } else if (diff < 3 * (sideLength - 1)) {
        x = -halfSide;
        y = -halfSide + (diff - 2 * (sideLength - 1));
    } else {
        x = halfSide;
        y = -halfSide + (diff - 3 * (sideLength - 1));
    }
    ans = {x, y};

    return ans;
}


//=============================================================================
// Exercise 7: Squared notebook
//=============================================================================
// TODO
long long FunWithComplexity::gridSum(int a, int b) {
    return 0;
}