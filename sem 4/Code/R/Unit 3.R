{
  # (12) Create a 3×3 matrix and perform basic operations
  mat1 <- matrix(1:9, nrow=3, ncol=3)
  mat2 <- matrix(9:1, nrow=3, ncol=3)
  
  mat_add <- mat1 + mat2
  mat_sub <- mat1 - mat2
  mat_mul <- mat1 * mat2
  mat_div <- mat1 / mat2
  
  print("Matrix Addition:")
  print(mat_add)
  
  print("Matrix Subtraction:")
  print(mat_sub)
  
  print("Matrix Multiplication:")
  print(mat_mul)
  
  print("Matrix Division:")
  print(mat_div)
}
{
  # (13) Print even numbers from 10 to 30 using all loops
  print("Even numbers using for loop:")
  for(i in seq(10, 30, by=2)) {
    print(i)
  }
  
  print("Even numbers using while loop:")
  i <- 10
  while(i <= 30) {
    print(i)
    i <- i + 2
  }
  
  print("Even numbers using repeat loop:")
  i <- 10
  repeat {
    print(i)
    i <- i + 2
    if(i > 30) break
  }
}
{
  # (14) Print student result using decision-making statements
  check_result <- function(marks) {
    if(marks > 70) {
      return("Distinction")
    } else if(marks > 60) {
      return("First")
    } else if(marks > 40) {
      return("Pass")
    } else {
      return("Fail")
    }
  }
  
  marks <- as.numeric(readline("Enter marks: "))  # User input
  result <- check_result(marks)
  print(paste("Result:", result))
}

{
  # (15) Create data frame “student” and perform operations
  student <- data.frame(
    stud_id = c(101, 102, 103),
    stud_name = c("Rahul", "Priya", "Amit"),
    email_id = c("rahul@gmail.com", "priya@yahoo.com", "amit@hotmail.com"),
    mobile_no = c("9876543210", "8765432109", "7654321098")
  )
  
  print("Student Data Frame:")
  print(student)
  
  print("Summary of Data Frame:")
  print(summary(student))
  
  print("Structure of Data Frame:")
  print(str(student))
  
  print("Extracted Data (stud_name and mobile_no):")
  print(student[, c("stud_name", "mobile_no")])
}