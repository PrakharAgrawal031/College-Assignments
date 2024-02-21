def main():
    l0, r0, l1, r1, result = "", "", "", "", ""
    print("Enter production : ")
    print("P -> ", end="")
    r0 = input()

    for char in r0:
        if 'A' <= char <= 'Z':
            l1 += char
            break

    print(f"{l1} -> ", end="")
    r1 = input()

    for char in r0:
        if 'a' <= char <= 'z':
            result += char
            print(f"first(P) = {{{result[0]}}}")
            break
        elif 'A' <= char <= 'Z':
            result += r1[len(result)]
            print(f"first(P) = first({l1}) = {{{result[0]}}}")
            break

if __name__ == "__main__":
    main()