def bubble_sort(data: list) -> list:
    switch_counter = 0
    sorted = False
    while not sorted:
        switch_counter = 0

        for i in range(len(data) - 1):
            current_element = data[i]
            next_element = data[i + 1]

            if current_element > next_element:
                data[i] = next_element
                data[i + 1] = current_element
                switch_counter += 1

        if switch_counter == 0:
            return data
