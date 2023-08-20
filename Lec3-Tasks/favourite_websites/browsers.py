import firelink


if firelink.x in firelink.links:
    firelink.firefox(firelink.x)
    
else:
    print("You chose the wrong site name, please try again!")
