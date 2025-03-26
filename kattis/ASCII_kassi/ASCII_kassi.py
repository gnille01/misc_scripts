# ASCII kassi

"""
Draw a square using 
    |, -, +
left and right sides are |, top and bottom are -
corners are +
"""

n = int(input())

def draw_square(n):
    top_bottom = '-' * n
    print('+' + top_bottom + '+')
    # print vertical
    if n > 0:
        for i in range(0,n):
            print('|' + ' ' * n + '|')    
    print('+' + top_bottom + '+')

draw_square(n)

