#!/usr/bin/env python

from os import close

aim = 0
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
            depth = depth+(aim*value)
        elif action == "down":
            aim = aim+value
        elif action == "up":
            aim = aim-value
        else:
            print("error action !!")
    
f.close()

print("Position : ", horizontalPosition)
print("Depth : ", depth)
print("Result = ", horizontalPosition*depth)