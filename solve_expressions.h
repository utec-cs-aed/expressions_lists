#include <iostream>

using namespace std;

struct Result{
    double result;
    bool error;
}


Result solve(string input)
{
    // 1- descomponer el input y validar
    // string -> List<string>
    // "(5 + 10)/8.2"  -> "(","5","+","10",")","/","8.2"]  

    // 2- convertir de Infijo a Postfijo
    //  ["(","5","+","10",")","/","8.2"]   -> 
    
    // 3- resolver la expresion

    //* Si no cumple la validacion retornar Result.error = true;

    return Result();
}
