/**
     * A structure to represent 3d vectors 
     */
    typedef struct
    {
      /*@{*/
      double x ; /**< the x coordinate */
     double y ; /**< the y coordinate */
     double z ; /**< the z coordinate */
     /*@}*/
     /**
      * @name group 2
      */
     /*@{*/
   char * name       ; /**< the name of the point */
   int    namelength ; /**< the size of the point name */
   /*@}*/
  } point3d ;