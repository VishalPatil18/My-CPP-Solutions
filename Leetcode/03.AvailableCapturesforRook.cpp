/***
    On an 8 x 8 chessboard, there is one white rook. There also may be empty squares, white bishops, and black
    pawns. These are given as chara cters 'R', '.', 'B', and 'p' respectively. Uppercase characters represent
    white pieces, and lowercase characters represent black pieces.
    The rook moves as in the rules of Chess: it chooses one of four cardinal directions (north, east, west
    and south), then moves in that direction until it chooses to stop, reaches the edge of the board, or
    captures an opposite colored pawn by moving to the same square it occupies.  Also, rooks cannot move 
    into the same square as other friendly bishops.
    Return the number of pawns the rook can capture in one move.
***/

class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x0 = 0, y0 = 0, res = 0;
        for (int i = 0; i < 8; ++i)
            for (int j = 0; j < 8; ++j)
                if (board[i][j] == 'R') {
                    x0 = i;
                    y0 = j;
                }
        vector<vector<int>> arr = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for (vector<int> d : arr) {
            for (int x = x0 + d[0], y = y0 + d[1]; 0 <= x && x < 8 && 0 <= y && y < 8;
                 x += d[0], y += d[1]) {
                if (board[x][y] == 'p') res++;
                if (board[x][y] != '.') break;
            }
        }
        return res;  
    }
};

/*** 2nd Solution ***/

int cap(vector<vector<char>>& b, int x, int y, int dx, int dy) {
    while (x >= 0 && x < b.size() && y >= 0 && y < b[x].size() && b[x][y] != 'B') {
        if (b[x][y] == 'p') return 1;
        x += dx; y += dy;
    }
    return 0;
}

int numRookCaptures(vector<vector<char>>& b) {
    for (auto i = 0; i < b.size(); ++i)
        for (auto j = 0; j < b[i].size(); ++j)
            if (b[i][j] == 'R') return cap(b,i,j,0,1)+cap(b,i,j,0,-1)+cap(b,i,j,1,0)+cap(b,i,j,-1,0);
    return 0;
}