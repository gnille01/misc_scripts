"""Loop through m times.
In each iteration:
    If the current index is less than rem, print div + 1 stars.
    Otherwise, print div stars."""
n = int(input()) # Classrooms
m = int(input()) # COntestants
div = int(m/n)
#print(div)
rem = m%n
#print(rem)

x = 0
while x < n:
    if x < rem:
        print("*"*(div+1))
    else:
        print("*"*div)
    x = x + 1

