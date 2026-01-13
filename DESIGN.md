# Design documentation
## Disk Image

- Single file will act as simulated disk on which we can read or write.
- All metadata will be stored in that file.
- It will be persistent ( It will retain data after program exits. )

## Blocks and Inodes

- Disk image is divided into fixed-size blocks.
- Files are divided in these fixed-size blocks.
- Inode stores file matadata and points to blocks to access data.
- Directories store names and inode numbers of file or directories under it.

## File Operation Flow

- Every file is connected to inode.
- Inode contains file metadata.
- Inode also contains pointers to disk blocks which are used by this file to store data.
- Read and write operations use these blocks pointed by inode to access or modify current file.