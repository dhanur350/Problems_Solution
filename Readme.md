## LeetCode , HackerRank and other coding porblems solutions practice repository

- Just a reminder that all headerfiles are included automatically by these all coding problems websites.

## Notes

- The statement: `scanf("%[^\n]%*c", s);` will not work because the last statement will read a newline character, \n, from the previous line. This can be handled in a variety of ways.
- One way is to use `scanf("\n");` before the last statement.

## Spiral Matrix Algorithm

while (startRow <= endRow && startColumn <= endColumn)
{ // 1st Spiral
for (int i = startColumn; i <= endColumn; i++)
{ ans.push_back(matrix[startRow][i]); count++;}
startRow++;
// 2nd Spiral
for (int i = startRow; i <= endRow; i++)
{ ans.push_back(matrix[i][endcolumn]); }
endColumn--;
// 3rd Spiral
for (int i = endColumn; i >= startColumn; i--)
{ ans.push_back(matrix[endRow][i]); }
endRow--;
// 4th Spiral
for (int i = endRow; i >= startRow; i--)
{ ans.push_back(matrix[i][startcolumn]); }
startColumn++;
}
