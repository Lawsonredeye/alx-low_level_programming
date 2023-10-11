# 0x0E. C - Structures, typedef

`Structures` is a collection of different data types to form a  single variable. This is mostly useful when it comes to creating a tree of information and then modified by calling just like a function.

To declare a `Structure` you can follow the following syntax;
		`struct name;`
**further breakdown**:
		`struct sturcture_name {`
		 //data types to be declared or initialized
		`};`
It's important to note that structures for storing character uses a pointer, as a pointer is much more easier to call and be edited.

## How To Call A struct
You can call a structure before the main function or outside the scope of the main function. It's just like creating a global function/variable as well as local function/variable.

## Typedef
Typedef also known as type definition is used for the redefinition of either a stucture or a data type.
This is mainly useful when creating project and you need to create specific/special and easy to understand data type that would be self expanatory to other programmers. 
An example of a `Typedef` is as follow;
	`typedef old_data_type_name new_data_type_name;`
	`typedef int Integer;`
As you can see the int data type has been changed to Integer and the new definition can be used to declare integer variables.

This can also be used for structures e.g
	`typedef struct struct_name new_name;`
	`typedef struct school Havard`
where `struct school` would be replaced with `Harvard`
