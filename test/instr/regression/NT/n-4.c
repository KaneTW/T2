void main()
{
    int x;
    int y;
    int z;

    while(x<y) {
        while(y<z) {
            if (nondet()) {
                y++;
            }
        }
        x++;
    }
}
