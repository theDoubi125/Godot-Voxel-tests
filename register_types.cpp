#include "register_types.h"
#include "class_db.h"
#include "chunk.h"

void register_voxel_types() {

	ClassDB::register_class<Chunk>();
}

void unregister_voxel_types() {
	//nothing to do here
}