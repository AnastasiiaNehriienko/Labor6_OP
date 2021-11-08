import math

def factorial(num):
    factor = 1
    for k in range (1, num+1):
        factor*=k
        k+=1
    return factor
def cos_x(x, differ):
	i = 2
	k = -1
	previous = 1
	current = k * pow(x, i) / factorial(i)
	cos_x = 1
	while previous-math.fabs(current)>=dif or previous - math.fabs(current)<=0:
		cos_x += current
		previous = math.fabs(current)
		i += 2
		k *= -1
		current = k * pow(x, i)/ factorial(i)
	return cos_x
def answer(m, n, differ):
	y = cos_x(m, differ) + cos_x(n, differ) * cos_x(n, differ) + cos_x((m + n), differ)
	return y
a=float(input("Enter a: "))
b=float(input("Enter b: "))
dif=float(input("Enter accuracy: "))
y=answer(a, b, dif)
print("y=", y)