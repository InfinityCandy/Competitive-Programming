aAndb = input().split(" ")

count = 0

aAndb[0] = int(aAndb[0])
aAndb[1] = int(aAndb[1])

while(True):
    count = count + 1
    aAndb[0] = aAndb[0] * 3
    aAndb[1] = aAndb[1] * 2
    
    if(aAndb[0] > aAndb[1]):
        break

print(count)