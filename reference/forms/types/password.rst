.. index::
   single: Forms; Fields; password

Type de champ Password
======================

Le champ ``password`` rend un input texte de type password.

+-------------+------------------------------------------------------------------------+
| Rendu comme | Champ ``input`` ``password``                                           |
+-------------+------------------------------------------------------------------------+
| Options     | - `always_empty`_                                                      |
+-------------+------------------------------------------------------------------------+
| Options     | - `max_length`_                                                        |
| h�rit�es    | - `required`_                                                          |
|             | - `label`_                                                             |
|             | - `trim`_                                                              |
|             | - `read_only`_                                                         |
|             | - `error_bubbling`_                                                    |
+-------------+------------------------------------------------------------------------+
| Type parent | :doc:`text</reference/forms/types/text>`                               |
+-------------+------------------------------------------------------------------------+
| Classe      | :class:`Symfony\\Component\\Form\\Extension\\Core\\Type\\PasswordType` |
+-------------+------------------------------------------------------------------------+

Options du champ
----------------

always_empty
~~~~~~~~~~~~

**type**: ``Boolean`` **default**: ``true``

Si cette option est d�finie � true, le champ sera *toujours* rendu vide, m�me si
le champ correspondant a une valeur. Si elle est d�finie � false, alors le champ
password sera rendu avec l'attribut ``value`` correctement rempli avec la vraie valeur.

Plus simplement, si pour une raison quelconque vous voulez afficher le champ password
*avec* sa valeur d�j� pr�remplie, d�finissez cette option � false.

Options h�rit�es
----------------

Ces options sont h�rit�es du type :doc:`field</reference/forms/types/field>` :

.. include:: /reference/forms/types/options/max_length.rst.inc

.. include:: /reference/forms/types/options/required.rst.inc

.. include:: /reference/forms/types/options/label.rst.inc

.. include:: /reference/forms/types/options/trim.rst.inc

.. include:: /reference/forms/types/options/read_only.rst.inc

.. include:: /reference/forms/types/options/error_bubbling.rst.inc