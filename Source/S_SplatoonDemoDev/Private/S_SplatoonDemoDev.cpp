// Copyright Epic Games, Inc. All Rights Reserved.

#include "S_SplatoonDemoDev.h"

#define LOCTEXT_NAMESPACE "FS_SplatoonDemoDevModule"

void FS_SplatoonDemoDevModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FS_SplatoonDemoDevModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FS_SplatoonDemoDevModule, S_SplatoonDemoDev)