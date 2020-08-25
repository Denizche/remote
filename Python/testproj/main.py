from client import User
from friends import GetAges


def main():

    debug = input("debug?(1/0): ")
    if  debug != "1" and debug != "0":
        print("Error! ")
        return

    username = input("Enter id: ")

    try:
        id = User(username).execute()
    except User.UserNotFound as e:
        e.not_found()
        return

    try:
        friends_ages = GetAges(id).execute()
    except GetAges.FriendsNotFound as e:
        e.not_found()
        return

    if debug==1:
        print("ID: ", id)
    if debug==1:
        print("Ages: ", friends_ages, "\n", "\n")

    gist = {}
    for x in friends_ages:
        gist[x] = 0

    if debug==1:
        print("gist: ", gist, "\n")

    for x in friends_ages:
        gist[x] += 1

    gist = sorted(gist.items())

    print(gist)
    for x, y in gist:
        print(x, "▉" * y)

    return

if __name__ == '__main__':
    main()