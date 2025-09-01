// let marks =[98,89,93,78,34,88]
// let topper= marks.filter((val)=>{
//     return val>90;
// });
// console.log(topper)

let n = prompt("Enter a Number :");
let arr=[];
for (let i=1;i<=n;i++)
{
    arr[i-1]=i;
}
console.log(arr)

const sum=arr.reduce((res,curr)=>{
    return res+curr;
});
console.log(sum);

const product=arr.reduce((res,curr)=>{
    return res*curr;
});
console.log(product);
