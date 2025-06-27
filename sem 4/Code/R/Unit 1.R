# (1) Demonstrating inbuilt functions
help()
print(c(1, 2, 3))
print(ls())
rm(list = ls())
print(sqrt(25))
print(seq(1, 10, 2))
print(min(10, 20, 5))
print(max(10, 20, 5))
assign("x", 100)
print(x)

# (2) User input and R version
name <- readline("Enter name: ")
age <- as.integer(readline("Enter age: "))
print(paste("Name:", name))
print(paste("Age:", age))
print(R.version.string)

# (3) Prime check
n <- as.integer(readline("Enter number: "))
is_prime <- function(n) {
  if (n < 2) return(FALSE)
  for (i in 2:sqrt(n)) if (n %% i == 0) return(FALSE)
  return(TRUE)
}
print(ifelse(is_prime(n), "Prime", "Not Prime"))

# (4) Multiplication table
num <- as.integer(readline("Enter number: "))
print(num * 1:10)

# (5) Calculator
print(10 + 5)
print(20 - 7)
print(5 * 6)
print(40 / 8)
print(2^3)
