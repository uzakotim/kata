import unittest
import math


class TestPiCalculation(unittest.TestCase):
    def test_pi_calculation(self):
        self.assertEqual(iter_pi(0.1), [10, 3.0418396189])
        self.assertEqual(iter_pi(0.01), [100, 3.1315929036])
        self.assertEqual(iter_pi(0.001), [1000, 3.1405926538])


def iter_pi(epsilon):
    n = 1
    pi = 4
    k = 1
    while abs(pi - math.pi) > epsilon:
        if n % 2 == 0:
            pi += 4 / (2 + k)
        else:
            pi -= 4 / (2 + k)
        n += 1
        k += 2

    return [n, round(pi, 10)]


if __name__ == '__main__':
    unittest.main()
