# generate 10 random integer values
from random import seed
from random import randint
# seed random number generator
seed(1)
# generate and print 10 integers
for _ in range(10):
	value = randint(0, 10)
	print(value)
