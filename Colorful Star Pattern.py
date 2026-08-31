import turtle
import colorsys

t = turtle.Turtle()
screen = turtle.Screen()
screen.bgcolor('black')
t.speed(0)

for i in range(150):
    c = colorsys.hsv_to_rgb(i/150, 1, 1)
    t.color(c)
    t.forward(i*2)
    t.right(144)
    
turtle.done()