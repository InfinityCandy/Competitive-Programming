text = input()
letter = input()

text = text.replace(" ", "")
letter = letter.replace(" ", "")

newText = []

for i in range(len(text)):
	newText.append(text[i])

out = "NO"

for i in range(len(letter)):
	its = "NO"

	for x in range(len(newText)):
		if(letter[i] == newText[x]):
			newText[x] = "0"
			its = "YES"
			break

		if(x == (len(newText) - 1) and its == "NO"):
			out = "YES"
			break

	if(out == "YES"):
		print("NO")
		break

if(out == "NO"):
	print("YES")