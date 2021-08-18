#include <pybind11/pybind11.h>
#include <pybind11/eigen.h>
#include "simpleVecOp.hpp"

namespace py = pybind11;

using namespace pybind11::literals;

PYBIND11_MODULE(wrap, m) {
    m.doc() = "some simple vector operations";

    py::class_<vectorOp>(m, "vectorOp")
        .def(py::init<>())
        .def("weightedSum", &vectorOp::weightedSum)
        .def("setScalar", &vectorOp::setScalar);
}
