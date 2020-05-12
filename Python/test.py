def testing(num):
	if(num>50):
		return (num-2)
	return testing(testing(num+10))

number=int(input("Enter the number:"))
print(testing(number))