;;�����Զ����� 
(setq indent-tabs-mode nil) 
(setq default-tab-width 8) 
(setq tab-width 8) 
(setq tab-stop-list ()) 
;;����C���Է�� 
(add-hook 'c-mode-hook 'linux-c-mode) 
(setq imenu-sort-function 'imenu--sort-by-name) 
(defun linux-c-mode() 
(define-key c-mode-map [return] 'newline-and-indent) 
(interactive) 
(c-set-style "K&R") 
(c-toggle-hungry-state) 
(setq c-basic-offset 4) 
(imenu-add-menubar-index) 
(which-function-mode) 
) 
;;ȡ���������� 
(setq visible-bell nil) 
;;������ɫ���� 
(require 'color-theme) 
(color-theme-charcoal-black) 
;;����Ĭ������ 
(set-default-font "Bitstream Vera Sans Mono-16") 
;;֧�� emacs ���ⲿ�����ճ�� 
(setq x-select-enable-clipboard t) 
;;ȡ�������� 
(scroll-bar-mode nil) 
;;��ʾ�к� 
(column-number-mode t) 
;;������ʾѡ������ 
(setq-default transient-mark-mod t) 
(transient-mark-mode t) 
;;����ƥ����ʾ 
(show-paren-mode t) 
;;���ع����� 
(tool-bar-mode -1) 
(menu-bar-mode -1) 
;;�﷨���� 
(global-font-lock-mode t) 
;;�ر��������� 
(setq inhibit-startup-message t) 
;;�������� 
(if (not (member '("-*-Bitstream Vera Sans Mono-normal-r-*-*-18-*-*-*-c-*-fontset-chinese" 
. "fontset-chinese") fontset-alias-alist)) 
(progn 
(create-fontset-from-fontset-spec 
"-*-Bitstream Vera Sans Mono-normal-r-*-*-20-*-*-*-c-*-fontset-chinese, 
chinese-gb2312:-*-΢���ź�-normal-r-*-*-16-*-*-*-c-*-gb2312*-*, 
chinese-big5-1:-*-Bitstream Vera Sans Mono-normal-normal-r-*-*-20-*-*-*-c-*-big5*-*, 
chinese-big5-2:-*-Bitstream Vera Sans Mono-normal-normal-r-*-*-20-*-*-*-c-*-big5*-*" t) 
(setq default-frame-alist 
(append 
'((font . "fontset-chinese")) 
default-frame-alist)) 
) 
) 
[Original] [Print] [Top] 
(defun w32-restore-frame () 
"Restore a minimized frame" 
(interactive) 
(w32-send-sys-command 61728)) 
(defun w32-maximize-frame () 
"Maximize the current frame" 
(interactive) 
(w32-send-sys-command 61488)) 
(w32-maximize-frame)