my_string=input("Enter your string:")
word_Search=input("Enter a substing to be searched in the given string:")
if (my_string.find(word_Search)>=0):
    index=my_string.find(word_Search)
    print("Substring found at index: {}".format(index))
else:
    print("Substring is not found !!")
