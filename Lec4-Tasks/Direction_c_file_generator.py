no_bits = int(input("Enter number of bits: "))

this_list = []

for i in range(0,no_bits):
    bit = input(f"Enter bit{i} mode: ")
    if bit == 'out':
        this_list.append(1)
    elif bit == 'in':
        this_list.append(0)

    else:
        print("Wrong input")

this_list.reverse()
this_list.insert(0,'0b')

this_list = map(str, this_list)
port_val = ''.join(this_list)

fun = f'void Init_void (void)\n{{\nDDRA = {port_val}\n}}'

with open("Direction.c",'a') as new:
    new.write(fun)


