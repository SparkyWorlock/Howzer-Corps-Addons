class CfgPatches
{
	class HCA_25thAuxiliaryMod 
	{
		weapons[]=
		{
			"HCA_Vest_Trooper",
			"HCA_Vest_SCP",
			"HCA_Vest_CP",
			"HCA_Vest_CS",
			"HCA_Vest_CSM",
			"HCA_Vest_CL",
			"HCA_Vest_CMJ",
			"HCA_Vest_Medic",
			"HCA_Vest_Heavy",
			"HCA_Vest_ARC",
			"HCA_Vest_ColdWeather"
		};
		requiredAddons[] = 
		{ 
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"JLTS_characters_CloneLegions"
		};
	};
	author="Spark";
};

class CfgWeapons 
{
	class ItemInfo;
	class UniformItem;
	
	class JLTS_CloneVestHolster;
	class JLTS_CloneVestSuspender;
	class JLTS_CloneVestKama;
	class JLTS_CloneVestLieutenant;
	class JLTS_CloneVestOfficer;
	class JLTS_CloneVestOfficer2;
	class JLTS_CloneVestCommander;
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestReconNCO;
	class JLTS_CloneVestReconOfficer;
	class JLTS_CloneVestARC;
	class JLTS_CloneVestARCCadet;
	
	class HCA_Vest_Trooper: V_RebreatherB
	{
		author="Spark";
		displayName="[25th] Vest - Holster"; 
		picture="\MRC\JLTS\characters\CloneArmor2\data\ui\CloneVestHolster_ui_ca.paa";
		hiddenSelectionsTextures[]= {"HCA_Armor\HCA_Vests\HCA_Vest_Suspenders"};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			vestType = "Rebreather";
		};		
	};
	
	class HCA_Vest_SCP: V_RebreatherB
	{
		author="Spark";
		displayName="[25th] Vest - Suspenders"; 
		hiddenSelectionsTextures[] = {"HCA_Armor\HCA_Vests\HCA_Vest_Suspenders"};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestSuspender.p3d";
			vestType = "Rebreather";
		};	
		class ItemInfo: VestItem
		{
			uniformType="Default";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
			vestType = "Rebreather";
		};	
	};
	
	class HCA_Vest_CP: JLTS_CloneVestReconNCO
	{
		author="Spark";
		displayName="[25th] Vest - Corporal"; 
		hiddenSelectionsTextures[]= {"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Heavy"};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			vestType = "Rebreather";
		};	
	};
	
	class HCA_Vest_CS: V_RebreatherB
	{
		author="Spark";
		displayName="[25th] Vest - Sergeant"; 
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestPauldron_ui_ca.paa";
		hiddenSelectionsTextures[] = {"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Officer"};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
			vestType = "Rebreather";
		};
	};
	
	class HCA_Vest_CSM: JLTS_CloneVestReconOfficer
	{
		author="TrooperKru";
		displayName="[25th] Vest - Sergeant Major "; 
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Officer",
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Heavy"
		};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
			vestType = "Rebreather";
		};	
	};
	
	class HCA_Vest_CL: JLTS_CloneVestLieutenant
	{
		author="TrooperKru";
		displayName="[25th] Vest - Lieutenant"; 
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Officer"
		};
	};
	class HCA_Vest_CMJ: JLTS_CloneVestOfficer
	{
		author="Spark";
		displayName="[25th] Vest - Major"; 
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Officer"
		};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			vestType = "Rebreather";
		};
	};
	
	class HCA_Vest_Medic: JLTS_CloneVestAirborne
	{
		author="TrooperKru";
		displayName="[25th] Vest - Medic"; 
		hiddenSelectionsTextures[]=
		{
			"",
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Medic"
		};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		};
	};
	class HCA_Vest_Heavy: JLTS_CloneVestAirborne
	{
		author="TrooperKru";
		displayName="[25th] Vest - Heavy"; 
		hiddenSelectionsTextures[]=
		{
			"",
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_Heavy"
		};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
		};
	};
	class HCA_Vest_ARC: JLTS_CloneVestARC
	{
		author="TrooperKru";
		displayName="[25th] Vest - ARC"; 
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_ARC"
		};
		class ItemInfo: VestItem
		{
			uniformType="Default";
			vestType = "Rebreather";
			hiddenSelections[] = {"camo1"};
		};
	};
	class HCA_Vest_ColdWeather: JLTS_CloneVestKama
	{
		author="TrooperKru";
		displayName="[25th] Vest - CW"; 
		hiddenSelections[]= 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"HC-Aux-Mod\Addons\HCA_Armor\HCA_Vests\HCA_Vest_CW",
			""
		};
	};
};