#pragma once

#include "scene/3d/spatial.h"
#include "reference.h"

class Chunk : public Spatial
{
	GDCLASS(Chunk, Spatial);
public:
	int count;

protected:
	static void _bind_methods();

public:
	void add(int value);
	void reset();
	int get_total() const;
	void set_total(int value);

	Chunk();
};
