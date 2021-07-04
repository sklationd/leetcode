/**
 * @param {string} digits
 * @return {string[]}
 */
var letterCombinations = function(digits) {
    var keyPad = [ "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" ];
    var seq = string2IntArr( digits );
    return getCombination( keyPad, seq );
};

var string2IntArr = function( digits ) {
    var result = [];    
    for( var i = 0; i < digits.length; i++ ) {
        result[ i ] = Number( digits[ i ] );
    }
    return result;
}

var getCombination = function( pad, seq ) {
    if( seq.length === 0 ) {
        return [];
    }
    
    var result = [];
    var queue = [];
    for( var i = 0; i < pad[ seq[ 0 ] ].length; i++ ) {
        queue.push( pad[ seq[ 0 ] ][ i ] );
    }
    while( queue.length !== 0 ) {
        var temp = queue.pop();
        if( temp.length === seq.length ) {
            result.push( temp );
        } else {
            var next = pad[ seq[ temp.length ] ];
            for( var i = 0; i < next.length; i++ ) {
                queue.push( temp.concat( next[ i ] ));
            }
        }
    }
    return result;
}