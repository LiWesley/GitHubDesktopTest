在xim_bsp_buttons_init 里面：

button_callback =on_button_event_idle


bsp_init里面


m_registered_callback  == bsp_event_callback 
 
 
app_button_init
创建 detection_delay_timeout_handler//？？




m_registered_callback 有在
bsp_button_event_handler 中调用






------------------------------------------
每次按键按键会调用bsp_button_event_handler
会执行 m_registered_callback 

m_registered_callback 的原型是 bsp_event_callback



在 bsp_event_callback 中除了 button_callback ， 还有 battery_callback







xim_bsp_button_event_registe
xim_bsp_battery_event_registe



11250
15000

18
24





