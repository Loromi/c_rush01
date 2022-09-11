# C Piscine

## Rush 01

### Instructions

Moulinette compiles with the following flags: `-Wall -Wextra -Werror;` and uses `gcc`.

### C Piscine Rush 01

**subject**
Exercise 00
Rush-01
Turn-in directory : `ex00/`
Files to turn in : All necessary files
Allowed functions : `write`, `malloc`, `free`
Your source code will be compiled as follows: 

```bash
gcc -Wall -Wextra -Werror -o rush-01 *.c
```

Your submission directory must have all files required to compile your program.
Create a program that solves the following problem:
Given a map of 4x4, place boxes of height 1 to 4 on each available square in a way
that every row and column sees the correct number of boxes from each the possible points of view (left/right for rows, up/down for columns).
Ex: The box of height `3` will hide the box of height `1` from the left, so we have `3`
visible boxes, and only one from the right, because the box of height 4 is hiding
everything.
Each of the views (2 per row and 2 per column) will have a given value. Your program must place the boxes correctly, while making sure each row and column only has one box of each size.
Your output will contain the first solution you encounter
Here’s how we’ll launch your program :

```bash
> ./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left
row3left row4left row1right row2right row3right row4right"
```

• (cf. annex 1)
• "col1up" is the value for the left column upper point of view. Each of these represent
a characters string of values ranged between ’1’ and ’4’.
• This is the ONLY acceptable input for your program. Any other input must be
considered an error.
• Here’s an example of intended input/output for a valid set.
```bash
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$
```

• (cf. annex 2 and 3)
• In case of error or if you can’t find any solutions, display "Error" followed by a line
break.
• If you want bonus points, you may try to handle other map size (up to 9x9 !!!!).
• As usual if a bonus works, but the mandtory one fails the tests, you’ll get 0.
6
Chapter IV
Annexe
What follows is an artistic view of your program. Obviously, you need to turn in a
program as described in the previous chapter.
These representations’ only goal is to help you understand the project.

#### Annex 1:
• Representation of your program using col_up, col_down, row_left and row_right
#### Annex 2:
• By replacing col* et row*, we get this.

#### Annex 3:
• Your program must fill in the blanks inside using the rules given in the first part.

### Idea

#### 4 \* 4 square \* 4 Values

- Array of 4 possible Values for each cell.
- check against view and sudoku rules to filter Array.
<cite>\- [Stack overflow](https://stackoverflow.com/a/70043744/19639966)</cite>

- Check that every Cells Array of Values has only one non-NULL value left and print all Cells' Arrays' first index. ( `arr[0]`  )
- When theres only one value that isnt NULL left store this value to 'square' array.
```c
if ([row][col][1] == < '\0' | 0 >)
    square[row][col] = [row][col][0];
```
- If unreachable => unsolvable
```c
if (square[row][col] == < '\0' | 0 >)
    // return Err: unsolvable
```

#### `ft_print_comb` algorhitm ??

### Matrix

| [row][col] | [row][col] | [row][col] | [row][col] |
|------------|------------|------------|------------|
| 0, 0       | 0, 1       | 0, 2       | 0, 3       |
| 1, 0       | 1, 1       | 1, 2       | 1, 3       |
| 2, 0       | 2, 1       | 2, 2       | 2, 3       |
| 3, 0       | 3, 1       | 3, 2       | 3, 3       |

### Rules

#### `view == 1`

```ts
/*
 @param axis:   row, col represented by 1, 0
 @param X:      1 - 4 represented by 1 - 4
 @param pos:    (left, right) or (up, down) rep. by (1, 0)     
 */

axisXpos == 1 => {
    (axis == 1) ? {
        row = X;
        (pos == 1) ? col = 0 : col = 3;
    } : {
        col = X;
        (pos == 1) ? row = 0 : row = 3;
    }
        // replace ternary w/ if/else
}
```

```ts
rowXpos == 1 => {
    row = X;
    (pos == left) ? col = 0 : col = 3; // replace ternary w/ if/else
}

colXpos == 1 => {
    col = X;
    (pos == up) ? row = 0 : row = 3; // replace ternary w/ if/else
}
```

```ts
rowXleft == 1 => {
    row = X;
    col = 0;
}

rowXright == 1 => {
    row = X;
    col = 3;
}

colXup == 1 => {
    row = 0;
    col = X;
}

colXdown == 1 => {
    row = 3;
    col = X;
}
```

#### If `(view == 1)` -> cell = `4`

#### If `2x3` & all `4` set => remaining cell = 3

#### If `(view == 2)` ->

### Resources

[sudowiki](sudokuwiki.org/Brute_Force_vs_Logical_Strategies)

[Brute-Force Sudoku Solver - YT Tutorial Python](https://www.youtube.com/watch?v=y1ahOBeyM40)
