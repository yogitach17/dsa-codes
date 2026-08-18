class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result;              // ✅ You derived this

        for (int i = 0; i < numRows; i++) {      // ✅ You got i=0

            vector<int> row(i + 1);              // We derived i+1

            row[0] = 1;                          // ✅ You got this
            row[i] = 1;                          // You derived size-1 → i

            for (int j = 1; j < i; j++) {        // We derived this
                row[j] = result[i-1][j-1] + result[i-1][j];
            }

            result.push_back(row);               // Last missing line
        }

        return result;
    }
};