#include <Constants.au3>
#NoTrayIcon
Opt("TrayMenuMode", 1) ;û��Ĭ�ϵģ���ͣ�ű����˳����˵�.
Opt("trayOnEventMode", 1) ;Ӧ�� OnEvent ������ϵͳ����.

$Start = TrayCreateItem("����") ;������һ���˵���
TrayItemSetOnEvent($Start, "TrayMsg") ;ע���һ���˵���ģ������£��¼�
TrayCreateItem("") ;����һ���հ׵Ĳ˵������б�ָܷ����
$Close = TrayCreateItem("�ر�") ;�����ڶ����˵���
TrayItemSetOnEvent($Close, "TrayMsg") ;ע��ڶ����˵���ģ������£��¼�
TrayCreateItem("") ;
$Quit = TrayCreateItem("�˳�") ;�����������˵���
TrayItemSetOnEvent($Quit, "TrayMsg") ;ע��ڶ����˵���ģ������£��¼�

TraySetOnEvent($TRAY_EVENT_PRIMARYDOUBLE, "TrayMsg") ;ע��������˫���¼�(ֻ���� TrayOnEventMode ����Ϊ 1 ʱ����ʹ��)
TraySetOnEvent($TRAY_EVENT_SECONDARYUP, "TrayMsg") ;ע������Ҽ�˫���¼�(ֻ���� TrayOnEventMode ����Ϊ 1 ʱ����ʹ��)
TraySetState()

While 1
        Sleep(5000)
WEnd

Func TrayMsg()
        Switch @TRAY_ID   ;ѡ�������Ϣ�� TrayItem �����������¼�����������˫���¼���
                Case $Start
                        MsgBox(48, "��ʾ", "������ˡ����á�")
                Case $Close
                        MsgBox(48, "��ʾ", "������ˡ��رա�")
                Case $TRAY_EVENT_PRIMARYDOUBLE
                        MsgBox(48, "��ʾ", "��˫����������")
                Case $Quit, $TRAY_EVENT_SECONDARYUP
                        Exit
        EndSwitch
EndFunc   ;==>TrayMsg