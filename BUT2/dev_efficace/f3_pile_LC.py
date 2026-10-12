##########################################
# TP dev efficace semaine 1              #
# implementation pile par liste chaînée  #
##########################################

          ;               ,           
         ,;                 '.         
        ;:                   :;        
       ::                     ::       
       ::                     ::       
       ':                     :        
        :.                    :        
     ;' ::                   ::  '     
    .'  ';                   ;'  '.    
   ::    :;                 ;:    ::   
   ;      :;.             ,;:     ::   
   :;      :;:           ,;"      ::   
   ::.      ':;  ..,.;  ;:'     ,.;:   
    "'"...   '::,::::: ;:   .;.;""'    
        '"""....;:::::;,;.;"""         
    .:::.....'"':::::::'",...;::::;.   
   ;:' '""'"";.,;:::::;.'""""""  ':;   
  ::'         ;::;:::;::..         :;  
 ::         ,;:::::::::::;:..       :: 
 ;'     ,;;:;::::::::::::::;";..    ':.
::     ;:"  ::::::"""'::::::  ":     ::
 :.    ::   ::::::;  :::::::   :     ; 
  ;    ::   :::::::  :::::::   :    ;  
   '   ::   ::::::....:::::'  ,:   '   
    '  ::    :::::::::::::"   ::       
       ::     ':::::::::"'    ::       
       ':       """""""'      ::       
        ::                   ;:        
        ':;                 ;:"        
-hrr-     ';              ,;'          
            "'           '"            
              '


import unittest


class Cellule:
    def __init__(self, valeur, suivante):
        """création d'une cellule

        Args:
            valeur (quelconque): la valeur à stocker dans la cellule
            suivante (Cellule): la cellule suivante de la liste chaînée
        """
        self.valeur = valeur
        self.suivante = suivante

    



class Pile:
    def __init__(self):
        """création d'une pile vide
        """
        self.sommet = None #le haut de la pile


    def est_vide(self):
        """retourne True si la pile est vide False sinon """
        return self.sommet == None 

    def empiler (self,val):
        a = Cellule(val,self.sommet)
        self.sommet = a

    def depiler (self):
        if self.est_vide() :
            raise Exception("La pile est vide !")
        else :
            valeur_depiler = self.sommet.valeur
            self.sommet = self.sommet.suivant
            return valeur_depiler


""" 
A vous d'écrire les méthodes de la pile ainsi que les tests !
"""


class TestPile(unittest.TestCase):

    def test_pile_vide(self):
        """Une nouvelle pile doit être vide."""
        pile = Pile()

        self.assertTrue(pile.est_vide())

    def test_empiler(self):
        """Après avoir empilé une valeur, la pile ne doit plus être vide."""
        pile = Pile()

        pile.empiler(10)

        self.assertFalse(pile.est_vide())
        self.assertEqual(pile.sommet.valeur, 10)

    def test_depiler(self):
        """Depiler doit retourner la dernière valeur empilée."""
        pile = Pile()

        pile.empiler(10)

        valeur = pile.depiler()

        self.assertEqual(valeur, 10)
        self.assertTrue(pile.est_vide())

    def test_ordre_empiler_depiler(self):
        """Une pile fonctionne en LIFO : dernier entré, premier sorti."""
        pile = Pile()

        pile.empiler(10)
        pile.empiler(20)
        pile.empiler(30)

        self.assertEqual(pile.depiler(), 30)
        self.assertEqual(pile.depiler(), 20)
        self.assertEqual(pile.depiler(), 10)

        self.assertTrue(pile.est_vide())

    def test_depiler_pile_vide(self):
        """Depiler une pile vide doit provoquer une exception."""
        pile = Pile()

        with self.assertRaises(Exception):
            pile.depiler()


if __name__ == "__main__":
    unittest.main()
