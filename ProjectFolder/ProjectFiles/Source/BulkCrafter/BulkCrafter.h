#pragma once
#include "..\GameAPI.h"

// Interface for the Bulk Crafter - read-only.
class BulkCrafter {
public:
	/*
	* Whether the Bulk Crafter is active.
	* 
	* @return Whether the Bulk Crafter is active.
	*/
	virtual bool isActive() = 0;

	/*
	* Get the origin point of the Bulk Crafter multiblock.
	* 
	* @return The origin point of the Bulk Crafter multiblock.
	*/
	virtual CoordinateInBlocks getOrigin() = 0;
};