#include <iostream>
#include <vector>

using namespace std;

class Class{
    public:
        vector<int> vec = {1, 1, 1};

        void print_vec_adresses(){
            for(int i=0; i<vec.size(); i++)
                cout << &vec.at(i) << endl;
        }
};

void print_int_vector(vector<int> vec){
    vector<int>::iterator iter; // iterators são usados para apontar para um elemento do vetor;
    iter = vec.end() - 1; // apontando para o último elemento
    iter = vec.begin(); // apontando para o primeiro elemento

    for(iter=vec.begin(); iter!=vec.end(); iter++)
        cout << *iter << " "; // exibindo o conteúdo sendo apontado
}

vector<int> create_vector(int first_value){ // retornando um vetor
    vector<int> vec = {first_value};
    return vec;
}

void print_int_vector_adresses1(vector<int> vec){
    vector<int>::iterator iter;

    for(iter=vec.begin(); iter!=vec.end(); iter++){
        cout << &(*iter) << endl;
    }
}

void print_int_vector_adresses2(vector<int> vec){
    for(const int &element : vec){
        cout << &element << endl;
    }
}

void print_int_vector_adresses3(vector<int> *vec){
    for(int i=0; i<vec->size(); i++){
        cout << &vec->at(i) << endl;
    }
}

int main(){
    // Diferente dos arrays, os vetores podem aumentar dinamicamente
    // de tamanho durante a execução do programa
    vector<int> integers1;

    // Inicializando com valores
    vector<int> integers2 = {3, 2, 5};

    // Inicializando já com 5 elementos, todos valendo 12
    vector<int> integers3(5, 12);

    // Adicionando um valor ao final do vetor
    integers1.push_back(6);

    // Acessando um valor pelo índice
    cout << "Elemento 0 de integer2: " << integers2.at(0) << endl; // erro se o índice estiver fora dos limites
    cout << "Elemento 0 de integer2: " << integers2[0] << endl; // retorna um valor lixo se estiver fora do limite

    // Alterando o valor de um elemento
    integers3.at(0) = 13;

    // Removendo o último elemento
    integers3.pop_back();

    cout << "Elementos de integers1: ";
    print_int_vector(integers1);
    cout << endl;

    cout << "Elementos de integers2: ";
    print_int_vector(integers2);
    cout << endl;

    cout << "Elementos do vetor create_vector(3): ";
    print_int_vector(create_vector(3));
    cout << endl;

    cout << "size: " << integers2.size() << endl;
    cout << "front: " << integers2.front() << endl; // retorna o primeiro elemento
    cout << "back: " << integers2.back() << endl; // retorna o último elemento
    cout << "empty: " << integers2.empty() << endl;
    cout << "capacity: " << integers2.capacity() << endl; // pode ser maior que size

    // Tentando acessar os elementos de um vetor é passado como parâmetro
    cout << "Endereco do elemento 0 de integers2:" << &integers2.at(0) << endl;
    cout << "Endereco do elemento 1 de integers2:" << &integers2.at(1) << endl;
    cout << "print_int_vector_adresses1:" << endl;
    print_int_vector_adresses1(integers2);
    cout << "print_int_vector_adresses2:" << endl;
    print_int_vector_adresses2(integers2);
    cout << "print_int_vector_adresses3:" << endl;
    print_int_vector_adresses3(&integers2); // este exibe os endereços originais
    // Aparemente, para ter acesso aos dados originais
    // é necessário ter também o acesso ao vetor original

    Class c;
    cout << endl;
    c.print_vec_adresses();
    cout << endl;
    print_int_vector_adresses3(&c.vec);

    return 0;
}