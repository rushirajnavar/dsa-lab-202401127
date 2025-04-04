class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &b)
    {
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (b[i][j] == '.')
                    continue; // Skip empty cells

                char curr = b[i][j];
                int boxIndex = (i / 3) * 3 + (j / 3);

                if (rows[i].count(curr) || cols[j].count(curr) || boxes[boxIndex].count(curr))
                {
                    return false; // Found duplicate
                }

                rows[i].insert(curr);
                cols[j].insert(curr);
                boxes[boxIndex].insert(curr);
            }
        }
        return true; // Sudoku is valid
    }
};