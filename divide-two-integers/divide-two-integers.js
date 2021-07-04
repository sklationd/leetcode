/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function(dividend, divisor) {
    var carry = dividend*divisor < 0 && dividend % divisor !== 0 ? 1 : 0;
    var result = Math.floor( dividend / divisor ) + carry;
    if( result > 2**31 - 1 || result < -(2**31) ) {
        return 2**31 - 1;
    } else {
        return result;
    }
};
