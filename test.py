import wrap
import numpy as np
import unittest
from random import random

class TestVectorOp(unittest.TestCase):
    def setUp(self):
        self.vectorOp = wrap.vectorOp()

    def test_numpy_consistency(self):
        for i in range(1000):
            a, b, c = random(), random(), random()
            x, y, z = np.random.rand(i), np.random.rand(i), np.random.rand(i)
            self.vectorOp.setScalar(a, b, c)
            result = self.vectorOp.weightedSum(x, y, z)
            expected = a*x+b*y+c*z
            assert len(result) == len(expected)
            self.assertListEqual(result.tolist(), expected.tolist())

    def test_zero(self):
        self.vectorOp.setScalar(0, 0, 0)
        for i in range(1000):
            x, y, z = np.random.rand(i), np.random.rand(i), np.random.rand(i)
            result = self.vectorOp.weightedSum(x, y, z)
            expected = np.zeros(i)
            self.assertListEqual(result.tolist(), expected.tolist())
    #test_vector()
if __name__ == "__main__":
    unittest.main()
