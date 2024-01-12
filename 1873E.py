def is_feasible(h, coral, x):
    water_needed = sum(max(0, h - c) for c in coral)
    return water_needed <= x


for i in range(5):
    n, x = 7, 9
    coral = list(int(x) for x in "3 1 2 4 6 2 5".split())

    left, right = 1, max(coral)

    while left < right:
        mid = (left + right + 1) // 2
        if is_feasible(mid, coral, x):
            left = mid
        else:
            right = mid - 1

    print(left)


class newList(list):
    def __init_subclass__(cls) -> None:
        return super().__init_subclass__()