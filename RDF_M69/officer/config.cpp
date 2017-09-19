class CfgPatches
{
	class RDF_M11_U_Officer_K
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = 
		{
		    "A3_Data_F",
		    "A3_Weapons_F",
		    "A3_Characters_F",
		    "A3_Characters_F_BLUFOR"
		};
    };
};
class CfgVehicles
{
    class B_Soldier_base_F;
    class B_Officer_MTP: B_Soldier_base_F
	{
		author="Phantom hawk";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_officer_s"
				};
				speechPlural[]=
				{
					"veh_infantry_officer_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural="$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound="veh_infantry_officer_s";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_officer_F.jpg";
		_generalMacro="B_officer_F";
		model ="\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		uniformClass="RDF_M11_U_Officer";
		hiddenSelectionsTextures[] = 
		{
			"\RDF_M69\data\Jacket_officer.paa",
		    "\RDF_M69\data\Uniform.paa"
		};  
        hiddenSelections[] = 
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"\RDF_M69\data\officer.rvmat"
		};
		scope=2;
		displayName="$STR_B_officer_F0";
		identityTypes[]=
		{
			"LanguageENGB_F",
			"Head_NATO",
			"G_NATO_casual"
		};
		weapons[]=
		{
			"arifle_MX_Hamr_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_MX_Hamr_pointer_F",
			"hgun_Pistol_heavy_01_MRD_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
;		};
		cost=600000;
		camouflage=1.6;
		icon="iconManOfficer";
		role="Rifleman";
		linkedItems[]=
		{
			"V_BandollierB_rgr",
			"H_MilCap_MTP",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_BandollierB_rgr",
			"H_MilCap_MTP",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadGearItem;
	class RDF_M11_U_Officer: Uniform_Base
	{
		author="Phantom hawk";
		scope=2;
		displayName="RDF M69 MTP (Officer)";
		picture="\A3\characters_f\data\ui\icon_U_IR_Officer_spc_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[] = 
		{
			"\RDF_M69\data\suitpack.paa"
		};  
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Officer_MTP";
			containerClass="Supply40";
			mass=40;
		};
	};
};
