class CfgPatches
{
	class TKRU_25thAuxiliaryMod 
	{
		units[]=
		{
			"TKRU_Bag_Standard", 
			"TKRU_Bag_Light", 
			"TKRU_Bag_Medic", 
			"TKRU_Bag_RTO", 
			"TKRU_Bag_RTOAttachment", 
			"TKRU_Bag_EOD", 
			"TKRU_Bag_ARC", 
			"TKRU_Bag_J12Jetpack", 
			"TKRU_Bag_Jumppack", 
			"TKRU_Bag_JumppackNCO", 
			"TKRU_Bag_CW",
			"TKRU_CR", 
			"TKRU_CT",
			"TKRU_SCT",
			"TKRU_VCT",
			"TKRU_SCP",
			"TKRU_CP",
			"TKRU_CS",
			"TKRU_CSM",
			"TKRU_CL",
			"TKRU_CMJ",
			"TKRU_EOD",
			"TKRU_CMC",
			"TKRU_CM",
			"TKRU_CIC",
			"TKRU_CI",
			"TKRU_Snow_Uniform",
			"TKRU_Howzer",
			"TKRU_Shake",
			"TKRU_Quill",
			"TKRU_Kru",
			"TKRU_Marksman",
			"TKRU_Heavy",
			"TKRU_Grenadier",
			"TKRU_AntiTank",
			"TKRU_ColdWeather_Trooper",
			"TKRU_Orus_CT",

		};
		weapons[]=
		{
			"TKRU_NVG_Rangefinder",
			"TKRU_NVG_Chip",
			"TKRU_NVG_Visor",
			"TKRU_NVG_VisorNCO",
			"TKRU_Helmet_CR",
			"TKRU_Helmet_CT",
			"TKRU_Helmet_SCT",
			"TKRU_Helmet_VCT",
			"TKRU_Helmet_SCP",
			"TKRU_Helmet_CP",
			"TKRU_Helmet_CS",
			"TKRU_Helmet_EOD",
			"TKRU_Helmet_CMC",
			"TKRU_Helmet_CM",
			"TKRU_Helmet_CIC",
			"TKRU_Helmet_CI",
			"TKRU_Helmet_ARC",
			"TKRU_Helmet_BARC",
			"TKRU_Helmet_Orus_CT",
			"TKRU_Helmet_ColdWeather_Trooper",
			"TKRU_Helmet_ColdWeather_NCO",
			"TKRU_Helmet_ColdWeather_Officer",
			"TKRU_Helmet_CXC",
			"TKRU_Helmet_CX",
			"TKRU_Helmet_Howzer",
			"TKRU_Helmet_Shake",
			"TKRU_Helmet_Quill",
			"TKRU_Helmet_BARC_Quill",
			"TKRU_Helmet_Kru",
			"TKRU_Helmet_Echo",
			"TKRU_Helmet_Recruit",
			"TKRU_Helmet_Monte",
			"TKRU_CR",
			"TKRU_CT",
			"TKRU_SCT",
			"TKRU_VCT",
			"TKRU_SCP",
			"TKRU_CP",
			"TKRU_CS",
			"TKRU_EOD",
			"TKRU_CMC",
			"TKRU_CM",
			"TKRU_CIC",
			"TKRU_CI",
			"TKRU_ColdWeather_Trooper",
			"TKRU_ColdWeather_NCO",
			"TKRU_ColdWeather_Officer",
			"TKRU_Orus_CT",
			"TKRU_Howzer",
			"TKRU_Shake",
			"TKRU_Quill",
			"TKRU_Kru",
			"TKRU_Vest_Trooper",
			"TKRU_Vest_SCP",
			"TKRU_Vest_CP",
			"TKRU_Vest_CS",
			"TKRU_Vest_CSM",
			"TKRU_Vest_CL",
			"TKRU_Vest_CMJ",
			"TKRU_Vest_Medic",
			"TKRU_Vest_Heavy",
			"TKRU_Vest_ARC",
			"TKRU_Vest_ColdWeather"
		};
		requiredAddons[] = 
		{ 
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"JLTS_characters_CloneLegions"
		};
	};
	author="TrooperKru";
};
class CfgFactionClasses {							
	class TKRU_25thHowzerCorps {							
		displayName = "25th Howzer Corps";				
		side = 1;									
	};
};

class CfgEditorSubcategories						
{	class TKRU_25thHowzerCorps_Clones							
	{
		displayName="25th Clones";				
	};
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
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetP2_illum;
	class JLTS_CloneHelmetP2MC;
	class JLTS_CloneHelmetP2MC_illum;
	class JLTS_CloneHelmetSC;
	class JLTS_CloneHelmetSCC;
	class JLTS_CloneHelmetAB;
	class JLTS_CloneHelmetAB_illum;
	class JLTS_CloneHelmetARC;
	class JLTS_CloneHelmetARC_illum;
	class JLTS_CloneHelmetBARC;
	class JLTS_CloneHelmetBARC_illum;
	class 3as_P2_Pilot_helmet;
	class 25th_Snow_Helmet;
	class 25th_Snow_Helmet_Officer;
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
	class JLTS_CloneVestAirborne;
	class JLTS_CloneVestAirborneNCO;
	class JLTS_CloneVestARC;
	class JLTS_CloneVestARCCadet;
	class JLTS_CloneVestPurge;
	class 25th_Snow_Uniform;
	class JLTS_CloneArmor;
	class JLTS_CloneArmorRecon;
	class JLTS_CloneArmorGrenadier;
	class JLTS_CloneArmorSupport;
	class JLTS_CloneArmorMC;
	

	class TKRU_NVG_Chip: JLTS_nvg_droid_chip_1
	{
		author="TrooperKru";								
		scope=2;									
		displayName="[25th] NVG Chip ";		
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\Core_mod\nvg_optic_dummy_p3d",					
		};
	};
	class TKRU_NVG_Visor: JLTS_CloneNVG_spec 
	{
		author="TrooperKru";
		displayName="[25th] NVG Visor - Specialist";
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy_p3d";	
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\NVGs\25th_NVG_Visor.paa" 
		};
	};
	class TKRU_NVG_VisorNCO: JLTS_CloneNVG 
	{
		author="TrooperKru";
		displayName="[25th] NVG Visor - NCO";
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy_p3d";	
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\NVGs\25th_NVG_VisorNCO.paa" 
		};
	};
	class TKRU_NVG_Rangefinder: JLTS_CloneNVGRange 
	{
		author="TrooperKru";
		displayName="[25th] NVG Rangefinder";
		modelOptics="\MRC\JLTS\Core_mod\nvg_optic_dummy_p3d";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\NVGs\25th_NVG_Rangefinder.paa" 
		};
	};
	class TKRU_Helmet_CR: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Cadet";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CR.paa" 
		};
	};
	class TKRU_Helmet_CT: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Trooper";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CT.paa" 
		};
	};
	class TKRU_Helmet_SCT: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Senior Trooper";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_SCT.paa" 
		};
	};
	class TKRU_Helmet_VCT: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Veteran Trooper";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_VCT.paa" 
		};
	};
	class TKRU_Helmet_SCP: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Specialist";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_SCP.paa"  
		};
	};
	class TKRU_Helmet_CP: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Corporal";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CP.paa"  
		};
	};
	class TKRU_Helmet_CS: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Sergeant";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CS.paa"  
		};
	};
	class TKRU_Helmet_EOD: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - EOD";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_EOD.paa" 
		};
	};
	class TKRU_Helmet_CMC: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Medic Cadet";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CMC.paa" 
		};
	};
	class TKRU_Helmet_CM: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - Medic";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CM.paa" 
		};
	};
	class TKRU_Helmet_CIC: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 -RTO Cadet";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CIC.paa" 
		};
	};
	class TKRU_Helmet_CI: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF P2 - RTO";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CI.paa" 
		};
	};
	class TKRU_Helmet_ARC: JLTS_CloneHelmetARC
	{
		author="TrooperKru";
		displayName="[25th] ARC P1.5 - Placeholder";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_1.5.paa" 
		};
	};
	class TKRU_Helmet_BARC: JLTS_CloneHelmetBARC
	{
		author="TrooperKru";
		displayName="[25th] BARC - [Placeholder]";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_BARC.paa" 
		};
	};
	class TKRU_Helmet_Orus_CT: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] JET P2 - Trooper";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Orus_CT.paa" 
		};
	};
	class TKRU_Helmet_ColdWeather_Trooper: 25th_Snow_Helmet
	{
		author="TrooperKru";
		displayName="[25th] CW - Trooper ";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CW_Trooper.paa" 
		};
	};
	class TKRU_Helmet_ColdWeather_NCO: 25th_Snow_Helmet
	{
		author="TrooperKru";
		displayName="[25th] CW - NCO [Placeholder]";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CW_Trooper.paa" 
		};
	};
	class TKRU_Helmet_ColdWeather: 25th_Snow_Helmet_Officer
	{
		author="TrooperKru";
		displayName="[25th] CW - Officer ";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CW_Officer.paa" 
		};
	};
	class TKRU_Helmet_CXC: 3as_P2_Pilot_helmet
	{
		author="TrooperKru";
		displayName="[25th] AVI P2 - CXC";
		hiddenSelections[] = 
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CXC.paa",
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CXC.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CXC.paa",
			""
		};
	};
	class TKRU_Helmet_CX: 3as_P2_Pilot_helmet
	{
		author="TrooperKru";
		displayName="[25th] AVI P2 - CX";
		hiddenSelections[] = 
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CX.paa",
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CX.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_CX.paa",
			""
		};
	};
	class TKRU_Helmet_Howzer: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF Custom P2 - Howzer";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Howzer.paa" 
		};
	};
	class TKRU_Helmet_Shake: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF Custom P2 - Shake";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Shake.paa" 
		};
	};
	class TKRU_Helmet_Quill: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF Custom P2 - Quill";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Quill.paa" 
		};
	};
	class TKRU_Helmet_BARC_Quill: JLTS_CloneHelmetBARC
	{
		author="TrooperKru";
		displayName="[25th] BARC Custom - Quill";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_BARC_Quill.paa" 
		};
	};
	class TKRU_Helmet_Kru: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF Custom P2 - Kru";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Kru.paa" 
		};
	};
	class TKRU_Helmet_Echo: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF Custom P2 - Echo";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Echo.paa" 
		};
	};
	class TKRU_Helmet_Recruit: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF Custom P2 - Recruit";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Recruit.paa" 
		};
	};
	class TKRU_Helmet_Monte: JLTS_CloneHelmetP2
	{
		author="TrooperKru";
		displayName="[25th] INF Custom P2 - Monte";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Helmets\25th_Helmet_Monte.paa" 
		};
	};
	class TKRU_Vest_Trooper: JLTS_CloneVestHolster
	{
		author="TrooperKru";
		displayName="[25th] Vest - Holster"; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Suspenders.paa"
		};
	};
	class TKRU_Vest_SCP: JLTS_CloneVestSuspender
	{
		author="TrooperKru";
		displayName="[25th] Vest - Suspenders"; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Suspenders.paa"
		};
	};
	class TKRU_Vest_CP: JLTS_CloneVestReconNCO
	{
		author="TrooperKru";
		displayName="[25th] Vest - Corporal"; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Heavy.paa"
		};
	};
	class TKRU_Vest_CS: JLTS_CloneVestKama
	{
		author="TrooperKru";
		displayName="[25th] Vest - Sergeant"; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Officer.paa"
		};
	};
	class TKRU_Vest_CSM: JLTS_CloneVestReconOfficer
	{
		author="TrooperKru";
		displayName="[25th] Vest - Sergeant Major "; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Officer.paa",
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Heavy.paa"
		};
	};
	class TKRU_Vest_CL: JLTS_CloneVestLieutenant
	{
		author="TrooperKru";
		displayName="[25th] Vest - Lieutenant"; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Officer.paa"
		};
	};
	class TKRU_Vest_CMJ: JLTS_CloneVestOfficer
	{
		author="TrooperKru";
		displayName="[25th] Vest - Major"; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Officer.paa"
		};
	};
	class TKRU_Vest_Medic: JLTS_CloneVestAirborne
	{
		author="TrooperKru";
		displayName="[25th] Vest - Medic"; 
		hiddenSelectionsTextures[]=
		{
			"",
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Medic.paa"
		};
	};
	class TKRU_Vest_Heavy: JLTS_CloneVestAirborne
	{
		author="TrooperKru";
		displayName="[25th] Vest - Heavy"; 
		hiddenSelectionsTextures[]=
		{
			"",
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_Heavy.paa"
		};
	};
	class TKRU_Vest_ARC: JLTS_CloneVestARC
	{
		author="TrooperKru";
		displayName="[25th] Vest - ARC"; 
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_ARC.paa"
		};
	};
	class TKRU_Vest_ColdWeather: JLTS_CloneVestKama
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
			"TKRU_25thAuxiliaryMod\skins\Vests\25th_Vest_CW.paa",
			""
		};
	};
	class TKRU_CR: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Cadet";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CR"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CT: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Trooper";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CT"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_SCT: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Senior Trooper";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_SCT"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_VCT: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Veteran Trooper";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_VCT"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_SCP: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Specialist ";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_SCP"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CP: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Corporal";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CP"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CS: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Sergeant";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CS"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CSM: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Sergeant Major [PLACEHOLDER]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CSM"; 
			containerClass="Supply250"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_EOD: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - EOD";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_EOD"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CMC: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Medic Cadet";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CMC"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CM: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - Medic";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CM"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CIC: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - RTO Cadet";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CIC"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_CI: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF - RTO";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_CI"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_ColdWeather_Trooper: 25th_Snow_Uniform
	{
	    author="TrooperKru";
		displayName="[25th] CW - Trooper";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_ColdWeather_Trooper"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_ColdWeather_NCO: 25th_Snow_Uniform
	{
	    author="TrooperKru";
		displayName="[25th] CW - NCO [Placeholder]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_ColdWeather_NCO"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_ColdWeather_Officer: 25th_Snow_Uniform
	{
	    author="TrooperKru";
		displayName="[25th] CW - Officer [Placeholder]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_ColdWeather_Officer"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_Orus_CT: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] JET - Trooper";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_Orus_CT"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_Howzer: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF Custom - Howzer [Placeholder]";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_Howzer"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_Shake: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF Custom - Shake";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_Shake"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_Kru: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF Custom - Kru";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_Kru"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
	class TKRU_Quill: JLTS_CloneArmor
	{
	    author="TrooperKru";
		displayName="[25th] INF Custom - Quill";
		class ItemInfo: UniformItem
		{
			uniformType = "Neopren"; 
			uniformClass="TKRU_Quill"; 
			containerClass="Supply300"; 
			mass=40;
			vestType="Rebreather"; 
		};
	};
};
class CfgVehicles
{
	class JLTS_Clone_P2_DC15A;
	class JLTS_Clone_P2_DC15AUGL;
	class JLTS_Clone_P2_DC15S;
	class JLTS_Clone_P2_ARC;
	class JLTS_Clone_P2_DP23;
	class JLTS_Clone_P2_jump;
	class JLTS_Clone_P2_medic;
	class JLTS_Clone_P2_marksman;
	class JLTS_Clone_P2_EOD;
	class JLTS_Clone_P2_RTO;
	class JLTS_Clone_P2_UAV_prowler;
	class JLTS_Clone_P2_AT;
	class JLTS_Clone_P2_AR;
	class JLTS_Clone_P2_recon;
	class JLTS_Clone_P2_BARC;
	class JLTS_Clone_P2_AB;
	class JLTS_Clone_P2_ABNCO;
	class JLTS_Clone_P2_corporal;
	class JLTS_Clone_P2_sergeant;
	class JLTS_Clone_P2_sergeantmajor;
	class JLTS_Clone_P2_lieutenant;
	class JLTS_Clone_P2_captain;
	class JLTS_Clone_P2_major;
	class JLTS_Clone_P2_commander;
	class JLTS_Clone_P2_marshalcommander;
	class 25th_Trooper_Snow;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_s;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_backpack_s_RTO;
	class JLTS_Clone_jumppack_mc;
	class JLTS_Clone_jumppack;
	class JLTS_Clone_jumppack_JT12;
	class JLTS_Clone_jumppack_Chicken;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_ARC_backpack;
	class 25th_Snow_Backpack_LR;


	class TKRU_Bag_Standard: JLTS_Clone_backpack 
	{
		author="TrooperKru";
		displayname="[25th] Bag - Trooper";
		maximumload=450;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_Standard.paa"
		};
	};
	class TKRU_Bag_Light: JLTS_Clone_belt_bag
	{
		author="TrooperKru";
		displayname="[25th] Bag - Light";
		maximumload=450;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_Light.paa"
		};
	};
	class TKRU_Bag_Medic: JLTS_Clone_backpack 
	{
		author="TrooperKru";
		displayname="[25th] Bag - Medic";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_Medic.paa"
		};
	};
	class TKRU_Bag_RTO: JLTS_Clone_backpack_RTO 
	{
		author="TrooperKru";
		displayname="[25th] Bag - Radio";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_RTO.paa"
		};
	};
	class TKRU_Bag_RTOAttachment: JLTS_Clone_RTO_pack 
	{
		author="TrooperKru";
		displayname="[25th] Bag - Radio Attachment";
		maximumload=550;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_RTOAttachment.paa"
		};
	};
	class TKRU_Bag_EOD: JLTS_Clone_backpack 
	{
		author="TrooperKru";
		displayname="[25th] Bag - EOD";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_EOD.paa"
		};
	};
	class TKRU_Bag_ARC: JLTS_Clone_ARC_backpack
	{
		author="TrooperKru";
		displayname="[25th] Bag - ARC";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_ARC.paa"
		};
	};
	class TKRU_Bag_J12Jetpack: JLTS_Clone_jumppack_JT12 
	{
		author="TrooperKru";
		displayname="[25th] Bag - J12 Jetpack";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_J12Jetpack.paa"
		};
	};
	class TKRU_Bag_Jumppack: JLTS_Clone_jumppack
	{
		author="TrooperKru";
		displayname="[25th] Bag - Jumppack - Trooper";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_Jumppack.paa"
		};
	};
	class TKRU_Bag_JumppackNCO: 25th_Snow_Backpack_LR
	{
		author="TrooperKru";
		displayname="[25th] Bag - Jumppack - NCO";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_JumppackNCO.paa"
		};
	};
	class TKRU_Bag_CW: 25th_Snow_Backpack_LR 
	{
		author="TrooperKru";
		displayname="[25th] Bag - CW";
		maximumload=600;
		hiddenselectionstextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Backpacks\25th_Bag_CW.paa"
		};
	};
	class TKRU_CR: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Cadet"; 
		uniformclass="TKRU_CR"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_Standard";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CR.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CR.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CR",
			"TKRU_Vest_Holster",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CR",
			"TKRU_Vest_Holster",

		};
	};	
	class TKRU_CT: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Trooper"; 
		uniformclass="TKRU_CT"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_Standard";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CT.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CT.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CT",
			"TKRU_Vest_Holster",

		};
		respawnLinkedItems[]=  
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CT",
			"TKRU_Vest_Holster",

		};
	};
	class TKRU_SCT: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Senior Trooper"; 
		uniformclass="TKRU_SCT"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_Standard";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_SCT.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_SCT.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_SCT",
			"TKRU_Vest_Holster",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_SCT",
			"TKRU_Vest_Holster",
		};
	};
	class TKRU_VCT: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Veteran Trooper"; 
		uniformclass="TKRU_VCT"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_Light";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_VCT.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_VCT.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_VCT",
			"TKRU_Vest_Holster",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_VCT",
			"TKRU_Vest_Holster",
		};
	};
	class TKRU_SCP: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Specialist"; 
		uniformclass="TKRU_SCP"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_Light";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_SCP.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_SCP.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_Visor", 
			"TKRU_Helmet_SCP",
			"TKRU_Vest_Suspenders",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_Visor", 
			"TKRU_Helmet_SCP",
			"TKRU_Vest_Suspenders",
		};
	};
	class TKRU_CP: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Corporal"; 
		uniformclass="TKRU_CP"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTOAttachment";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CP.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CP.paa",
		};
		linkedItems[]=
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CP",
			"TKRU_Vest_CP",

		};
		respawnLinkedItems[]=
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CP",
			"TKRU_Vest_CP",
		};
	};
	class TKRU_CS: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Sergeant"; 
		uniformclass="TKRU_CS"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTOAttachment";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CS.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CS.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",
		};
	};
	class TKRU_CIC: JLTS_Clone_P2_RTO   
	{
		author="TrooperKru";
		displayName="25th RTO Cadet"; 
		uniformclass="TKRU_CIC"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTO";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CIC.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CIC.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CIC",
			"TKRU_Vest_Holster",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CIC",
			"TKRU_Vest_Holster",
		};
	};
	class TKRU_CI: JLTS_Clone_P2_RTO   
	{
		author="TrooperKru";
		displayName="25th RTO"; 
		uniformclass="TKRU_CI"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTO";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CI.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CI.paa",
		};
		linkedItems[]=
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CI",
			"TKRU_Vest_Holster",

		};
		respawnLinkedItems[]=
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CI",
			"TKRU_Vest_Holster",
		};
	};
	class TKRU_CMC: JLTS_Clone_P2_medic
	{
		author="TrooperKru";
		displayName="25th Medic Cadet"; 
		uniformclass="TKRU_CMC"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_Medic";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CMC.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CMC.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CMC",
			"TKRU_Vest_Medic",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CMC",
			"TKRU_Vest_Medic",
		};
	};
	class TKRU_CM: JLTS_Clone_P2_medic   
	{
		author="TrooperKru";
		displayName="25th Medic"; 
		uniformclass="TKRU_CM"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_Medic";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CM.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CM.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CM",
			"TKRU_Vest_Medic",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_CM",
			"TKRU_Vest_Medic",
		};
	};
	class TKRU_EOD: JLTS_Clone_P2_EOD   
	{
		author="TrooperKru";
		displayName="25th EOD"; 
		uniformclass="TKRU_EOD"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_EOD";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_EOD.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_EOD.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_EOD",
			"TKRU_Vest_Suspenders",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_EOD",
			"TKRU_Vest_Suspenders",
		};
	};
	class TKRU_ColdWeather_Trooper: 25th_Trooper_Snow 
	{
		author="TrooperKru";
		displayName="25th Cold Weather"; 
		uniformclass="TKRU_ColdWeather_Trooper"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_CW";
		hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "CamoB"
        };
        hiddenSelectionsTextures[]=
        {
            "TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CW_Trooper.paa",
            "TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CW.paa",
            "222nd_Armor\Data\Uniforms\222nd_Undersuit_Snow.paa"
        };
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_ColdWeather_Trooper",
			"TKRU_Vest_ColdWeather",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_ColdWeather_Trooper",
			"TKRU_Vest_ColdWeather",
		};
	};
	class TKRU_ColdWeather_NCO: 25th_Trooper_Snow  
	{
		author="TrooperKru";
		displayName="25th Cold Weather NCO"; 
		uniformclass="TKRU_ColdWeather_NCO"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_CW";
		hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "CamoB"
        };
        hiddenSelectionsTextures[]=
        {
            "TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CW_Trooper.paa",
            "TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CW.paa",
            "222nd_Armor\Data\Uniforms\222nd_Undersuit_Snow.paa"
        };
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_ColdWeather_Trooper",
			"TKRU_Vest_ColdWeather",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_ColdWeather_Trooper",
			"TKRU_Vest_ColdWeather",
		};
	};
	class TKRU_ColdWeather_Officer: 25th_Trooper_Snow 
	{
		author="TrooperKru";
		displayName="25th Cold Weather Officer"; 
		uniformclass="TKRU_ColdWeather_Officer"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_CW";
		hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "CamoB"
        };
        hiddenSelectionsTextures[]=
        {
            "TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_CW_Trooper.paa",
            "TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_CW.paa",
            "222nd_Armor\Data\Uniforms\222nd_Undersuit_Snow.paa"
        };
		linkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_ColdWeather_Officer",
			"TKRU_Vest_ColdWeather",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_chip", 
			"TKRU_Helmet_ColdWeather_Officer",
			"TKRU_Vest_ColdWeather",
		};
	};
	class TKRU_ORUS_CT: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Orus Trooper"; 
		uniformclass="TKRU_Orus_CT"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTOAttachment";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_Orus_CT.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_Orus_CT.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",
			
		};
	};
	class TKRU_Howzer: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Captain Howzer"; 
		uniformclass="TKRU_Howzer"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTOAttachment";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_Howzer.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_Howzer.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",
			
		};
	};
	class TKRU_Shake: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Captain Howzer"; 
		uniformclass="TKRU_Shake"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTOAttachment";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_Shake.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_Shake.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",
			
		};
	};
	class TKRU_Kru: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Captain Howzer"; 
		uniformclass="TKRU_Kru"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTOAttachment";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_Kru.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_Kru.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",
			
		};
	};
	class TKRU_Quill: JLTS_Clone_P2_DC15A   
	{
		author="TrooperKru";
		displayName="25th Captain Howzer"; 
		uniformclass="TKRU_Quill"; 
		faction="TKRU_25thHowzerCorps"; 
	    editorSubcategory="TKRU_25thHowzerCorps_Clones"; 
		backpack="TKRU_Bag_RTOAttachment";
		hiddenSelectionsTextures[]=
		{
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Upper_Quill.paa", 
			"TKRU_25thAuxiliaryMod\skins\Armors\25th_Lower_Quill.paa",
		};
		linkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",

		};
		respawnLinkedItems[]= 
		{
			"TKRU_NVG_VisorNCO", 
			"TKRU_Helmet_CS",
			"TKRU_Vest_CS",
			
		};
	};
};	