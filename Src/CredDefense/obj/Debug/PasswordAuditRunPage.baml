   M S B A M L   `   `   `  ����F  BCredDefense, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null)clr-namespace:CredDefenseCredDefense  5      &     CredDefense.PasswordAuditRunPage   5      W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5      R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5      Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5      @d2http://schemas.microsoft.com/expression/blend/2008     5      +localclr-namespace:CredDefense     5        N� Title$  PasswordAudit��5	      .��5      � $��
10,0,10,10q�6    � ColumnDefinitions 5   
   �� 5      �� 5       � RowDefinitions 5   
   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   �� 5      $
��Auto �6   .+�5!   
   �� $��2��6   $��Right=�6    $��Center=�6<   $��Trebuchet MS)�6W   $
��Bold"�5"   	   $��18(�6   ���#0066cc$��	0,41,1,38q�6>   .��5#      �� $��WrapWithOverflow=�6   $��Password Audit Run ��68   5$      �� 5%   
   $��0��6   $��2��6!   $��35��6.    �� Padding$ 5q�6:   ���#4E87D4._�5&      �� $��Center=�6   
�������.��6B   	Target DC6M   5'      �� 5(   
   -   5        $��targetDc��5(   2   $��0��6   $��3��6%   $��	0,10,0,10q�6B   ��6U   �� *DcName+ �� Mode$ OneWay=��� 5)   
   $��0��6   $��4��6!   $��35��6.   $ 5q�6:   ���#4E87D4._�5*      �� $��Center=�6   
�������.��6B   Password File6Q   5+      �� 5,   
   -   5        $��passwordFileText��5,   2   $��0��6   $��5��6%   $��	0,10,0,10q�6J   ��6]   �� *PasswordFile+$ OneWay=��� 5-   
   -   5        $��0��5-      $��6��6!   $��	0,10,0,10q�6.   $	��125��6A   $��25��5.      $��Right=�6   .��6J   Choose Password File6`   �� 5/   
   $��0��6   $��7��6!   $��35��6.   $ 5q�6:   ���#4E87D4._�50      �� $��Center=�6   
�������.��6B   	Save File6M   51      �� 52   
   -   5        $��saveFileText��52   2   $��0��6   $��8��6%   $��	0,10,0,10q�6F   ��6Y   �� *
SaveFile+$ OneWay=��� 53   
   -   5        $��0��53      $��9��6!   $��	0,10,0,10q�6.   $	��125��6A   $��25��54      $��Right=�6   .��6L   Choose Save File6^   �� 55   
   -   5        $��2��55      $��11��6!   $��	0,30,0,10q�6/   $	��125��6B   $��25��56      $��Right=�6   .��6L   	Run Audit6W   57      58      