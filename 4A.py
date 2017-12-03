weight = input()

i = 2
x = 2
itspos = "NO"

while(i <= 100):
	while(x <= 100):
		if((i + x) == int(weight)):
			print("YES")
			itspos = "YES"
			break;

		if((i + x) > int(weight)):
			break;

		x = x + 2

	i = i + 2

if(itspos == "NO"):
	print("NO")