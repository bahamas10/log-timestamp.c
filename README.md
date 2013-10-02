log-timestamp.c
===============

A logger function with the current timestamp prepended

Usage
-----

### With [dotc](https://github.com/substack/dotc)

First install this package

    npm install log-timestamp.c

Then create a program that `require`s this function

`test.c`
``` c
#require "log-timestamp.c" as LOG

int main(int argc, char **argv) {
	int i;
	for (i = 0; i < argc; i++)
		LOG("%s\n", argv[i]);
	return 0;
}
```

Finally compile the program using `dotc` and execute it

```
$ dotc test.c
$ ./a.out testing this out
[2013-09-23T05:42:03.582Z] ./a.out
[2013-09-23T05:42:03.583Z] testing
[2013-09-23T05:42:03.583Z] this
[2013-09-23T05:42:03.583Z] out
```

### Pure C

Copy `log-timestamp.{h,c}` to your project, and include the header
file as necessary

`test.c`
``` c
#include "log-timestamp.h"
int main(int argc, char **argv) {
	int i;
	for (i = 0; i < argc; i++)
		LOG("%s\n", argv[i]);
	return 0;
}
```

And the program will execute as above

Functions
---------

### `void LOG(const char *fmt, ...);`

License
-------

MIT
