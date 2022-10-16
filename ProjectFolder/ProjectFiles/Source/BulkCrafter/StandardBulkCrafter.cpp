#include "StandardBulkCrafter.h"

StandardBulkCrafter::StandardBulkCrafter(CoordinateInBlocks origin)
{
	this->origin = origin;
	this->active = false;
}

bool StandardBulkCrafter::isActive()
{
	return active;
}

CoordinateInBlocks StandardBulkCrafter::getOrigin()
{
	return origin;
}
