#A Python code that lets you take string input and displays number of times a particular letter is present in it.

def find(k):
	result1=0
	for h in range(0,len(a_string)):
		if(a_string[h]==k):
			result1+=1
	return result1


a_string=input("Enter the string: g")
print("Length of the string: ",len(a_string))
for i in range(0,len(a_string)):
	k=a_string[i]
	result=find(k)
	print("Substring for ", k ,"is :", result)
