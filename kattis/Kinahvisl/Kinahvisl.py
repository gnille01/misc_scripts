## Bartosz and friends
# N people

word = input() # tommi #5
end_word = input() # dommi #5
num = 0
count = 0
while num != len(word):
    if word[num] != end_word[num]:
        count = count + 1
    num = num + 1
    #print(num)

print(count+1)