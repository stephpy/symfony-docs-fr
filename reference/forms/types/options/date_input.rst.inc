input
~~~~~

**type**: ``string`` **default**: ``datetime``

Le format de la donn�e *finale*, c'est-�-dire le format dans lequel la date
sera stock�e dans l'objet sous-jacent. Les valeurs valides sont :

* ``string`` (ex ``2011-06-05``)
* ``datetime`` (un objet ``DateTime``)
* ``array`` (ex ``array('year' => 2011, 'month' => 06, 'day' => 05)``)
* ``timestamp`` (ex ``1307232000``)

La valeur qui provient du formulaire sera �galement normalis�e dans ce format.