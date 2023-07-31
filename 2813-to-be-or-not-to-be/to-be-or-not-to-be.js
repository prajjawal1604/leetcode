/**
 * @param {string} val
 * @return {Object}
 */
var expect = (val) => ({
    toBe: val2 => {
        if(val2 !== val) throw "Not Equal";
        return true;
    },
    notToBe: val2 => {
        if(val2 === val) throw "Equal";
        return true;
    }
});

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */