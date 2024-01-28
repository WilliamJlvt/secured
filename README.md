# Elementary Programming in C - Secured
Hashtable lib project for semester 1 of the Epitech Elementary Programming in C module (B-CPE-110).

## Introduction
The hash function is the central element of a hash table, defining which table index should be
used to store the data. A hash function is a mathematical function that converts any numerical
data into an output string comprising a fixed number of characters or a positive integer.

The full description of the project can be found in [subject.pdf](pdf/B-CPE-110_Secured.pdf).

## Prerequisites
 - [Make](https://www.gnu.org/software/make/)
 - [GCC](https://gcc.gnu.org/)
 - [LibC](https://www.gnu.org/software/libc/)

## Installation
```
B-PSU-100> git clone git@github.com:WilliamJlvt/secured.git
...
B-PSU-100> make
...
```
It will generate a library binary called `libhashtable.a`

## Results
| test                                | passed | results |
|-------------------------------------|--------|---------|
| 01 - Algorithm app. - Hash function | 3/4    | 75%     |
| 02 - Algorithm app. - Hash table    | 5/5    | 100%    |
| 03 - Basics                         | 6/6    | 100%    |
| 04 - Data structure                 | 5/5    | 100%    |
| 05 - Optimization                   | 5/5    | 100%    |
| 06 - Robustness                     | 10/10  | 100%    |
| total                               | 34/35  | 97.1%   |

## Coding style
All the source code has been written according to the [Epitech C Coding Style](https://williamjlvt.github.io/assets/coding_style/epitech_c_coding_style.pdf).
#### errors
| Fatal | Major  | Minor | Info |
|-------|--------|-------|------|
| 0     | 0      | 0     | 0    |

## Unit tests
Unit tests are written using the [Criterion](https://github.com/Snaipe/Criterion) framework.
You can find the tests in the [bonus](bonus) directory. Just run `make lcriterion` to build the tests and `./hashtable` to run them.

## Authors
* **William JOLIVET** ([GitHub](https://github.com/WilliamJlvt) / [LinkedIn](https://www.linkedin.com/in/william-jolivet-64951a24b/))
* **Feyza MEDDAH** ([GitHub](https://github.com/etsuzaku))

## License
This project is licensed under the GNU Public License version 3.0 - see the [LICENSE](LICENSE) file for details.
