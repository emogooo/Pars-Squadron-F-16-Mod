#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class ParsFiloPaketi
	{
		units[] = {"F16C_976016", "F16C_971905","F16C_971071", "F16C_973858", "F16C_971101", "F16D_971453"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"FIR_AirWeaponSystem_US", "FIR_F16_F", "FIR_PilotCrewPack_US"};
	};
};

class cfgFactionClasses
{
 	class ParsFilo
 	{
 		  displayName 	= "F-16 Pars Filo";
		  priority 		= 2; 
		  side 			= WEST;
 	};
};

class CfgVehicleClasses
{

	class EMOGO_Infantry
	{
		displayname = "Infantry (Others)";
	};
};

class CfgEditorSubcategories
{
	class EMOGO_Infantry
	{
		displayname = "Infantry (Others)";
	};
};	

class cfgWeapons
{
	
};

class CfgVehicles 
{	
	class FIR_F16_Base;
	class FIR_F16C:FIR_F16_Base
	{
		class Components;
	};

	class FIR_F16C_new: FIR_F16C
	{
		
		scope = private;
		class Components: Components
		{
			class TransportPylonsComponent;			
		};
	};

	class F16C_976016 : FIR_F16C_new
	{
		scope = public;
		author = "Emogo";
		dlc    = "F-16 Pars Filo";
		displayName = "F-16C 97-6016";
		fir_f16_custom_skin = 0;		
		hiddenselectionstextures[] = {"F16_Pars_Filo\data\body\97_6016.paa","F16_Pars_Filo\data\wing_co.paa","F16_Pars_Filo\data\tail\97_6016.paa","F16_Pars_Filo\data\CFT_181_co.paa",""};
		fir_f16_engine = "GE";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";		
		fir_f16_vwt = "dragchute"; 
		fir_f16_cft = "yes";			
		editorPreview = "\F16_Pars_Filo\ico\F16CPLUS.jpg"; 
		faction 	= "ParsFilo";
		class Attributes {};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Presets 
				{
										
				};	
			};
		};
	};

	class F16C_973858 : FIR_F16C_new
	{
		scope = public;
		author = "Efe Ceylan";
		dlc    = "F-16 Pars Filo";
		displayName = "F-16C 97-3858";
		fir_f16_custom_skin = 0;		
		hiddenselectionstextures[] = {"F16_Pars_Filo\data\body\97_3858.paa","F16_Pars_Filo\data\wing_co.paa","F16_Pars_Filo\data\tail\97_3858.paa","F16_Pars_Filo\data\CFT_181_co.paa",""};
		fir_f16_engine = "GE";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";		
		fir_f16_vwt = "dragchute"; 
		fir_f16_cft = "yes";			
		editorPreview = "\F16_Pars_Filo\ico\F16CPLUS.jpg"; 
		faction 	= "ParsFilo";
		class Attributes {};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Presets 
				{
									
				};			
			};
		};
	};

	class F16C_971101 : FIR_F16C_new
	{
		scope = public;
		author = "Tolga Akarca";
		dlc    = "F-16 Pars Filo";
		displayName = "F-16C 97-1101";
		fir_f16_custom_skin = 0;		
		hiddenselectionstextures[] = {"F16_Pars_Filo\data\body\97_1101.paa","F16_Pars_Filo\data\wing_co.paa","F16_Pars_Filo\data\tail\97_1101.paa","F16_Pars_Filo\data\CFT_181_co.paa",""};
		fir_f16_engine = "GE";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";		
		fir_f16_vwt = "dragchute"; 
		fir_f16_cft = "yes";			
		editorPreview = "\F16_Pars_Filo\ico\F16CPLUS.jpg"; 
		faction 	= "ParsFilo";
		class Attributes {};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Presets 
				{
									
				};			
			};
		};
	};

	class F16C_971905 : FIR_F16C_new
	{
		scope = public;
		author = "Umut Bardakci";
		dlc    = "F-16 Pars Filo";
		displayName = "F-16C 97-1905";
		fir_f16_custom_skin = 0;		
		hiddenselectionstextures[] = {"F16_Pars_Filo\data\body\97_1905.paa","F16_Pars_Filo\data\wing_co.paa","F16_Pars_Filo\data\tail\97_1905.paa","F16_Pars_Filo\data\CFT_181_co.paa",""};
		fir_f16_engine = "GE";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";		
		fir_f16_vwt = "dragchute"; 
		fir_f16_cft = "yes";			
		editorPreview = "\F16_Pars_Filo\ico\F16CPLUS.jpg"; 
		faction 	= "ParsFilo";
		class Attributes {};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Presets 
				{
									
				};			
			};
		};
	};

	class F16C_971071 : FIR_F16C_new
	{
		scope = public;
		author = "Gorkem Coskun";
		dlc    = "F-16 Pars Filo";
		displayName = "F-16C 97-1071";
		fir_f16_custom_skin = 0;		
		hiddenselectionstextures[] = {"F16_Pars_Filo\data\body\97_1071.paa","F16_Pars_Filo\data\wing_co.paa","F16_Pars_Filo\data\tail\97_1071.paa","F16_Pars_Filo\data\CFT_181_co.paa",""};
		fir_f16_engine = "GE";
		fir_f16_aux = "iff";
		fir_f16_hud = "std";		
		fir_f16_vwt = "dragchute"; 
		fir_f16_cft = "yes";			
		editorPreview = "\F16_Pars_Filo\ico\F16CPLUS.jpg"; 
		faction 	= "ParsFilo";
		class Attributes {};
		class Components: Components
		{
			class TransportPylonsComponent: TransportPylonsComponent
			{
				class Presets 
				{
									
				};			
			};
		};
	};
	
	class FIR_F16D;
	class F16D_971453 : FIR_F16D
	{
		scope = public;
		author = "Emogo";
		dlc    = "F-16 Pars Filo";
		displayName = "F-16D 97-1453";
		fir_f16d_custom_skin = 0;
		hiddenselectionstextures[] = {"F16_Pars_Filo\data\f16d\97_1453.paa","F16_Pars_Filo\data\wing_co.paa", "F16_Pars_Filo\data\CFT_181_co.paa"};
		fir_f16d_engine = "GE";
		fir_f16d_aux = "iff";
		fir_f16d_hud = "std";		
		fir_f16d_vwt = "dragchute"; 
		fir_f16d_cft = "cft_chute";			
		editorPreview = "\F16_Pars_Filo\ico\F16DPLUS.jpg"; 
		faction 	= "ParsFilo";
		class Attributes {};
	};
};