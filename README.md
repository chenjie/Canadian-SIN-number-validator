# Canadian-SIN-number-validator
This program validates the Canadian Social Insurance Number using the Luhn algorithm.

## Getting Started

### Prerequisites

* GCC
* UNIX Shell OR Windows PowerShell

### Download source code and compile
The following instructions are presented using Bash in macOS:
```
# Change to HOME directory
$ cd ~

# Clone this repo and 'cd' into it
$ git clone https://github.com/jellycsc/Canadian-SIN-number-validator.git
$ cd Canadian-SIN-number-validator/

# Let's compile.
$ make
gcc -Wall -g -std=gnu99 -c validate_sin.c
gcc -Wall -g -std=gnu99 -c sin_helpers.c
gcc -Wall -g -std=gnu99 -o validate_sin validate_sin.o sin_helpers.o
```

### Usage
```
USAGE: validate_sin sin_number
```
Note: Canadian SIN is a 9-digit number.

### Example
```
$ ./validate_sin 810620716
Valid SIN
$ ./validate_sin 123456789
Invalid SIN
```

## Authors

| Name                    | GitHub                                     | Email
| ----------------------- | ------------------------------------------ | -------------------------
| Chenjie (Jack) Ni       | [jellycsc](https://github.com/jellycsc)    | nichenjie2013@gmail.com

## Thoughts and future improvements

* Details of the Luhn algorithm can be found [here](https://en.wikipedia.org/wiki/Luhn_algorithm).

## Contributing to this project

1. Fork it [![GitHub forks](https://img.shields.io/github/forks/jellycsc/Canadian-SIN-number-validator.svg?style=social&label=Fork&maxAge=2592000)](https://github.com/jellycsc/Canadian-SIN-number-validator/fork)
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -m 'Add some feature'`)
4. Push to your feature branch (`git push origin my-new-feature`)
5. Create a new Pull Request

Details are described [here](https://git-scm.com/book/en/v2/GitHub-Contributing-to-a-Project).

## Bug Reporting [![GitHub issues](https://img.shields.io/github/issues/jellycsc/Canadian-SIN-number-validator.svg)](https://github.com/jellycsc/Canadian-SIN-number-validator/issues/)

Please click `issue` button above↑ to report any issues related to this project  
OR you can shoot an email to <nichenjie2013@gmail.com>

## License
This project is licensed under GNU General Public License v3.0 - see [LICENSE](LICENSE) file for more details.
