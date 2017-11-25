#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "ext2.h"

unsigned char *disk;
struct ext2_super_block *super_block;
struct ext2_group_desc *group_desc;
unsigned char *block_bitmap;
unsigned char *inode_bitmap;
struct ext2_inode *inodes;


int main(int argc, char **argv) {

    if(argc != 4) {
        fprintf(stderr, "Usage: <disk name> <absolute_path>\n");
        exit(1);
    }

    char* chosen_disk = argv[1];
    char* file_path = argv[2];
    char* directory_path = argv[2];
}
