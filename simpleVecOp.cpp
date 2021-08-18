#include <Eigen/Dense>
#include "simpleVecOp.hpp"
#include <stdexcept>

using namespace Eigen;

VectorXd vectorOp::weightedSum(VectorXd x, VectorXd y, VectorXd z) {
    if (x.size() != y.size() || y.size() != z.size()) {
        throw std::runtime_error("Input vectors does not have equal size!");
    }

    return a*x + b*y + c*z;
}

void vectorOp::setScalar(double a0, double b0, double c0) {
    a = a0;
    b = b0;
    c = c0;
}
