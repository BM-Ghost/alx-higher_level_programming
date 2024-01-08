## Python Inheritance

### Tests :heavy_check_mark:

- [tests folder](./tests): Contains all test files.

### Function Prototypes :floppy_disk:

1. **Lookup** [0-lookup.py](./0-lookup.py)
   - Python function that returns a list of available attributes and methods of an object.

2. **My list** [1-my_list.py](./1-my_list.py)
   - Python class `MyList` that inherits from `list`.
   - Includes a method `print_sorted(self)` that prints the list in ascending sorted order (assuming all list elements are `int`s).

3. **Exact same object** [2-is_same_class.py](./2-is_same_class.py)
   - Python function that returns `True` if an object is exactly an instance of a specified class; otherwise `False`.

4. **Same class or inherit from** [3-is_kind_of_class.py](./3-is_kind_of_class.py)
   - Python function that returns `True` if an object is an instance or inherited instance of a specified class; otherwise `False`.

5. **Only sub class of** [4-inherits_from.py](./4-inherits_from.py)
   - Python function that returns `True` if an object is an inherited instance from a specified class; otherwise `False`.

6. **Geometry module** [5-base_geometry.py](./5-base_geometry.py)
   - An empty Python class `BaseGeometry`.

7. **Improve Geometry** [6-base_geometry.py](./6-base_geometry.py)
   - Python class `BaseGeometry` that extends the base geometry.
   - Includes a method `area(self)` that raises an `Exception` with the message `area() is not implemented`.

8. **Integer validator** [7-base_geometry.py](./7-base_geometry.py)
   - Python class `BaseGeometry` with a method `integer_validator(self, name, value)` for value validation.
   - Validates if `value` is an `int` and if it's greater than `0`.

9. **Rectangle** [8-rectangle.py](./8-rectangle.py)
   - Python class `Rectangle` that inherits from `BaseGeometry` ([7-base_geometry.py](./7-base_geometry.py)).
   - Contains private attributes `width` and `height` validated with `integer_validator`.
   - Allows instantiation with `width` and `height`.

10. **Full rectangle** [9-rectangle.py](./9-rectangle.py)
    - Python class `Rectangle` that inherits from `BaseGeometry` ([7-base_geometry.py](./7-base_geometry.py)).
    - Extends [8-rectangle.py](./8-rectangle.py) with an implementation of the method `area()` and a special method `__str__` to print `Rectangle`s.

11. **Square #1** [10-square.py](./10-square.py)
    - Python class `Square` that inherits from `Rectangle` ([9-rectangle.py](./9-rectangle.py)).
    - Includes a private attribute `size`, validated with `integer_validator`.
    - Allows instantiation with `size` and implements the `area()` method.

12. **Square #2** [11-square.py](./11-square.py)
    - Python class `Square` that inherits from `Rectangle` ([9-rectangle.py](./9-rectangle.py)).
    - Extends [10-square.py](./10-square.py) with a special method `__str__` to print squares.

13. **My integer** [100-my_int.py](./100-my_int.py)
    - Python class `MyInt` that inherits from `int`.
    - Overloads the `==` and `!=` operators.

14. **Can I?** [101-add_attribute.py](./101-add_attribute.py)
    - Python function that adds a new attribute to an object if possible.
    - Raises a `TypeError` if unable to add the attribute.
