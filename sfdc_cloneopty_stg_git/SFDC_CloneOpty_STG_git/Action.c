//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Evaluate JavaScript code TimeStamp=LR.getParam('p...tyBaseNumber');", "snapshot=Action_1.inf");
	truclient_step("2", "Execute TC.unmask ( p_Password )", "snapshot=Action_2.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_00_Launch");
	truclient_step("3", "Navigate to 'https://test.salesforce.com/'", "snapshot=Action_3.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_00_Launch",0);
	truclient_step("4", "Type p_UserName in Username emailbox", "snapshot=Action_4.inf");
	truclient_step("6", "Type **************** in Password passwordbox", "snapshot=Action_6.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_01_Login");
	truclient_step("7", "Click on Log In to Sandbox button", "snapshot=Action_7.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_01_Login",0);
	truclient_step("8", "If Switch to Lightning Exper... JavaScript link exists", "snapshot=Action_8.inf");
	{
		lr_start_transaction("SFDC_CloneOpty_STG_01A_SwitchToLightningExp");
		truclient_step("8.2", "Click on Switch to Lightning Exper... JavaScript link", "snapshot=Action_8.2.inf");
		lr_end_transaction("SFDC_CloneOpty_STG_01A_SwitchToLightningExp",0);
	}
	truclient_step("10", "If ADSK Sales Lightning exists", "snapshot=Action_10.inf");
	{
		truclient_step("10.1", "Wait 5 seconds", "snapshot=Action_10.1.inf");
	}
	truclient_step("Else");
	{
		truclient_step("10.1", "Click on element (9)", "snapshot=Action_10.1.inf");
		truclient_step("10.2", "Type ADSK Sales Lightning in Search apps and items... searchbox", "snapshot=Action_10.2.inf");
		lr_start_transaction("SFDC_CloneOpty_STG_01B_ADSKsalesLightning");
		truclient_step("10.3", "Click on ADSK Sales Lightning link", "snapshot=Action_10.3.inf");
		lr_end_transaction("SFDC_CloneOpty_STG_01B_ADSKsalesLightning",0);
		truclient_step("10.4", "Wait 5 seconds", "snapshot=Action_10.4.inf");
	}
	truclient_step("11", "Wait 3 seconds", "snapshot=Action_11.inf");
	truclient_step("12", "Click on Search... button", "snapshot=Action_12.inf");
	truclient_step("13", "Wait 1 seconds", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Search by object type textbox", "snapshot=Action_14.inf");
	truclient_step("15", "Wait 1 seconds", "snapshot=Action_15.inf");
	truclient_step("16", "Type opp in Search by object type textbox", "snapshot=Action_16.inf");
	truclient_step("17", "Click on Opportunities", "snapshot=Action_17.inf");
	truclient_step("18", "Click on Search Opportunities searchbox", "snapshot=Action_18.inf");
	truclient_step("19", "Type p_OptyBaseNumber in Search Opportunities... searchbox", "snapshot=Action_19.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_02_SearchOptyToClone");
	truclient_step("20", "Press key Enter on Search Opportunities... searchbox", "snapshot=Action_20.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_02_SearchOptyToClone",0);
	truclient_step("29", "Evaluate JavaScript code var opty_link_xpath = '/...ling::th/span/a'", "snapshot=Action_29.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_03_OpenOpty");
	truclient_step("30", "Click on Link to Opty link", "snapshot=Action_30.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_03_OpenOpty",0);
	truclient_step("31", "Wait 2 seconds", "snapshot=Action_31.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_04_ClickOnClone");
	truclient_step("32", "Click on Clone button", "snapshot=Action_32.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_04_ClickOnClone",0);
	truclient_step("33", "Wait 3 seconds", "snapshot=Action_33.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_05_CloneWithProducts");
	truclient_step("34", "Click on With Products button", "snapshot=Action_34.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_05_CloneWithProducts",0);
	truclient_step("35", "Press OK in alert dialog", "snapshot=Action_35.inf");
	truclient_step("36", "Wait 3 seconds", "snapshot=Action_36.inf");
	truclient_step("37", "Get Inner HTML from Get p_AccountCSN link", "snapshot=Action_37.inf");
	truclient_step("38", "Get Inner HTML from Get p_OptyNum", "snapshot=Action_38.inf");
	truclient_step("39", "Move mouse over Edit Opportunity Name", "snapshot=Action_39.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_06_ClickEditName");
	truclient_step("40", "Click on Edit Opportunity Name", "snapshot=Action_40.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_06_ClickEditName",0);
	truclient_step("44", "Evaluate JavaScript code var p_OptyName = 'P_'+Ti...user+'CloneOpty'", "snapshot=Action_44.inf");
	truclient_step("45", "Type p_OptyName in Opportunity Name* textbox", "snapshot=Action_45.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_07_ClickSaveUpdatedName");
	truclient_step("46", "Click on Save", "snapshot=Action_46.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_07_ClickSaveUpdatedName",0);
	truclient_step("47", "Wait 1 seconds", "snapshot=Action_47.inf");
	truclient_step("48", "Get Inner HTML from Get Final p_OptyName", "snapshot=Action_48.inf");
	truclient_step("49", "VTS", "snapshot=Action_49.inf");
	{
		lr_start_transaction("SFDC_CloneOpty_STG_08_VTS");
		truclient_step("49.1", "Execute VTS.vtcConnect ( '10.35.232.55' , 3333 , 'CloneOppty' )", "snapshot=Action_49.1.inf");
		truclient_step("49.2", "Evaluate JavaScript code var x = 'SFDC_CloneOppty...;' + p_OptyName;", "snapshot=Action_49.2.inf");
		truclient_step("49.3", "Execute VTS.vtcAddCells ( 'ScriptName;CreatedTime;...OpportunityName' , x , 0 , 'CloneOppty' )", "snapshot=Action_49.3.inf");
		truclient_step("49.4", "Execute VTS.vtcDisconnect ( 'CloneOppty' )", "snapshot=Action_49.4.inf");
		lr_end_transaction("SFDC_CloneOpty_STG_08_VTS",0);
	}
	truclient_step("53", "Wait 3 seconds", "snapshot=Action_53.inf");
	lr_start_transaction("SFDC_CloneOpty_STG_09_Logout");
	truclient_step("103", "Click on element (1)", "snapshot=Action_103.inf");
	truclient_step("104", "Click on Log Out link", "snapshot=Action_104.inf");
	lr_end_transaction("SFDC_CloneOpty_STG_09_Logout",0);

	return 0;
}
