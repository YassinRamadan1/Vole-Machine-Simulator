#ifndef MACHINE_H
#define MACHINE_H
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class Register{
    string value;
public:
    Register(){
      value = "00";
    }
    void set_Register(string);
    string get_Register();
};
class Memory{
    string value;
public:
    Memory(){
      value = "00";
    }
    void set_Memory_cell(string);
    string get_Memory_cell();
};
class Machine{
    int PC;
    bool show;
    string IR;
    ifstream input;
    Register registers [16];
    Memory memory_cells [256];
    void i_1();
    void i_2();
    void i_3(); 
    void i_4(); 
    void i_5(); 
    void i_B();
    void i_C(); 
    void menu();
    void fetch_instruction(); // put the instruction from PC into IR then update PC then call decode
    void decode_execute_instruction(); // decode then validate then execute then show or not then call or not fetch
    void show_status();
    bool validate1();
    bool validate2();
    bool validate3();
    void call_instruction();
public:
    Machine();
    void load_program(); // load instructions from a file into the memory cells
    void run_program(); // display the menu then call the function fetch
};
#endif //MACHINE_H
