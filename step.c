
case CL_INIT_CFM:-->
handle_cl_init_cfm-->
connection_manager_init(app)
process_user_action(app)





case SPP_EVENT_SERVER_CREATE:-->
handle_spp_event_server_create-->

state_enter_discoverable(app)-->
state_enter_connectible-->






--------------------------------------------------------------------------------

/* Register to receive PIO events */
MessagePioTask(&task_data->task);

button_msg_handler-->
button_press_detected---
-->MessageSend(task_data->client_task,..)
-->MessageSendLater(&task_data->task,..)


button_msg_handler-->
button_release_detected-->
-->MessageSend(task_data->client_task,..)
-->MessageCancelAll((&task_data->task,..)










//------------------------------------------------------------------------------
led_loop_delay_start
led_start_ramp
led_ramp_next
led_start_level


















-----------------------------------------------------------------------
SPP_EVENT_SERVER_DISCONNECT







