any line of the file that starts with '#' is a comment -- ignore
//create list: C
//clear list: X
//delete list: D
//insert element in list (sorted): I number (number will be an int value)
//add element to front of list: F number (number will be an int value)
//add element to back of list: B number (number will be an int value)
//get contents of head node: A
//get contents of tail node: Z
//remove element from front of list: T
//remove element from back of list: K
//eliminate element from list: E number (number will be the value to be eliminated -- eliminate all occurrences of the value from the list)
//remove element from list: R number (number will be the value to be removed -- remove only the first occurrence of the value from the list)
//get element from list: G number (number will be the value to be retrieved)
//show number of items in the list: N
//print all items in the list: P
Required output format (your outputs must be EXACTLY as specified to pass the UNIT TEST):

* any operation that tries to access a null list pointer, except create: "MUST CREATE LIST INSTANCE" *
any line of the file that starts with '#' is a comment -- ignore
//create list: "LIST CREATED" (* if a list instance already exists, delete it first *)
//clear list: "LIST CLEARED"
//delete list: "LIST DELETED" (* be sure to NULL the list pointer *)
//insert: "VALUE x INSERTED"
//add to front: "VALUE x ADDED TO HEAD"
//add to back: "VALUE x ADDED TO TAIL"
//get head contents: "VALUE x AT HEAD"; catch and print exception ("LIST EMPTY") if list is empty
//get tail contents: "VALUE x AT TAIL"; catch and print exception ("LIST EMPTY") if list is empty
//remove from front: "REMOVED HEAD" or "LIST EMPTY" if empty
//remove from back: "REMOVED TAIL" or "LIST EMPTY" if empty
//eliminate element: "VALUE x ELIMINATED" on success or "VALUE x NOT FOUND" on failure
//remove element: "VALUE x REMOVED" on success or "VALUE x NOT FOUND" on failure
//get element: "VALUE x FOUND" on success or "VALUE x NOT FOUND" on failure
//show number of items: "LIST SIZE IS x"
//print all: "NUM1,NUM2,NUM3,...,xx" or "LIST EMPTY" if empty