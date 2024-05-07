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
				defaultValue = "false";

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
		