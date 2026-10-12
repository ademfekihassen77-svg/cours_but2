########################################
# TP dev efficace semaine 1            #
# implementation file FIFO par tableau #
########################################

import unittest


class File_tab:
    def __init__(self, N):
        """creation de la file

        Args:
            N (int): taille du tableau, la taille de file est N
        """
        self.tab = [None] * N
        self.sortie = 0  # indice du prochain élément à sortir
        self.n = 0       # nombre total d'éléments
        self.N = N       # longueur du tableau

    def est_vide(self):
        """renvoie un booléen indiquant si la file est vide

        Returns:
            booleen
        """
        return self.n == 0

    def est_pleine(self):
        """renvoie un booléen indiquant si la file est pleine

        Returns:
            booleen
        """
        return self.n == self.N

    def ajouter(self, x):
        """ajoute un élément dans la file

        Args:
            x (quelconque): élément à ajouter

        Raises:
            Exception : si la file est pleine
        """

        if self.est_pleine():
            raise Exception("La file est pleine !")

        # L'indice où on ajoute est :
        # sortie + nombre d'éléments déjà présents
        indice = (self.sortie + self.n) % self.N

        self.tab[indice] = x
        self.n += 1

    def defiler(self):
        """renvoie et supprime l'élément le plus ancien

        Raises:
            Exception : si la file est vide

        Returns:
            un élément de type quelconque
        """

        if self.est_vide():
            raise Exception("La file est vide !")

        x = self.tab[self.sortie]

        self.tab[self.sortie] = None

        # On avance circulairement
        self.sortie = (self.sortie + 1) % self.N

        self.n -= 1

        return x


class TestFile(unittest.TestCase):

    def test_vide(self):
        for N in [0, 1, 2, 5, 10, 100]:
            f = File_tab(N)
            self.assertTrue(f.est_vide())

            if N > 1:
                f.ajouter(0)
                self.assertFalse(f.est_vide())

    def test_ajouter_et_pleine(self):
        for N in [1, 2, 5, 10, 100]:
            f = File_tab(N)

            for i in range(N):
                f.ajouter(0)

            with self.assertRaises(BaseException):
                f.ajouter(0)

    def test_defiler(self):
        for N in [1, 2, 5, 10, 100]:
            f = File_tab(N)

            for k in range(N):
                with self.assertRaises(BaseException):
                    f.defiler()

                for i in range(N):
                    f.ajouter(i)

                for i in range(N):
                    self.assertEqual(f.defiler(), i)

    def test_scenario(self):
        f = File_tab(5)

        self.assertTrue(f.est_vide())
        self.assertFalse(f.est_pleine())

        for i in range(5):
            f.ajouter(i)
            self.assertFalse(f.est_vide())

        self.assertTrue(f.est_pleine())

        self.assertEqual(f.defiler(), 0)
        self.assertEqual(f.defiler(), 1)
        self.assertEqual(f.defiler(), 2)


if __name__ == '__main__':
    unittest.main()
