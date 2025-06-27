#20
a<-c(1:9)
b<-c(9:1)
barplot(a,names.arg = b)

#21
barplot(a,names.arg = b,col = "red",border = "blue",main = "Bar Chart",xlab = "Values",ylab="Elements")

#22
plot(a,type = "l",col="blue",main="Line Diagram")

#23
x <- 1:10
y1 <- x
y2 <- x^2
y3 <- x^0.5

plot(x, y1, type="l", col="red", ylim=c(0,100), main="Multiple Lines")
lines(x, y2, col="blue", lty=2)
lines(x, y3, col="green", lty=3)
legend("topleft", legend=c("y", "y^2", "sqrt(y)"), col=c("red", "blue", "green"), lty=1:3)

#25
x <- rnorm(50)
y <- rnorm(50)
plot(x, y, main="Scatter Plot", col="blue", pch=1)

#26
par(mfrow=c(1,3))
plot(x, y, main="Style 1", col="red", pch=10)
plot(x, y, main="Style 2", col="blue", pch=4)
plot(x, y, main="Style 3", col="green", pch=8)

#27
val <- c(20, 30, 50)
lbl <- c("A", "B", "C")
pie(val, labels = lbl)

#28
par(mfrow=c(2,3))
pie(val, labels = lbl, col=c("red", "blue", "green"), main="Style 1")
pie(val, labels = lbl, clockwise=TRUE, main="Style 2")
pie(val, labels = lbl, radius=0.8, main="Style 3")
pie(val, labels = lbl, init.angle=90, main="Style 4")
pie(val, labels = paste(lbl, val, "%"), main="Style 5")
