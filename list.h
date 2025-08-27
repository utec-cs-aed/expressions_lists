#ifndef LIST_H
#define LIST_H

// TODO: Implement all methods
template <typename T>
class List {    
    public:        
        virtual ~List(){
            // TODO            
        };        
        //Contrato
        virtual T front() = 0; // Retornar el primer elemento de la lista
        virtual T back() = 0; // Retornar el ultimo elemento de la lista
        virtual void push_front(T value) = 0; // Insertar al inicio de la lista
        virtual void push_back(T value) = 0; // Insertar al final de la lista
        virtual T pop_front() = 0; // Eliminar el primer elemento de la lista
        virtual T pop_back() = 0; // Eliminar  el ultimo elemento de la lista
        virtual bool insert(T value, int pos) = 0; // Insertar en cualquier posicion
        virtual bool remove(int pos) = 0; // Eliminar el elemento de la posicion indicada
        virtual T& operator[](int) = 0; // Operador [] debe ser declarado e implementado en cada clase hija
        virtual bool is_empty() = 0; // verifica si la lista esta vacia
        virtual int size() = 0; // Retorna el total de elementos de la lista
        virtual void clear() = 0; // Libera todos los nodos de la lista, pero debe ser posible realizar nuevas inserciones
        virtual void sort() = 0; // Ordena los elementos de la lista con un algoritmo eficiente en tiempo y espacio
        virtual bool is_sorted() = 0; // Verifica si la lista esta ordenada
        virtual void reverse() = 0; // Invierte los nodos de la lista sin crear nuevos nodos
        virtual std::string name() = 0; // Retorna el nombre de la clase
};

#endif
