Process, Priority, , High 
AppsKey:: 
Input, UserInput, V T5 L9, {enter}.{esc}{tab}, tm, fq, hash, ww, kugou, xl, lxhdj, war3, fg,  chrome, db, ie, %Shutdown%, qiandao, cad, putty, dnspod, wlw, everything, dg 
if UserInput = tm 
    {Run,"E:\Program Files\Tencent\TM2009\Bin\TM.exe" 
    winwaitactive,TM2009 
    sleep 500 
    send,******{enter} ;******�����룬�������㡣������ 
    return 
    } 
else if UserInput = fq ;Bitvise Tunnelier 
    { 
    Run,"E:\Program Files\Privoxy\start.bat" ;Privoxy������������������� 
    winwaitactive,Bitvise Tunnelier �C SSH2 Client 
    send,{enter} 
    winwaitactive,User Authentication 
    send ****** ;***���������� 
    sleep,500 
    send,{enter} 
    WinMinimize,Bitvise Tunnelier -********* 
    return 
    } 
else if UserInput = hash ; 
    { 
    Run "E:\Program Files\HashMyFiles\HashMyFiles.exe" 
    return 
    } 
else if UserInput = ww ;�Ա����� 
    { 
    Run "E:\Program Files\AliWangWang\AliIM.exe" 
    return 
    } 
else if UserInput = kg ;�ṷ2010 
    { 
    Run "E:\Program Files\KuGou\KuGou2010\KuGoo.exe" 
    return 
    } 
else if UserInput = xl ;Ѹ��7 
    { 
    Run "E:\Program Files\Thunder Network\Thunder\Program\Thunder.exe" 
    return 
    } 
else if UserInput = lxhdj ;���Ǻ����� 
    { 
    Run "E:\Program Files\Meteor\Meteor.exe" 
    return 
    } 
else if UserInput = war3 ;ħ������ 
    { 
    Run "E:\Program Files\Warcraft III\War3_Show_HP\War3_Show_HP.exe" 
    Run "E:\Program Files\Warcraft III\Frozen Throne.exe" 
    } 
else if UserInput = fg ;�ɸ봫�� 
    { 
    Run "E:\Program Files\IPMSG.exe" 
    return 
    } 
else if UserInput = chrome 
    { 
    run "C:\Users\Root.lost\AppData\Local\Google\Chrome\Application\chrome.exe" 
    return 
    } 
else if UserInput = db ;dropbox 
    { 
    run "C:\Users\Root.lost\AppData\Roaming\Dropbox\bin\Dropbox.exe" 
    return 
    } 
else if UserInput = ie ;ie9 
    { 
    run "C:\Program Files\Internet Explorer\iexplore.exe" 
    return 
    } 
else if UserInput = cad ;autocad2011 
    { 
    run "E:\Program Files\AutoCAD 2010\acad.exe" 
} 
else if UserInput = putty ;putty 
    { 
    run "E:\Program Files\putty\putty.exe" 
}

else if UserInput = Shutdown 
    { 
    inputbox,Shutdowntime,,How minutes?,200,300 
    sleep,Shutdowntime*1000*60 
    shutdown,8 
    return 
    }

else if UserInput = wlw ;windows live write 
    { 
    run "C:\Program Files\Windows Live\Writer\WindowsLiveWriter.exe" 
} 
else if UserInput = everything ;everything 
    { 
    run "E:\Program Files\Everything-1.2.1.371.exe" 
} 
else if UserInput = dg 
    { 
    run "E:\Program Files\Disk Genius\DiskGenius.exe" 
}

~RButton & WheelUp:: 
    { 
    IfWinActive ahk_class Chrome_WidgetWin_0 ;����Chrome����Ч 
    Send {WheelUp 100} ;�����Ϲ�100�� 
    RButton Up::Return ;��ʱ��Ч 
    Return 
} 
; ���������������� 
; Ctrl + �Ҽ������������ö� 
; ���������������� 
^RButton:: 
MouseGetPos, , , id, control 
WinGetTitle, title, ahk_id %id% 
WinGetClass, class, ahk_id %id% 
;if 
WinSet, AlwaysOnTop, , ahk_id %id% 
Return 
^!a:: ;��ͼ��ݼ� 
run "E:\Program Files\HyperSnap\HprSnap7.exe" -snap:region 
Return