n = input()

if(len(n) == 0):
    print("byte")
    
else:
    if(int(n) <= 127) :
        print("byte")
    else:
        if(int(n) <= 32767):
            print("short")
        else:
            if(int(n) <= 2147483647):
                print("int")
            else:
                if(int(n) <= 9223372036854775807):
                    print("long")
                else:
                    print("BigInteger")
    