class CfgPatches
{
	class HCA_25thAuxiliaryMod 
	{
		weapons[]=
		{
			"HCA_Rangefinder",
			"HCA_NVG_Chip",
			"HCA_Spec_Visor",
			"HCA_NCOVisor",
		};
		requiredAddons[] = 
		{ 
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"JLTS_characters_CloneLegions",
			"A3_Weapons_F",
			"A3_Functions_F"
		};
	};
	author = "Sparks";
};

class CfgWeapons 
{
	class ItemInfo;
	class UniformItem;
	class JLTS_CloneNVGRange;
	class JLTS_CloneNVG;
	class JLTS_CloneNVG_spec;
	class JLTS_CloneNVGCC;
	class JLTS_CloneNVGMC;
	class JLTS_nvg_droid_chip_1;
	
	class HCA_NVG_Chip: JLTS_nvg_droid_chip_1
	{
		author="TrooperKru";								
		scope=2;									
		displayName="[25th] NVG Chip ";		
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\Core_mod\nvg_optic_dummy_p3d",					
		};
	};
	class HCA_Spec_Visor: JLTS_CloneNVG_spec 
	{
		author="TrooperKru";
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={4};
		displayName="[25th] NVG Visor - Specialist";
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Visors\HCA_Visor" 
		};
	};
	class HCA_NCOVisor: JLTS_CloneNVG 
	{
		author="TrooperKru";
		displayName="[25th] NVG Visor - NCO";
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={4};
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Visors\HCA_NCOVisor" 
		};
	};
	class HCA_Rangefinder: JLTS_CloneNVGRange 
	{
		author="TrooperKru";
		displayName="[25th] NVG Rangefinder";
		modelOptics="";
		useModelOptics=0;
		opticsDisablePeripherialVision=0;
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Visors\HCA_Rangefinder" 
		};
	};
};