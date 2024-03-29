#ifndef CONST_H
#define CONST_H

//This header file contains some defenitions to be used all over the application

//All possible actions
enum ActionType
{
	ADD_Buff,			//Add 1-input Buffer gate
	ADD_INV,			//Add 1-input Inverter gate
	ADD_AND_GATE_2,		//Add 2-input AND gate
	ADD_NOT_GATE_2,
	ADD_BUFFER_GATE_2,
	ADD_OR_GATE_2,		//Add 2-input OR gate
	ADD_NAND_GATE_2,	//Add 2-input NAND gate
	ADD_NOR_GATE_2,		//Add 2-input NOR gate
	ADD_XOR_GATE_2,		//Add 2-input XOR gate
	ADD_XNOR_GATE_2,	//Add 2-input XNOR gate
	ADD_AND_GATE_3,		//Add 3-input AND gate
	ADD_NOR_GATE_3,		//Add 3-input NOR gate
	ADD_XOR_GATE_3,		//Add 3-input XOR gate
	ADD_Switch,			//Add Switch
	ADD_LED,			//Add LED
	ADD_CONNECTION,		//Add Wire Connection

	ADD_Label,			//Add Label to a Component, a Connection
	EDIT_Label,			//Edit Label of a Component, a Connection
	clear,
	save,
	TEXT,
	deletex,

	//Create Truth Table of the Circuit
	Simulate_circuitx,
	Create_Truth_Tablex,
	Change_Switch,		//Change Switch Status in Simulation Mode
	copy,
	EDIT,
	load,
	SELECT,		//Select a Component, a Connection
	DEL,		//Delete a Component, a Connection
	MOVE,		//Move a Component, a Connection
	cut,
	copyx,
	paste,
	mulitple_selection,
	SAVE,		//Save the whole Circuit to a file
	LOAD,		//Load a Circuit from a file
	selectx,
	UNDO,		//Undo the last Action preformed
	REDO,		//Redo the last Action canceled
	movex,
	DSN_MODE,	//Switch to Design mode
	SIM_MODE,	//Switch to Simulatiom mode

	EXIT,		//Exit the application
	Circuit_Probingx,
	Circuit_Validationx,
	STATUS_BAR,		//A click on the status bar
	DSN_TOOL,	//A click on an empty place in the design tool bar

};

//Possible Status for the pin
enum STATUS
{
	LOW,
	HIGH,
	unsingn
};

enum  MODE	//Modes of operation
{
	DESIGN,
	SIMULATION
};


enum DsgnMenuItem //The items of the design menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_AND2,		//AND gate item in menu
	ITM_OR2,		//OR gate item in menu
	ITM_NOT2,
	ITM_BUFFER,		//AND gate item in menu
	ITM_NAND,		//OR gate item in menu
	ITM_NOR,
	ITM_XOR,
	ITM_XNOR,		//AND gate item in menu
	ITM_AND3,
	ITM_XOR3,
	ITM_NOR3,
	ITM_WIRE,
	ITM_LED,
	ITM_SWICH,
	ITM_SIMU,
	ITM_MOVE,
	ITM_save,		//OR gate item in menu
	ITM_clear,
	ITM_TEXT,
	ITM_DElET,
	ITM_SELECT,
	ITM_EXIT,
	ITM_EDIT,
	ITM_UNDO,
	ITM_cut,
	ITM_copy,
	ITM_paste,
	ITM_load,
	ITM_mulitple_selection,
	Simulate_circuit,
	Create_Truth_Table,
	Circuit_Validation,
	Circuit_Probing,
	Switch_back_to_Design_Mode,

	//TODO: Add more items names here

	ITM_DSN_CNT		//no. of design menu items ==> This should be the last line in this enum

};


enum SimMenuItem //The items of the simulation menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	ITM_SIM,	//Simulate menu item
	ITM_TRUTH,	//Truth table menu item

	//TODO:Add more items names here

	ITM_SIM_CNT		//no. of simulation menu items ==> This should be the last line in this enum

};

//Maximum number of input pins that can be connected to any output pin
#define MAX_CONNS 20

//assume fan out is 5 for now it can be read from the user or can be predefined as const
enum FANOUT
{
	AND2_FANOUT = 5	//Default fan out of 2-input AND gate
};

//A structure to contain drawing parameters for each component
//Each component occupies a rectangluar area so it needs 2 points to represent that area
//this structure can be extended if desired
struct GraphicsInfo
{
	int x1, y1, x2, y2;
};

#ifndef NULL
#define NULL 0
#endif

#endif