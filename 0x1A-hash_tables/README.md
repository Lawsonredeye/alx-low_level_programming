# ****0x1A. C - Hash tables****

**A hash function is a computer programming construct that maps data of arbitrary size to fixed-size values, with applications in data storage, retrieval, and various computational processes. It involves converting variable-length keys, scrambling key bits for uniform distribution, and mapping key values into a hash table. The efficiency and properties of hash functions impact their performance in terms of search time and data storage.**

### **Summary**

**Definition and Purpose
    ◦ A hash function maps data to fixed-size values and is used in data storage and retrieval.
    ◦ Hash values are used to index a hash table, and the process is known as hashing.Functions of a Hash Function
    ◦ Converts variable-length keys into fixed-length values.
    ◦ Scrambles key bits for uniform distribution.
    ◦ Maps key values into the hash table.Properties of a Good Hash Function
    ◦ Fast computation and minimal duplication of output values (collisions).
    ◦ Relies on statistical properties of key and function interaction.Hash Tables
    ◦ Used in conjunction with hash functions to store and retrieve data.
    ◦ Collision resolution methods include chained hashing and open address hashing.Specialized Uses
    ◦ Used to build caches for large datasets.
    ◦ Essential in the Bloom filter, a probabilistic data structure.
    ◦ Applied in geometric hashing for proximity problems in various disciplines.Properties of Hash Functions
    ◦ Uniformity: Hash values should be evenly distributed to avoid increased search costs.
    ◦ Testing and Measurement: Evaluated using the chi-squared test for distribution uniformity.
    ◦ Efficiency: Trade-off between search time and data storage space.Universality and Applicability
    ◦ Universal hashing ensures a collision probability of 1/m for distinct keys.
    ◦ Applicable in cryptography for integrity checks, key derivation, MACs, password storage, and signatures.Deterministic Hash Function
    ◦ Must be deterministic for a given input.
    ◦ Excludes external variable parameters for determinism.Defined Range and Variable Range
    ◦ Output size is often fixed for indexing purposes.
    ◦ Variable range hash functions may change hash values based on the run or program state.Dynamic Hash Functions
    ◦ Desirable for minimal record movement during hash table resizing.
    ◦ Linear hashing and spiral hashing relax uniformity for constant time execution.Data Normalization and Hashing Integer Data Types
    ◦ Normalization ensures equivalent inputs yield the same hash value.
    ◦ Various algorithms for hashing integers, including identity hash function and trivial hash function.Trivial Hash Functions: Folding, Mid-squares, Division, Algebraic Coding
    ◦ Folding: Divides input into sections and combines them.
    ◦ Mid-squares: Squares input and extracts middle digits.
    ◦ Division: Uses modulo function with a prime divisor.
    ◦ Algebraic coding: Uses polynomial division modulo 2 for mapping bits.**

**This comprehensive overview covers the definition, functions, properties, and various types of hash functions, emphasizing their applications and considerations for optimal performance.**
