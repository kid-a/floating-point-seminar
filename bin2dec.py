import math

def bin2dec(x):
    result = 0
    [int_part, decimal_part] = x.split('.')
    
    ## compute the integer part, first
    i = 0
    for digit in reversed(int_part):
        if digit == '1': result = result + math.pow(2, i)
        i = i + 1

    i = 1
    for digit in decimal_part:
        if digit == '1': result = result + math.pow(2, -i)
        i = i + 1
        
    return result
                                                  

        
        
