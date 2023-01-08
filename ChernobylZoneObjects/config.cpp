class CfgPatches
{
	class ChernobylZoneObjects
	{
		author = "MAXIMILI";
		name = "Chernobyl Zone Objects";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ChernobylZoneTextures", "ChernobylZoneData"};
	};
};

class CfgNonAiVehicles
{
	class proxy_chz_janov_most_zabradli
	{
		model = "chz\ChernobylZoneObjects\zona\janov\chz_janov_most_zabradli.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
	class proxy_chz_park_kolo_kabina
	{
		model = "chz\ChernobylZoneObjects\pripjat_builds\chz_park_kolo_kabina.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
	class proxy_chz_park_auto
	{
		model = "chz\ChernobylZoneObjects\pripjat_builds\chz_park_auto.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
	class proxy_chz_trafo_1
	{
		model = "chz\ChernobylZoneObjects\draty\proxy\chz_trafo_1.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
	class proxy_chz_trafo_10
	{
		model = "chz\ChernobylZoneObjects\draty\proxy\chz_trafo_10.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
	class proxy_chz_trafo_2
	{
		model = "chz\ChernobylZoneObjects\draty\proxy\chz_trafo_2.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
	class proxy_chz_trafo_3
	{
		model = "chz\ChernobylZoneObjects\draty\proxy\chz_trafo_3.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
	class proxy_chz_trafo_4
	{
		model = "chz\ChernobylZoneObjects\draty\proxy\chz_trafo_4.p3d";
		autocenter = false;
		scope = 2;
		animated = true;
		reversed = false;
		simulation = "alwaysshow";
	};
};

class CfgEditorCategories
{
	class EdCat_ChernobylZone
	{
		displayName = "$STR_CHZO_CLASS_OBJS";
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_ChernobylZone_Objects
	{
		displayName = "$STR_CHZO_CLASS_SUB_OBJS";
	};
	class EdSubcat_ChernobylZone_Wrecks
	{
		displayName = "$STR_CHZO_CLASS_SUB_VRAKY";
	};
	class EdSubcat_ChernobylZone_Little
	{
		displayName = "$STR_CHZO_CLASS_SUB_DROBNOSTI";
	};
	class EdSubcat_ChernobylZone_Plants
	{
		displayName = "$STR_CHZO_CLASS_SUB_PLANTS";
	};
	class EdSubcat_ChernobylZone_Draty
	{
		displayName = "$STR_CHZO_CLASS_SUB_DRATY";
	};
};

class CfgVehicleClasses
{
	class ChernobylZone_Objects
	{
		displayName = "";
	};
};

class CfgVehicles
{
	class HouseBase;

	class House : HouseBase
	{
		class DestructionEffects;
	};

	class chz_objects_base : House
	{
		destrType = "DestructNo";
		vehicleClass = "ChernobylZone_Objects";
		editorCategory = "EdCat_ChernobylZone";
		editorSubcategory = "EdSubcat_ChernobylZone_Objects";
		author = "ArmanIII";
		icon = "chz\ChernobylZoneData\map_chzicon_ca.paa";
	};

	class chz_objects_ploty_base : chz_objects_base
	{
		destrType = "DestructTree";
	};

	class chz_objects_plants_base : chz_objects_base
	{
		destrType = "DestructTree";
		placement = "slope";
		editorSubcategory = "EdSubcat_ChernobylZone_Plants";
	};

#include "Objects.hpp"
};