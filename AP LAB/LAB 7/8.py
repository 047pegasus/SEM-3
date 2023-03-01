def translate():
    vowel=['a','e','i','o','u']
    final_string=''
    inp_string=input("Enter a string to be translated:")
    for i in inp_string:
        if i not in vowel:
            final_string+= (i + 'o' + i)
        else:
            final_string+= i
    print(final_string)
