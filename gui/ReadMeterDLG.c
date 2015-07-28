/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.22                          *
*        Compiled Jul  4 2013, 15:16:01                              *
*        (c) 2013 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "includes.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#if 0
#define ID_WINDOW_0   (GUI_ID_USER + 0x76)

#define ID_BUTTON_0   (GUI_ID_USER + 0x77)
#define ID_BUTTON_1   (GUI_ID_USER + 0x78)
#define ID_BUTTON_2   (GUI_ID_USER + 0x79)
#define ID_BUTTON_3   (GUI_ID_USER + 0x7A)



#define ID_TEXT_0     (GUI_ID_USER + 0x7C)
#define ID_TEXT_1     (GUI_ID_USER + 0x7D)
#define ID_TEXT_2     (GUI_ID_USER + 0x7E)
#define ID_TEXT_3     (GUI_ID_USER + 0x7F)
#define ID_TEXT_4     (GUI_ID_USER + 0x80)
#define ID_TEXT_5     (GUI_ID_USER + 0x81)
#define ID_TEXT_6     (GUI_ID_USER + 0x82)
#define ID_TEXT_7     (GUI_ID_USER + 0x83)
#define ID_TEXT_8     (GUI_ID_USER + 0x84)  
#define ID_TEXT_9     (GUI_ID_USER + 0x85)  
#define ID_TEXT_10    (GUI_ID_USER + 0x86)  
#define ID_TEXT_11    (GUI_ID_USER + 0x87)
#define ID_TEXT_12    (GUI_ID_USER + 0x88)

#define ID_EDIT_0     (GUI_ID_USER + 0x89)
#define ID_EDIT_1     (GUI_ID_USER + 0x8A)
#define ID_EDIT_2     (GUI_ID_USER + 0x8B)
#define ID_EDIT_3     (GUI_ID_USER + 0x8C)
#define ID_EDIT_4     (GUI_ID_USER + 0x8D)
#define ID_EDIT_5     (GUI_ID_USER + 0x8E)

#define ID_EDIT_6     (GUI_ID_USER + 0x8F)
#define ID_EDIT_7     (GUI_ID_USER + 0x90)


#define ID_PROGBAR_0  (GUI_ID_USER + 0x91)

#define ID_BUTTON_4   (GUI_ID_USER + 0x92)//自动获取表号
#endif

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
    { WINDOW_CreateIndirect,  "ReadMeter",  ID_WINDOW_0, 0,   0,  240, 295, 0, 0x0, 0 },
    { BUTTON_CreateIndirect,  GetMeterNum,  ID_BUTTON_1, 9,   10,  92,  25, 0, 0x0, 0 },
    { BUTTON_CreateIndirect,  ReadMeter,    ID_BUTTON_0, 139, 10,  92,  25, 0, 0x0, 0 },
        
    { TEXT_CreateIndirect,   MeterNum,      ID_TEXT_0,   8,   46, 72,  20, 0, 0x0, 0 },
    { EDIT_CreateIndirect,   NULL,          ID_EDIT_0,   89,  42, 142, 20, 0, GUI_645_ADDR_LENGTH, 0 },
        
    { TEXT_CreateIndirect, ReadMeterSel,    ID_TEXT_1,   8,   69, 69,  20, 0, 0x0, 0 },
    { EDIT_CreateIndirect,         NULL,    ID_EDIT_1,   89,  68, 142, 20, 0, 0x64, 0 },

    { TEXT_CreateIndirect, Speed,         ID_TEXT_12,  8,   93, 69,  20, 0, 0x0, 0 },
    { EDIT_CreateIndirect,  NULL,         ID_EDIT_2,   89,  92, 142, 20, 0, 0x64, 0 },
        
    { TEXT_CreateIndirect, TotalVal,        ID_TEXT_2,   8,  118, 65, 20, 0, 0x0, 0 },
    { EDIT_CreateIndirect, NULL,            ID_EDIT_3,   89,  116, 106, 20, 0, 0x64, 0 },
    { TEXT_CreateIndirect, "kWh",           ID_TEXT_7,   199, 116, 35, 20, 0, 0x0, 0 },
        
    { TEXT_CreateIndirect, "\xe5\xb0\x96",  ID_TEXT_3,   8,  142, 80, 20, 0, 0x0, 0 },
    { EDIT_CreateIndirect, NULL,            ID_EDIT_4,   89,  141, 106, 20, 0, 0x64, 0 },
    { TEXT_CreateIndirect, "kWh",           ID_TEXT_8,   199, 141, 35, 20, 0, 0x0, 0 },
        
    { TEXT_CreateIndirect, "\xe5\xb3\xb0",  ID_TEXT_4,   8,  167, 80, 20, 0, 0x0, 0 },
    { EDIT_CreateIndirect, NULL,            ID_EDIT_5,   89,  165, 106, 20, 0, 0x64, 0 },
    { TEXT_CreateIndirect, "kWh",           ID_TEXT_9,   199, 165, 35, 20, 0, 0x0, 0 },
        
    { TEXT_CreateIndirect, "\xe5\xb9\xb3",  ID_TEXT_5,   8,  192, 80, 20, 0, 0x0, 0 },
    { EDIT_CreateIndirect, NULL,            ID_EDIT_6,   89,  190, 106, 20, 0, 0x64, 0 },
    { TEXT_CreateIndirect, "kWh",           ID_TEXT_10,  199, 190, 35, 20, 0, 0x0, 0 },
        
    { TEXT_CreateIndirect, "\xe8\xb0\xb7",  ID_TEXT_6,   8,  216, 80, 20, 0, 0x0, 0 },
    { EDIT_CreateIndirect, NULL,            ID_EDIT_7,   89,  214, 106, 20, 0, 0x64, 0 },    
    { TEXT_CreateIndirect, "kWh",           ID_TEXT_11,  199, 214, 35, 20, 0, 0x0, 0 },
       
    //{ BUTTON_CreateIndirect, Save,          ID_BUTTON_2, 10,   262, 55, 25, 0, 0x0, 0 },
    { BUTTON_CreateIndirect, Msg,           ID_BUTTON_4, 75,  262, 90,  25, 0, 0x0, 0 },
    { BUTTON_CreateIndirect, Quit,        ID_BUTTON_3, 175,  262, 55, 25, 0, 0x0, 0},
    { PROGBAR_CreateIndirect, NULL,         ID_PROGBAR_0, 8, 239, 220, 20, 0, 0x0, 0},
};



//u8 rmd[20];


/*********************************************************************
*
*       Static code
*
**********************************************************************
*/




WM_HWIN RMD_Get_PROGBAR()
{    
    return WM_GetDialogItem(g_hWin_ReadMeter, ID_PROGBAR_0);            
}


WM_HWIN RMD_Get_MeterNum(void)
{
    return WM_GetDialogItem(g_hWin_ReadMeter,ID_EDIT_0);
}


WM_HWIN RMD_Get_ReadSel(void)
{
    return WM_GetDialogItem(g_hWin_ReadMeter,ID_EDIT_1);
}

WM_HWIN RMD_Get_Speed(void)
{

    return WM_GetDialogItem(g_hWin_ReadMeter,ID_EDIT_2);
}

/*******************************************************
*
*   超时，或者没有接收数据的时候，在edit框体中填充EE.EE
*
*********************************************************/
void RMD_ReadErr(void)
{
    WM_HWIN hItem;
    int i;
    for(i = 0;i < 5;i++)
    {
        hItem = WM_GetDialogItem(g_hWin_ReadMeter, (ID_EDIT_3 + i));
        EDIT_SetText(hItem, "EEEEEE.EE");
    }
}

void RMD_ClearData(void)
{
    WM_HWIN hItem;
    int i;
    for(i = 0;i < 5;i++)
    {
        hItem = WM_GetDialogItem(g_hWin_ReadMeter, (ID_EDIT_3 + i));
        EDIT_SetText(hItem, "0");
    }
}

static int RMD_key_cnt = 0;     //对按键次数进行计数


//向上选择
void RMD_SelEdt_Up(WM_MESSAGE * pMsg)
{
    WM_HWIN hItem;
    if(RMD_key_cnt == 0)
    {
        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_2);
        WM_SetFocus(hItem);
        
        RMD_key_cnt = 2;
    }
    else
    {
        RMD_key_cnt--;
        hItem=WM_GetDialogItem(pMsg->hWin,(ID_EDIT_0+RMD_key_cnt));
        WM_SetFocus(hItem);
    }
}



//向下选择
void RMD_SelEdt_Down(WM_MESSAGE *pMsg)
{
    WM_HWIN hItem;
    if(RMD_key_cnt == 2)
    {
        hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_0);
        WM_SetFocus(hItem);

        RMD_key_cnt = 0;
    }
    else
    {
        RMD_key_cnt++;
        hItem=WM_GetDialogItem(pMsg->hWin,(ID_EDIT_0+RMD_key_cnt));
        WM_SetFocus(hItem);
    }
}



#if 0
void RMD_Color_Change(void)
{
    WM_HWIN hItem;
    int i;
    for(i=0;i<3;i++)
    {
        hItem=WM_GetDialogItem(g_hWin_ReadMeter,ID_EDIT_0+i);
        if(WM_HasFocus(hItem) == 1)
        {
            EDIT_SetBkColor(hItem,0,GUI_GREEN);
        }
        else if(WM_HasFocus(hItem) == 0)
        {
            EDIT_SetBkColor(hItem,0,0xC0C0C0);
        }
    }
}
#endif

void RMD_SetFocus(void)
{
    WM_HWIN hItem;
    hItem = WM_GetDialogItem(g_hWin_ReadMeter, (ID_EDIT_0 + RMD_key_cnt));
    WM_SetFocus(hItem);
}


static u8 RMD_Get_Para(WM_MESSAGE *pMsg)
{   
    WM_HWIN hItem;
    u8  i;
    u8  dropdown_selnum;
    u8 rmd[GUI_645_ADDR_LENGTH+2];
 
    hItem=WM_GetDialogItem(pMsg->hWin,ID_EDIT_0);
    EDIT_GetText(hItem, rmd, GUI_645_ADDR_LENGTH+1);

    if(strlen(rmd) != GUI_645_ADDR_LENGTH)
    {
        //error proc
        //GUI_MessageBox()
        //MESSAGEBOX_Create("dst addr error!", "error", 0);
        //EDIT_SetText(hItem, "11111");
        //ERROR_BOX(GUI_MSBOX_ADDR_ERROR);
        return DEV_ERROR;
    }

    if(DEV_OK != GUI_GetMeterAddr(rmd, g_gui_para.dstAddr))
    {
        return DEV_ERROR;
    }
    
#if 0
    //hItem=WM_GetDialogItem(pMsg->hWin,ID_DROPDOWN_0);
    //dropdown_selnum=DROPDOWN_GetSel(hItem);  
    
    if(g_rom_para.protocol==DL645_2007)
    {        
        memcpy(g_gui_para.dataFlag,
            &c_645DidoDef[g_rom_para.protocol][dropdown_selnum],
            4);
        
        g_gui_para.ctrlCode=0x11;
    }
    else if(g_rom_para.protocol==DL645_1997)
    {
        memcpy(g_gui_para.dataFlag,
            &c_645DidoDef[g_rom_para.protocol][dropdown_selnum],
            2);
        g_gui_para.ctrlCode=0x01; 

    }
    else
    {
        return DEV_ERROR;
    }

#endif
    g_gui_para.dataLen = 0;

    g_gui_para.cmd = GUI_CMD_MRW;
    
    return DEV_OK;

}




void RMD_proc_resp_data(void)
{
    WM_HWIN hItem;
    u8 * pbuf;
    u32 len;


    pbuf = g_proto_para.data_buf;
    len = g_proto_para.data_len;

    if(g_hWin_ReadMeter != WM_HWIN_NULL)
    {
        if(g_gui_para.cmd == GUI_CMD_BROAD_READ_ADDR)
        {
            if(len == 6)
            {
                hItem = WM_GetDialogItem(g_hWin_ReadMeter, ID_EDIT_0);
                EDIT_SetText(hItem, 
                    (const char*)GUI_hex2MeterAddrStr(pbuf, len));
            }
            return;
        }
       
        //SWITCH(DATA FLAG)
        if(g_proto_para.data_len >= 4)
        {
            hItem = WM_GetDialogItem(g_hWin_ReadMeter, ID_EDIT_3);
            EDIT_SetText(hItem, 
                (const char*)GUI_hex2PowerDataStr(pbuf, len));
            pbuf += 4;
            len -= 4;
        }
        else
        {
            return;
        }

        if(g_proto_para.data_len >= 4)
        {
            hItem = WM_GetDialogItem(g_hWin_ReadMeter, ID_EDIT_4);
            EDIT_SetText(hItem, 
                (const char*)GUI_hex2PowerDataStr(pbuf, len));
            pbuf += 4;
            len -= 4;
        }
        else
        {
            return;
        }

        if(g_proto_para.data_len >= 4)
        {
            hItem = WM_GetDialogItem(g_hWin_ReadMeter, ID_EDIT_5);
            EDIT_SetText(hItem, 
                (const char*)GUI_hex2PowerDataStr(pbuf, len));
            pbuf += 4;
            len -= 4;
        }
        else
        {
            return;
        }

        if(g_proto_para.data_len >= 4)
        {
            hItem = WM_GetDialogItem(g_hWin_ReadMeter, ID_EDIT_6);
            EDIT_SetText(hItem, 
                (const char*)GUI_hex2PowerDataStr(pbuf, len));
            pbuf += 4;
            len -= 4;
        }
        else
        {
            return;
        }

        if(g_proto_para.data_len >= 4)
        {
            hItem = WM_GetDialogItem(g_hWin_ReadMeter, ID_EDIT_7);
            EDIT_SetText(hItem, 
                (const char*)GUI_hex2PowerDataStr(pbuf, len));
            pbuf += 4;
            len -= 4;
        }
        else
        {
            return;
        }                
        
    }
}

#pragma optimize=low
/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  int     key_num;
  // USER START (Optionally insert additional variables)
  // USER END
  int i;
  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'Edit'
    //
    GUI_UC_SetEncodeUTF8();

#if 0   
    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_2);
    BUTTON_SetBkColor(hItem,0,GUI_GREEN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
#endif

    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_3);
    BUTTON_SetBkColor(hItem,0,GUI_YELLOW);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_4);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);


    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_1);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    
    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_0);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    WM_DisableWindow(hItem);
    EDIT_SetText(hItem, (const char *)GUI_hex2MeterAddrStr(g_sys_ctrl.recentMeterAddr, 6));

    for(i = 0;i < 5; i++)
    {
        hItem=WM_GetDialogItem(pMsg->hWin,(ID_EDIT_3+i));
        EDIT_SetText(hItem, "0");
        WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
        WM_DisableWindow(hItem);
    }
    
    PUB_InitFreq(pMsg,ID_EDIT_2);
    hItem = WM_GetDialogItem(pMsg->hWin,ID_EDIT_2);
    WM_DisableWindow(hItem);
    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);
    EDIT_SetText(hItem, Positive);
    if(g_rom_para.protocol==DL645_2007)
    {        
        memcpy(g_gui_para.dataFlag,
            &c_645DidoDef[g_rom_para.protocol][0],
            4);
        
        g_gui_para.ctrlCode=0x11;
    }
    else if(g_rom_para.protocol==DL645_1997)
    {
        memcpy(g_gui_para.dataFlag,
            &c_645DidoDef[g_rom_para.protocol][0],
            2);
        g_gui_para.ctrlCode=0x01; 

    }
    WM_DisableWindow(hItem);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_PROGBAR_0);
    PROGBAR_SetBarColor(hItem,0,GUI_GREEN);
   
    break;

  case WM_KEY:
    Id  = WM_GetId(pMsg->hWinSrc);
    if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt) == 1)
    {
        switch(((WM_KEY_INFO*)(pMsg->Data.p))->Key)
        {
            case GUI_KEY_YELLOW:
                WM_DeleteWindow(g_hWin_ReadMeter);
                g_hWin_ReadMeter=HBWIN_NULL;
                WM_BringToBottom(g_hWin_msg);
                WM_HideWindow(g_hWin_msg);
                WM_ShowWindow(g_hWin_TimeBar);
                WM_ShowWindow(g_hWin_Date);
                WM_SetFocus(g_hWin_menu);
                RMD_key_cnt = 0;
                g_gui_para.state = GUI_STATE_IDLE;
                break;
                
            case GUI_KEY_F1: /*获取表号*/
                if(CHANNEL_RF != g_rom_para.channel)
                {
                    g_gui_para.cmd = GUI_CMD_BROAD_READ_ADDR;
                    g_gui_para.state = GUI_STATE_AMR;                        
                    OSMboxPost(g_sys_ctrl.up_mbox, (void*)&g_gui_para);
                }
                else 
                {
                    ERR_NOTE(g_hWin_ReadMeter,GUI_MSBOX_FUN_DISALE_ERROR);
                }
                break;
                
            case '#':
                WM_BringToTop(g_hWin_msg);
                WM_ShowWindow(g_hWin_msg);                    
                WM_SetFocus(g_hWin_msg);
                break;
                
            case GUI_KEY_F2:  /*抄表*/              
                if(DEV_OK == RMD_Get_Para(pMsg))//获取参数数据
                {
                    g_gui_para.state = GUI_STATE_AMR;
                    OSMboxPost(g_sys_ctrl.up_mbox, (void*)&g_gui_para);
                }
                break;

            case GUI_KEY_UP:
                RMD_SelEdt_Up(pMsg);
                //RMD_Color_Change();
                GUI_Color_Change(g_hWin_ReadMeter, ID_EDIT_0, 3);
                break;

            case GUI_KEY_DOWN:
                RMD_SelEdt_Down(pMsg);
                //RMD_Color_Change();
                GUI_Color_Change(g_hWin_ReadMeter, ID_EDIT_0, 3);
                break;
            case GUI_KEY_ENTER:
                switch(Id)
                {
                    case ID_EDIT_0:
                        g_sys_ctrl.selectWidget=EDIT_METER_NUM;
                        g_hWin_Input=Create_Edit_Set(g_hWin_ReadMeter);
                        WM_SetFocus(g_hWin_Input);
                        break;
                    case ID_EDIT_1:
                        g_sys_ctrl.selectWidget=LISTBOX_READ_SEL;
                        g_hWin_Input=Create_ListBox_Set(g_hWin_ReadMeter);
                        WM_SetFocus(g_hWin_Input);
                        break;
                        
                    case ID_EDIT_2:
                        //g_sys_ctrl.selectWidget=LISTBOX_SPEED;
                        //g_hWin_Input=Create_ListBox_Set(g_hWin_ReadMeter);
                        //WM_SetFocus(g_hWin_Input);
                        g_hWin_freq = CreateSpeed(g_hWin_ReadMeter);
                        //WM_SetFocus(g_hWin_freq);
                         break;
                 }
       }
    }
    break;
#if 0
    if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==1)//按键点击。
    {
        switch(Id)
        {
          case ID_EDIT_0:
            if(key_num==GUI_KEY_ENTER)
            {
              g_sys_ctrl.selectWidget=EDIT_METER_NUM;
              g_hWin_Input=Create_Edit_Set(g_hWin_ReadMeter);
              WM_SetFocus(g_hWin_Input);
            }
            break;
          case ID_EDIT_1:
            if(key_num==GUI_KEY_ENTER)
            {
              g_sys_ctrl.selectWidget=LISTBOX_READ_SEL;
              g_hWin_Input=Create_ListBox_Set(g_hWin_ReadMeter);
              WM_SetFocus(g_hWin_Input);
            }
            break;
            
          case ID_EDIT_2:
            if(key_num==GUI_KEY_ENTER)
            {
              //g_sys_ctrl.selectWidget=LISTBOX_SPEED;
              //g_hWin_Input=Create_ListBox_Set(g_hWin_ReadMeter);
              //WM_SetFocus(g_hWin_Input);
              g_hWin_freq = CreateSpeed(g_hWin_ReadMeter);
              //WM_SetFocus(g_hWin_freq);
            }
            break;
        }
    }

                
    switch(((WM_KEY_INFO *)(pMsg->Data.p))->Key)
    {
        case GUI_KEY_YELLOW:
            if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==1)
            {
                WM_DeleteWindow(g_hWin_ReadMeter);
                g_hWin_ReadMeter=HBWIN_NULL;
                WM_BringToBottom(g_hWin_msg);
                WM_HideWindow(g_hWin_msg);
                WM_ShowWindow(g_hWin_TimeBar);
                WM_ShowWindow(g_hWin_Date);
                WM_SetFocus(g_hWin_menu);
                RMD_key_cnt = 0;
                g_gui_para.state = GUI_STATE_IDLE;
            }
            break;
            
        case GUI_KEY_F1: /*获取表号*/
            if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
            {
                if(CHANNEL_RF != g_rom_para.channel)
                {
                    g_gui_para.cmd = GUI_CMD_BROAD_READ_ADDR;
                    g_gui_para.state = GUI_STATE_AMR;                        
                    OSMboxPost(g_sys_ctrl.up_mbox, (void*)&g_gui_para);
                }
            }
            break;
            
        case '#':
            if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
            {
                 WM_BringToTop(g_hWin_msg);
                 WM_ShowWindow(g_hWin_msg);                    
                 WM_SetFocus(g_hWin_msg);
            }
            break;
            
        case GUI_KEY_F2:  /*抄表*/              
            if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
            {
                if(DEV_OK == RMD_Get_Para(pMsg))//获取参数数据
                {
                    g_gui_para.state = GUI_STATE_AMR;
                    OSMboxPost(g_sys_ctrl.up_mbox, (void*)&g_gui_para);
                }
            }
       
            break;

        case GUI_KEY_UP:
            if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
            {
                RMD_SelEdt_Up(pMsg);
                //RMD_Color_Change();
            }
            break;

        case GUI_KEY_DOWN:
            if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
            {
                RMD_SelEdt_Down(pMsg);
                //RMD_Color_Change();
                GUI_Color_Change(g_hWin_ReadMeter, ID_EDIT_0, 3);
            }
            break;
        case GUI_KEY_TAB:
            if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
            {
                //RMD_Sel_Down(pMsg);
                RMD_Color_Change();
            }
            break;
#endif

  case WM_MSG_CLOSE:
    WM_DeleteWindow(g_hWin_ReadMeter);
	break;
    
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       CreateReadMeter
*/
WM_HWIN CreateReadMeter(void);
WM_HWIN CreateReadMeter(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, g_hWin_menu, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/


