class CfgPatches
{
	class ChernobylZone_c
	{
		author = "MAXIMILI";
		name = "Chernobyl Zone Config";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Surfaces"};
	};
};

class CfgWorlds
{
	class DefaultLighting;
	class CAWorld;
	class ChernarusPlus: CAWorld
	{
		class Grid;
	};
	class ChernobylZone: ChernarusPlus
	{
		worldId = 3;
		description = "ChernobylZone";
		icon = "";
		worldName = "chz\ChernobylZone\ChernobylZone.wrp";
		pictureMap = "";
		pictureShot = "";
		/*
		oceanMaterial = "{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanNiceMaterial = "{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanStormMaterial = "{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		*/
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		class Navmesh;
		class Clutter;
		longitude = 30;
		latitude = -56;
		soundMapAttenCoef = 0.01;
		class SoundMapValues
		{
			treehard = 0.03;
			treesoft = 0.03;
			bushhard = 0;
			bushsoft = 0;
			forest = 1;
			house = 0.3;
			church = 0.5;
		};
		class AISpawnerParams{};
		class OutsideTerrain
		{
			satellite = "chz\ChernobylZone\data\s_satout_co.paa";
			enableTerrainSynth = "true";
			class Layers
			{
				class Layer0
				{
					nopx = "DZ\surfaces\data\terrain\cp_grass_nopx.paa";
					texture = "DZ\surfaces\data\terrain\cp_grass_ca.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = -15360;
			class Zoom1
			{
				zoomMax = 0.5;
				format = "XY";
				formatX = "Aa";
				formatY = "00";
				stepX = 200;
				stepY = 200;
			};
			class Zoom2
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "A";
				formatY = "0";
				stepX = 2000;
				stepY = 2000;
			};
		};
		startTime = "8:30";
		startDate = "01/05/1993";
		startWeather = 0.1;
		startFog = 0;
		forecastWeather = 0.3;
		forecastFog = 0;
		seagullPos[] = {1272.842,150,14034.962};
		centerPosition[] = {2500,2500,300};
		ilsPosition[] = {2545,3000};
		ilsDirection[] = {0,0.08,1};
		ilsTaxiIn[] = {2495,2725,2495,2850,2508,2860,2508,3000,2520,3010,2545,3000};
		ilsTaxiOff[] = {2545,2445,2520,2425,2495,2445,2495,2725};
		drawTaxiway = "false";
		class SecondaryAirports{};
		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		class Lighting: DefaultLighting{};
		clutterGrid = 1.11;
		clutterDist = 55;
		noDetailDist = 40;
		fullDetailDist = 10;
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 4;
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = 0;
			minSlope = 0.02;
		};
		class Ambient
		{
			class BigInsects
			{
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species{};
			};
			class BigInsectsAquatic
			{
				radius = 20;
				cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species{};
			};
			class SmallInsects
			{
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species{};
			};
			class NightInsects
			{
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species{};
			};
			class WindClutter
			{
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindGrass2
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindRock1
					{
						probability = "0.4 * hills";
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
			class NoWindClutter
			{
				radius = 15;
				cost = 8;
				class Species
				{
					class FxWindPollen1
					{
						probability = 1;
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
		};
		class Names{};
	};
};

class CfgWorldList
{
	class ChernobylZone {};
};

#include "CfgSurfaces.hpp"