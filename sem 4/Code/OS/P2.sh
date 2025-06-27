echo "Enter Name:"
read name
echo "Enter Roll.No:"
read rollno
echo "Enter Marks:"
read sub1, sub2 ,sub3
total=$((sub1+sub2+sub3))
per=$((total/3))

echo "Name : $name"
echo "Roll.No: $rollno"
echo "Total Marks: $total"
echo "Percentage: $per"