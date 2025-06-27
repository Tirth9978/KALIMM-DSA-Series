# Wrong examples (in C++, not valid in Python either):
# ch = "T"         # This is a string, not a character
# name = "Tirth"   # Again, a string
# name = 'Tirth'   # Still a string, not a single character

# Right
ch = 'A'  # single character

# Get ASCII value of character
ascii_value = ord(ch)

print(ch)  # Output: A

ascii_value = ascii_value + 32  # Convert to lowercase by adding 32

ch = chr(ascii_value)  # Convert back to character

print(ch)  # Output: a
