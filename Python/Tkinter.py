from tkinter import *


def hello():
    print("Hello World!!")

tk = Tk()
btn = Button(tk, text="click me",command=hello)
btn.pack()