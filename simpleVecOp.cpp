#include <Eigen/Dense>
#include "simpleVecOp.hpp"
using namespace Eigen;

int add(int i, int j) {
    return i + j;
}

VectorXd vectorOp::weightedSum(VectorXd x, VectorXd y, VectorXd z) {
    return a*x + b*y + c*z;
}

void vectorOp::setScalar(double a0, double b0, double c0) {
    a = a0;
    b = b0;
    c = c0;
}
