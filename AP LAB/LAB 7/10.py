def is_palindrome():
    inp_str=input("Enter a string to be checked for palindrome:")
    rev_str=inp_str[::-1]
    if (inp_str==rev_str):
        print("Given string is palindrome!")
        return True
    else:
        print("Given string is not a palindrome!")    
        return False
