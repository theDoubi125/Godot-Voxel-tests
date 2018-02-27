#include "chunk.h"

void Chunk::add(int value) {

	count += value;
}

void Chunk::reset() {

	count = 0;
}

int Chunk::get_total() const {

	return count;
}

void Chunk::set_total(int value)
{
	count = value;
}

void Chunk::_bind_methods() {

	ClassDB::bind_method(D_METHOD("add", "value"), &Chunk::add);
	ClassDB::bind_method(D_METHOD("reset"), &Chunk::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Chunk::get_total);
	ClassDB::bind_method(D_METHOD("set_total"), &Chunk::set_total);
	
	ADD_GROUP("Test", "");
	ADD_PROPERTY(PropertyInfo(Variant::INT, "value", PROPERTY_HINT_NONE, "", PROPERTY_USAGE_EDITOR), "set_total", "get_total");
}

Chunk::Chunk()
{
	count = 0;
}