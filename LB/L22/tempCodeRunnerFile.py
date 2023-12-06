file = open("data.txt", "r")
count = 0
data = file.read()

list = data.split("\n")

for i in list:
    if i:
        count += 1
print("This is the number of lines in the file ", count)