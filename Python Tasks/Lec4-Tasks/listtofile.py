lecs = ['lec1','lec2','lec3','lec4']

with open('session.txt','w') as myfile:
    myfile.write(' '.join(lecs))

content = open('session.txt')
print(content.read())
