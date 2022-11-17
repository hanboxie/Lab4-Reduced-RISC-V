# Lab 4 #
**Guidance**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/69715492/202437412-cb353815-e061-4bce-b6b1-00f82270102e.png">

**Architecture**

<img width="600" alt="image" src="https://user-images.githubusercontent.com/69715492/202437432-1e5737dd-26c3-40df-94f4-7da7cdfe1d36.png">

**Allocation of tasks**

<img width="300" alt="image" src="https://user-images.githubusercontent.com/69715492/202438092-07ee4821-d553-4690-9b82-382494f380cf.png">

**Group Agreements**

* All inputs/output names will match the diagram exactly
* All width definitions will start from 0 (e.g. 8 bits will be [7:0])
* We will constantly be commiting our own changes and add documentation 
* We will design our own submodules within the tasks but Hanbo will add simple combinational blocks like multiplexers in the top-level module

# Task 1: Program Counter and Adders #

# Task 2 : Register File, ALU and MUX #
<img width="400" alt="image" src="https://user-images.githubusercontent.com/69715492/202441778-e0815589-c941-47af-9e15-e42966f8d3dd.png">

To complete this task I had to complete two steps:
* Creating a register file
* Creating the ALU module

## Step 1: Register File ##
Using the ram2ports as inspiration:

<img width="400" alt="image" src="https://user-images.githubusercontent.com/69715492/202442263-4543d1de-ef4d-43e2-8933-7e61aaca4b60.png">

I created the following module:

<img width="400" alt="image" src="https://user-images.githubusercontent.com/69715492/202442651-c6c931b1-69a1-41f8-a1f3-04ed28ea947c.png">

Main additions were:
* a0 output
* Asynchronous read port vs Synchronous write port (as required in the specification)

## Step 2: ALU Module ##

<img width="400" alt="image" src="https://user-images.githubusercontent.com/69715492/202443472-47b079b6-2d59-464f-95c2-3cd70399c744.png">

# Task 3 : Control Unit, Sign-extension Unit and Instruction Memory #

# Task 4: Top-Level Module, Testbench and Verification of Design #


# Challenges #
