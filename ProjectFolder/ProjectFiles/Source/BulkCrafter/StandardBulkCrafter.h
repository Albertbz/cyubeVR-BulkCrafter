#pragma once
#include "BulkCrafter.h"

class StandardBulkCrafter : public BulkCrafter {
private:
	CoordinateInBlocks origin;
	bool active;

public:
	StandardBulkCrafter(CoordinateInBlocks origin);

	bool isActive();

	CoordinateInBlocks getOrigin();
};