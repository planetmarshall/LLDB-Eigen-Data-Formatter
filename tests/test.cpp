#include <iostream>
#include <Eigen/Dense>

int main() {
  Eigen::Matrix<double, 3, 1> v1;
  v1.setConstant(2);

  Eigen::VectorXd v2(3);
  v2.setConstant(3);

  Eigen::MatrixXd m1(3, 3);
  std::cout << m1.rows() << " " << m1.cols() << std::endl;
  m1.diagonal().setConstant(2);
}
