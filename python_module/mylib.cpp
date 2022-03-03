#include <pybind11/pybind11.h>
// #include <programs/local/LocalServer.cpp>
#include "../programs/local/LocalServer.cpp"
#include "../src/Core/ServerUUID.h"

namespace py = pybind11;

std::string hello() {
    return "Hello";
}

PYBIND11_MODULE(mylib, m) {
    m.doc() = "pybind11 mylib plugin";
    m.def("hello", &hello, "hello");
    // m.def("executeMultiQuery", &DB::LocalServer::main, "A function that adds two numbers");
}
