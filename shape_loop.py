from turtle import *
import math
turtle= Turtle()

answer = eval(input("How many sides?"))

clear()

for i in range(answer):
        turtle.forward(50)
        turtle.right(360/answer)
exitonclick()
