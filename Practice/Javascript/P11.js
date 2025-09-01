let arr=[1,2,3,4,5,6,60];

// arr.forEach(function myArray(val)
// {
//     console.log(val*val);
// });


// let a1 = arr.map((val) =>{
//     return val*val;
// });
// console.log(a1);

// let evenArray = arr.filter((val) =>
// {
//     return val%2===0;
// });
// console.log(evenArray);

// const output = arr.reduce((res,curr)=>{
//     return res+curr;
// });
// console.log(output);

const output = arr.reduce((res,curr)=>{
    return res>curr?res:curr;
})
console.log(output);