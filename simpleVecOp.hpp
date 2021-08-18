#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;

class vectorOp {
    private:
        double a, b, c;
    public:
        VectorXd weightedSum(VectorXd x, VectorXd y, VectorXd z);
        void setScalar(double a0, double b0, double c0);
};
