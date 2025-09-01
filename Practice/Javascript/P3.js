const student = {
    name:"Vigyat",
    course:"BCA",
    sem:5,
    sub1:85,
    sub2:98,
    sub3:77,
    sub4:86,
}
let total=student.sub1+student.sub2+student.sub3+student.sub4;
let per=total/4;
console.log(student);
console.log(total);
console.log(per);

if (per<100 & per>80){
    console.log("A")
}else if (per<79 & per>60){
    console.log("B")
}else if (per<59 & per>50){
    console.log("C")
}else if (per<49 & per>40){
    console.log("D")
}else{
    console.log("F")
}