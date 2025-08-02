#data types are actually class & values are instance of the class
a = 10 # this a refers to an object (containg 10)
print(type(a))
b = 0x20
c = 0b11
d = 0o77

f = str(a)
g = "4444444444"
h = int(g)

e = 5.3e4

comple = 3+4j
print(isinstance(comple, complex))
print(h,f,a,b,c,d,e,complex, complex.real, complex.imag)

#boolean
print(0==0)
print(0==1)

#none initially if we dont want to put value
num = None
print(num)
