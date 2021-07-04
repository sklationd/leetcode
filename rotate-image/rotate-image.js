/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
    var n = matrix.length;
    for( var r = 0; r < Math.floor( n / 2 ); r++ ) {
        for( var c = 0; c < Math.floor( ( n + 1 ) / 2 ); c++ ) {
            var startPos = {
                "r" : r,
                "c" : c
            }

            var nextPos = findNewPos(startPos, n );
            while( nextPos.r !== startPos.r || nextPos.c !== startPos.c ) {
                swapPos( matrix, startPos, nextPos );
                nextPos = findNewPos( nextPos, n );
            }
        }
    }
};

var findNewPos = function( pos, n ) {
    return {
        "r": pos.c,
        "c": n - pos.r - 1
    };
}

var swapPos = function( matrix, startPos, nextPos ) {
    var temp = matrix[ startPos.r ][ startPos.c ];
    matrix[ startPos.r ][startPos.c ] = matrix[ nextPos.r ][ nextPos.c ];
    matrix[ nextPos.r ][ nextPos.c ] = temp;
}
