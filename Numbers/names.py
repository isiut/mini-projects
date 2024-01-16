import number_names


def name(number: float) -> str:
    return number_names.name(number)


print(name(float(input("Enter #: "))))
