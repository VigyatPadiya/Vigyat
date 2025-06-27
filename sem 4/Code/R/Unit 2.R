#8
x<-10
x=11
assign("x",1:10)

#9
letters[1:10]
LETTERS[17:26]
LETTERS[22:24]

#10
vec <- 1:8
arr <- array(vec, dim = c(2,2,2), dimnames = list(c("A1", "A2"), c("B1", "B2"), c("C1", "C2")))
print(arr)

#11
n<-c(1:8)
matrix(n,nrow = 4,ncol=4)
matrix(n,nrow=3,ncol=3)
matrix(n,nrow=2,ncol=2)