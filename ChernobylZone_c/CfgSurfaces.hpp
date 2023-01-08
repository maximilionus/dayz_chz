class CfgSurfaces
{
	class DZ_SurfacesExt;
	class cp_grass;
	class cp_grass_tall;
	class cp_broadleaf_dense1;
	class cp_dirt;
	class cp_rock;
	class concrete_ext;
	class asphalt_ext;
	class wood_planks_ext;
	class metal_thick_ext;
	class fresh_water_ext;

	class chz_trava : cp_grass_tall
	{
		files = "chz_trava_*";
		character = "chz_GrassClutter";
	};
	class chz_les : cp_broadleaf_dense1
	{
		files = "chz_les_*";
		character = "chz_ForestClutter";
	};
	class chz_beton : concrete_ext
	{
		files = "chz_beton_*";
		character = "chz_empty";
	};
	class chz_soil : cp_grass
	{
		files = "chz_soil_*";
		character = "chz_soilClutter";
	};
	class chz_hlina : cp_grass
	{
		files = "chz_hlina_*";
		character = "chz_hlinaClutter";
	};
	//END OF MAP SURF
	class chz_surfHlina : cp_dirt
	{
		files = "chz_surf_hlina_*";
		character = "chz_empty";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0.03;
		surfaceFriction = 1.8;
		maxClutterColoringCoef = 1.35;
	};
	class chz_surfRoadDirt : cp_dirt
	{
		files = "chz_surf_roaddirt_*";
		character = "chz_empty";
		rough = 0.09;
		maxSpeedCoef = 0.9;
		dust = 0.5;
		lucidity = 1;
		grassCover = 0.03;
		surfaceFriction = 1.8;
		maxClutterColoringCoef = 1.35;
	};
	class chz_surfConcrete : asphalt_ext
	{
		files = "chz_surf_roadconcrete_*";
		character = "chz_empty";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		surfaceFriction = 2.0;
	};
	class chz_surfWood : wood_planks_ext
	{
		files = "chz_surf_wood_*";
		character = "chz_empty";
		rough = 0.05;
		dust = 0.01;
		lucidity = 0.7;
	};
	class chz_surfMetal : metal_thick_ext
	{
		files = "chz_surf_metal_*";
		character = "chz_empty";
		rough = 0.05;
		dust = 0;
		lucidity = 0.7;
		AIAvoidStance = 1;
	};
	class chz_surfWater : fresh_water_ext
	{
		files = "chz_surf_water_*";
		character = "chz_empty";
		friction = 0.9;
		restitution = 0;
		isWater = 1;
		rough = 0.05;
		dust = 0;
		lucidity = 1;
	};
	class chz_surfSterk : cp_rock
	{
		files = "chz_surf_sterk_*";
		character = "chz_empty";
		rough = 0.2;
		maxSpeedCoef = 0.8;
		dust = 0.5;
		lucidity = 3;
		grassCover = 0.0;
		surfaceFriction = 1.8;
		maxClutterColoringCoef = 1.35;
	};
};

class CfgSurfaceCharacters
{
	class chz_empty
	{
		probability[] = {0};
		names[] = {"ElytrigiaTall"};
	};
	class chz_GrassClutter
	{
		probability[] = {0.15000001, 0.050000001, 0, 0, 0, 0.69999999, 0.1};
		names[] =
			{
				"Anthoxanthum",
				"Anthoxanthum_bended",
				"Carduus",
				"Hypericum",
				"Elytrigia",
				"ElytrigiaGreen",
				"ElytrigiaTall"};
	};
	class chz_soilClutter
	{
		probability[] = {0.02, 0, 0.0099999998, 0.175};
		names[] =
			{
				"ElytrigiaDirt",
				"Lolium",
				"Taraxacum",
				"DirtGrass"};
	};
	class chz_hlinaClutter
	{
		probability[] = {0.32, 0.175, 0.2099999998};
		names[] =
			{
				"ElytrigiaDirt",
				"Lolium",
				"DirtGrass"};
	};

	class chz_ForestClutter
	{
		probability[] = {0, 0, 0, 0.025, 0, 0, 0, 0.25, 0.025, 0, 0.1, 0, 0, 0, 0, 0.15000001, 0, 0.050000001, 0.15000001, 0, 0, 0, 0.1};
		names[] =
			{
				"Anthoxanthum",
				"Anthoxanthum_bended",
				"Calamagrostis",
				"Carduus_f",
				"Elytrigia",
				"ElytrigiaGreen",
				"ElytrigiaTall",
				"ElytrigiaForest",
				"Hypericum_f",
				"Lolium",
				"Taraxacum",
				"DirtGrass",
				"Leafs_spread",
				"Broadleaf_Undergrowth",
				"Broadleaf_Undergrowth_Red",
				"Polypodiophyta_b",
				"PolypodiophytaTall",
				"Vaccinium",
				"VacciniumGreen",
				"VacciniumTall",
				"Cones",
				"SmallPicea",
				"Twigs_b"};
	};
};