double det( double M[(3,3)] )
{
    double d[3]; // iloczyny na przek¹tnych
    double a[3]; // iloczyny na anty-przek¹tnych
    for( int i = 0; i < 3; i++ ) {
        for( int j = 0; j < 3; j++ ) {
            d[j] *= M[i, (i+j) % 3 ];
            a[j] *= M[2 - i, (i+j) % 3 ];
        }
    }
    return d[1] + d[2] + d[3] - a[1] - a[2] - a[3];
}
