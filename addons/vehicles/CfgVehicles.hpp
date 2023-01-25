class CfgVehicles
{
	class Wall_F; 
	class Land_Trench_01_forest_F: Wall_F {
		class Eventhandlers;
	};
	class Peer_Trench_mainclass: Land_Trench_01_forest_F {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		editorCategory = "Trench_Structures";
		editorSubCategory = "Trenches_Chameleon";
	
		class Attributes
		{
			// Attribute class, can be anything
			class Apply_Manual_Texture_Path
			{
				//--- Mandatory properties
				displayName = "Apply Manual Texture Path"; // Name assigned to UI control class Title
				tooltip = "Apply Manual Texture Path"; // Tooltip assigned to UI control class Title
				property = "Apply_Manual_Texture_Path"; // Unique config property name saved in SQM
				control = "Checkbox"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes				
				expression = "_this setVariable ['%s',_value];";
				defaultValue = false;

				//--- Optional properties
				unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
				validate = "none"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
				condition = "1"; // Condition for attribute to appear (see the table below)
				typeName = "BOOL"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};
			class Manual_Texture_Path
			{
				//--- Mandatory properties
				displayName = "Manual Texture Path"; // Name assigned to UI control class Title
				tooltip = "Manual Texture Path"; // Tooltip assigned to UI control class Title
				property = "Manual_Texture_Path"; // Unique config property name saved in SQM
				control = "Edit"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes				
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "'Default Value'";

				//--- Optional properties
				unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
				validate = "none"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
				condition = "1"; // Condition for attribute to appear (see the table below)
				typeName = "STRING"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};
			class Ground_Texture_Path
			{
				//--- Mandatory properties
				displayName = "Ground Texture Path"; // Name assigned to UI control class Title
				tooltip = "Displays the Texture Path from the Ground below"; // Tooltip assigned to UI control class Title
				property = "Ground_Texture_Path"; // Unique config property name saved in SQM
				control = "Edit"; // UI control base class displayed in Edit Attributes window, points to Cfg3DEN >> Attributes				
				expression = "_this setVariable ['%s',_value];";
				defaultValue = "surfaceTexture (getPos _this)";

				//--- Optional properties
				unique = 0; // When 1, only one entity of the type can have the value in the mission (used for example for variable names or player control)
				validate = "none"; // Validate the value before saving. If the value is not of given type e.g. "number", the default value will be set. Can be "none", "expression", "condition", "number" or "variable"
				condition = "1"; // Condition for attribute to appear (see the table below)
				typeName = "STRING"; // Defines data type of saved value, can be STRING, NUMBER or BOOL. Used only when control is "Combo", "Edit" or their variants
			};
		};
		
		/*
		class Attributes {
			class Peer_Trench_Groundcopy_Attribute {
				control = "CheckboxNumber"; 
            	efaultValue = "1"; 
            	displayName = "Enable the Ground Chameleon System";
            	tooltip = "When activated the Object will copy the texture of the ground below."
            	expression = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
            	property = "Peer_Trench_Groundcopy_Enable";
			};
		
		};*/
	};
	class Peer_Trench_Chameleon:Peer_Trench_mainclass{
		editorSubCategory = "Trenches_Chameleon";
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
				init = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
				AttributesChanged3DEN = "_this call Peer_Trenches_Main_fnc_dragged3DEN";
			};
		};
	};
	// Trench Floor
	class Peer_Trench_Floor_Chameleon: Peer_Trench_Chameleon {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		editorSubCategory = "Trenches_Misc";
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\utils\preview\floor.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench Floor (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\utils\Floor.p3d";
		hiddenSelections[] = {"trench"};
	};

	//Normal Chameleon

	class Peer_Trench_Straight_Long_Chameleon: Peer_Trench_Chameleon {
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\preview\long.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench long (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight.p3d";
		hiddenSelections[] = {"top","snow"};
	};

	class Peer_Trench_Straight_Short_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\preview\short.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench short (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_slim.p3d";
		hiddenSelections[] = {"top","snow"};

	};

	class Peer_Trench_Bent_Chameleon: Peer_Trench_Straight_Long_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\bent\preview\bent.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench bent (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\bent\trench_bent.p3d";
		hiddenSelections[] = {"top","snow"};

	};

	//Snow
	class Peer_Trench_Snow_Chameleon:Peer_Trench_mainclass{
		editorSubCategory = "Trenches_Snow_Chameleon";
		class EventHandlers: Eventhandlers {
			class Peer_Trenches {
				Dragged3DEN = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
				init = "_this call Peer_Trenches_Main_fnc_trenchSetTexture";
			};
		};
	};

	class Peer_Trench_Straight_Long_Snow_Chameleon: Peer_Trench_Snow_Chameleon {
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench long Snow (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight.p3d";
		hiddenSelections[] = {"top"};
	};
	
	class Peer_Trench_Straight_Short_Snow_Chameleon: Peer_Trench_Straight_Long_Snow_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench short snow (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\trench_straight_slim.p3d";
		hiddenSelections[] = {"top"};
	};
	class Peer_Trench_Bent_Snow_Chameleon: Peer_Trench_Straight_Long_Snow_Chameleon {
		editorPreview = "x\Peer_Trenches\addons\vehicles\data\trenches\straight\Straight.paa";
		vehicleClass = "Peer_Trenches";
		displayName = "Trench bent (Chameleon)";
		model = "x\Peer_Trenches\addons\vehicles\data\trenches\bent\trench_bent.p3d";
		hiddenSelections[] = {"top"};
	};
};