<%@ page 
	language="java"
	contentType="text/html; charset=GBK"
	pageEncoding="GBK"
%>
<%@ page import="chapter8.model.CHD,
                chapter8.bo.BusinessBO,
                chapter8.model.Customer,
                chapter8.model.Product,
                chapter8.model.Element,
                chapter8.bo.BaseInfoBO, 
                chapter8.util.RequestUtils,
                chapter8.model.User,
                chapter8.bo.UserManagerBO"
%>
<%
	long id = RequestUtils.getParamLong(request,"id",0); 
	CHD chd = BusinessBO.getInstance().getCHD(id);    
	User user = UserManagerBO.getInstance().getUser(chd.getCustomerId());  
	Element[] elements = BusinessBO.getInstance().findElementByCHDId(chd.getDhdId());   
	float total = 0;
	for(int i = 0, size = elements.length; i < size ; i++ ) {
	   total = total + elements[i].getTotal();
	}
%>

<%@ include file="../common/head.jsp"%>
<table border="0" align="center" cellpadding="6" cellspacing="0" class="maintable">
<tr>
<td class="sidebar">
	<%@ include file="../common/leftmenu.jsp"%>					
</td>
<td class="mainbox">
						
<TABLE class="formbox-wordwrap" cellSpacing="0" cellPadding="5" width="99%" align="center" border="0">
<tr>
<td>
<table>
    <TR>
        <TD class="formbox-title" colSpan="2">������</TD>
    </TR>
    <TR>
        <TD class="formbox-rowheader">������:</TD>
        <TD class="formbox-content"><input type="text" name="handler" value="<%=chd.getHandle()%>" readonly/>
        </TD>
    </TR>
    <TR>
        <TD class="formbox-rowheader">�����ͻ���</TD>
        <TD class="formbox-content">
<input type="text" name="customerid" value="<%=user.getName()%>" readonly/>
        </TD>
     </TR>
     
    <TR>
        <TD class="formbox-rowheader">�������ڣ�</TD>
        <TD class="formbox-content">
<input type="text" name="customerid" value="<%=chd.getCreateDate()%>" readonly/>
        </TD>
     </TR> 
     
     
     <TR>
        <TD class="formbox-rowheader">���ϼƣ�</TD>
        <TD class="formbox-content">
<input type="text" name="total" value="<%=total%>" readonly/>
        </TD>
     </TR> 

    <TR>
        <TD class="formbox-rowheader"></TD>
        <TD class="formbox-content"><SPAN class="comment-text"></SPAN></TD>
    </TR>
    <TR>
        <TD class="formbox-rowheader"></TD>
        <TD class="formbox-content"><SPAN class="comment-text"></SPAN></TD>
    </TR>
    <TR>
    </TR>
    </table>
        </td></tr>
    <tr><td>
       
        
        <TABLE class="formbox-wordwrap" cellSpacing="0" cellPadding="5" width="99%" align="center"
    border="0">
    <TR>
        <TD class="formbox-title" colSpan="2">������Ʒ�б�</TD>
    </TR>
    <TR><TD>
    <TABLE cellSpacing="1" cellPadding="6" width="100%" align="center" border="0">
    
        <TR>
            <TD class="formbox-title">��Ʒ��</TD>
            <TD class="formbox-title">Ԥ����������</TD>
            <TD class="formbox-title">ʵ�ʷ�������</TD>
            <TD class="formbox-title">������</TD>
            <TD class="formbox-title">���</TD>
            <TD class="formbox-title">����</TD>
        </TR>

<%
    for(int i = 0, size = elements.length; i < size ; i++ ) {
       Product p = BaseInfoBO.getInstance().getProduct(elements[i].getProductId());
%>
        <TR>
            <TD class="formbox-title"><%=p.getName()%></TD>
            <TD class="formbox-title"><%=elements[i].getFhrq()%></TD>
            <TD class="formbox-title"><%=elements[i].getCreateDate()%></TD>
            <TD class="formbox-title"><%=elements[i].getDhl()%></TD>
            <TD class="formbox-title"><%=elements[i].getTotal()%></TD>
            <TD class="formbox-title">
                <a href="#">�տ�</a>    
            </TD>
        </TR>
<%
    }
%>
    </TABLE></TD></TR>
</TABLE>
    
    </td></tr>
</TABLE>
                    </td>
                </tr>
            </table>
<%@ include file="../common/foot.jsp"%>  
