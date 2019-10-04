#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include <netinet/tcp.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>


#include "c_vector.h"



int main() {

    Data *c_vec = init_data(10);
    printf("size = %d\n", get_size(c_vec));

    insert(c_vec, 1.12);

    printf("position = %d\n", get_position(c_vec));

    return 0;
}