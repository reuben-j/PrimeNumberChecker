def primeChecker(num):
	if num <= 1:
		return False
	for i in range(2, num-1):
		if num % i == 0:
			return False
	return True

#num = int(input("What number would you like to check? "))
num = 7

if primeChecker(num) != True:
    print(str(num) + " is not prime :(")
else:
    print(str(num) + " is prime!")
    
print("nice") 
 