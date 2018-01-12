

typedef struct TaskData { void (*handler)(Task, MessageId, Message); } TaskData;
typedef struct TaskData *Task;



struct _spp_app
{
    /**
     * @brief Message handler
     */
    TaskData    task;
    /**
     * @brief LED task pointer
     */
    LED_TASK_DATA *led;
    /**
     * @brief Button task data
     */
    BUTTONS_TASK_DATA    *button;

    /**
     * @brief Handle for Device ID SDP record
     */
    uint32      sdp_handle_device_id;

    /**
     * @brief State that the application is current in
     */
    APP_STATES	    state;

    /**
     * @brief Current user action
     */
    USER_ACTION     user_action;

    /**
     * @brief SPP profile pointer
     */
    SPP_PROFILE *spp_profile;

    /**
     * @brief Remote device address
     */
    bdaddr      remote_addr;

    /**
     * @brief Sink of the remote device
     */
    Sink        sink;

    /**
     * @brief Application configuration data
     */
    SPP_APP_CONFIG  *config;

    /**
     * @brief Current role of operation
     */
    SPP_ROLE    current_role;

    /**
     * @brief Index within PDL or inquiry list
     */
    uint16 connect_index;

    /**
     * @brief Inquiry result data
     */
    INQ_RESULTS *inq_results;

    /* Flags */
    /**
     * @brief Device ID data is present
     */
    unsigned has_device_id_info:1;

    /**
     * @brief Device is currently or will become discoverable
     */
    unsigned discoverable:1;

    /**
     * @brief The connection is currently in a link-loss state
     */
    unsigned link_loss_period:1;

    /**
     * @brief The link-loss timeout has been reached
     */
    unsigned timeout_reached:1;

    /**
     * @brief Connect action for client
     */
    SPP_CONNECT_TYPE connect_type:1;

    /**
     * @brief State of the remote inquiry process
     */
    INQ_STATE   inq_state:2;

};

		spp_app.task.handler = app_handler;

    led_task->task.handler = led_msg_handler;
    led_task->client_task = &spp_app.task;


struct _led_task_data
{
    TaskData task;                      /**< Task function for messages */
    Task client_task;                   /**< Client task to inform about completed LED events */
    
    
    LED_GROUP_STATE state[LED_GROUP_MAX];   /**< Group state information */
    uint16 pattern_count;               /**< Number of patterns in array */
    const LED_PATTERN_CONF *patterns;   /**< Pattern information */
};

struct _buttons_task_data
{
	/**
	 * @brief Task to receive internal messages
	 */
    TaskData task;
    /**
     * @brief Client task to send events to
     */
	Task client_task;
	/**
	 * @brief Configuration data
	 */
	const BUTTON_CONFIG_DATA *config;
	/**
	 * Current button press state
	 */
	BUTTON_STATE state;
};




spp_app.led
{

led_msg_handler,
&spp_app.task,//app_handler


}


spp_app.button
{
button_msg_handler,
&spp_app.task,//app_handler

	
	
}



task_data->task.handler = button_msg_handler;
















-----------------------------------------------------------------------
enterAction:

enterAction(piostate, pam, pio_bits);-->
MessageSend(piostate->client, pam->message, 0);

-----------------------------------------------------------------------
heldAction:

MessageSendLater(&piostate->task, 
                internal_held_timer_message, 
                m, 
                pam->timeout
                );


-----------------------------------------------------------------------

heldReleaseAction:




























