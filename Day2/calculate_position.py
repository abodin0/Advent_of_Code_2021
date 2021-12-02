#!/usr/bin/env python

from os import close

horizontalPosition = 0
depth = 0

with open('input.txt') as f:
    lines = f.readlines()

    for line in lines:
        split = line.split()

        action = split[0]
        value = split[1]

        print(action, value)

        value = int(value)

        if action == "forward":
            horizontalPosition = horizontalPosition+value
        elif action == "down":
            depth = depth+value
        elif action == "up":
            depth = depth-value
        else:
            print("error action !!")
    
f.close()

print("Position : ", horizontalPosition)
print("Depth : ", depth)
print("Result = ", horizontalPosition*depth)