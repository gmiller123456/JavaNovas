/*
  Naval Observatory Vector Astrometry Software (NOVAS)
  C Edition, Version 3.1

  novas.h: Header file for novas.c

  U. S. Naval Observatory
  Astronomical Applications Dept.
  Washington, DC
  http://www.usno.navy.mil/USNO/astronomical-applications
*/

/*
   Structures
*/

/*
   struct cat_entry:  basic astrometric data for any celestial object
                      located outside the solar system; the catalog
                      data for a star

   starname[SIZE_OF_OBJ_NAME] = name of celestial object
   catalog[SIZE_OF_CAT_NAME]  = catalog designator (e.g., HIP)
   starnumber                 = integer identifier assigned to object
   ra                         = ICRS right ascension (hours)
   dec                        = ICRS declination (degrees)
   promora                    = ICRS proper motion in right ascension
                                (milliarcseconds/year)
   promodec                   = ICRS proper motion in declination
                                (milliarcseconds/year)
   parallax                   = parallax (milliarcseconds)
   radialvelocity             = radial velocity (km/s)

   SIZE_OF_OBJ_NAME and SIZE_OF_CAT_NAME are defined below.  Each is the
   number of characters in the string (the string length) plus the null
   terminator.
*/


#endif
