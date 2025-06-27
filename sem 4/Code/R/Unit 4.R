#16
{
emp1 <- data.frame(
  id = 1:3,
  name = c("John", "Alex", "Sara"),
  salary = c(50000, 60000, 55000)
)

emp2 <- data.frame(
  id = 4:5,
  name = c("David", "Lara"),
  salary = c(65000, 70000)
)

emp_all <- rbind(emp1, emp2)
print(emp_all)
}


#17
install.packages("writexl")
library(writexl)
write_xlsx(emp_all,"Employee.xlsx")

#18
A<-c(1:10)
data<-read.csv("data.csv")
print(data)
#19
data<-write.csv(A,"data.csv")
