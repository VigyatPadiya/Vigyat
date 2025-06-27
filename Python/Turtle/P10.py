import turtle

t=turtle.Pen()

def mycircle(red,green,blue):
    t.reset()
    t.color(red,green,blue)
    t.begin_fill()
    t.circle(100)
    t.end_fill()

def mysquare(size):
    for i in range(1,5):
        t.forward(size)
        t.left(90)