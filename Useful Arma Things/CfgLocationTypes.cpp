// https://community.bistudio.com/wiki/Map_Symbols

class RscMapControl
{
	class prefix_classname
	{
		icon="a3\ui_f\data\Map\Markers\HandDrawn\unknown_CA.paa"; // filepath to paa location
		size=16; // how big is the marker at the default size?
		importance="2 * 16 * 0.05"; // does this marker get overriden by other markers?
		coefMin=0.25;
		coefMax=4;
		color[]={1.000,0.855,0.125,0.7}; //  what colour is it? (RGBA)
	};
};
class CfgLocationTypes
{
	class inherited_locationtype;  // Inherit from location and you can add locations using the same font/size/colour. these values can then changed!
	class prefix_locationname: inherited_locationtype
	{
		color[]={0.502,0.502,0.753,0.8}; // Purple-Greyish 
	};

	class prefix_locationtype_base
	{
		radiusA=0;
		radiusB=0;
		angle=0;
		arm_population=0;
		position[]={0,0};
		type="";
		name="";
	};
	class prefix_mapmarker_name: prefix_locationtype_base
	{
		type="prefix_classname"; // relates to RscMapControl
		position[]={6346.22,11616.3}; // where on the map is this location?
	};
};