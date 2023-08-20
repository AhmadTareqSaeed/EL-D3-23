import webbrowser

links_dict = {
    "facebook" : "https://www.facebook.com/",
    "git_repo" : "https://github.com/AhmadTareqSaeed/Tasks-EL-D3-23",
    "youtube"  : "https://www.youtube.com/",
    "geeksforgeeks" : "https://www.geeksforgeeks.org/",
    "ubuntu_packages" : "https://packages.ubuntu.com/",
    "anghami"  : "https://www.anghami.com/",
    "followup" : "https://docs.google.com/spreadsheets/d/1dV1zoXoNs17x84_ww4Ac1YA5nG8RuH_gwRHLOM3AmOE/edit#gid=0",
    "guru99"   : "https://www.guru99.com/"
}
print("choose your favourite link by typing it's name.")

print("Avaialbe liks is :")

print(list(links_dict.keys()))

x = input("Enter the site name: ")

x = links_dict.get(x)

links = links_dict.values()

def firefox(x):
    webbrowser.get("/usr/bin/firefox %s").open(x)
