/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let accum=[init];
    let ans=[];
    
    if(nums.length === 0) return init

    ans.push(fn(init,nums[0]))
    for(let i=1;i<nums.length; ++i)
        ans.push(fn(ans[i-1],nums[i]));

    console.log(ans);
    return ans[ans.length-1];
};

