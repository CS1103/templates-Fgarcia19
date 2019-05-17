////
//// Created by fabrizio on 5/17/19.
////
//
//#include "quickshort.h"
//template<typename T>
//void ordenar(std::vector<T>l) {
//    std::vector<T>mayor;
//    std::vector<T>menor;
//    int i, j, x , aux;
//    i = l[0];
//    j = l[l.size()];
//    x = l[ (i + j) /2 ];
//    do{
//        while( (l[i] < x) && (j <= l[l.size()]) )
//        {
//            i++;
//        }
//
//        while( (x < l[j]) && (j > l[0]) )
//        {
//            j--;
//        }
//
//        if( i <= j )
//        {
//            aux = l[i]; l[i] = l[j]; l[j] = aux;
//            i++;  j--;
//        }
//
//    }while( i <= j );
//    for(int k=0;k<l.size();k++){
//        std::cout<<l[l]<<" ";
//    }
//    std::cout<<"\n";
//    if( l[0] < j )
//        quicksort(menor);
//    if( i < l[l.size()] )
//        quicksort(mayor);
//
//
//}