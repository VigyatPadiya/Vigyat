let student=[250,645,300,900,50]
// for (i=0;i<student.length;i++){
//     console.log(student[i]);
// }
let sum = 0;
for (let val of student){
    
    let offer=val*10/100;
    val-=offer;
    console.log(val)
    sum+=val;
}
console.log(sum);
console.log(student.toString())