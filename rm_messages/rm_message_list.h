//
//  MsgMacros.h
//  Common
//
//  Created by Martin Lane-Smith on 1/25/14.
//  Copyright (c) 2013 Martin Lane-Smith. All rights reserved.
//

//#define messagemacro(enum, qos, topic, payload, long name)

messagemacro(PS_UNSPECIFIED,3,PS_UNDEFINED_TOPIC,PS_UNKNOWN_PAYLOAD,"Unknown")

//system management (generally down the chain of command)
messagemacro(PING_MSG,2,ANNOUNCEMENTS_TOPIC,PS_NO_PAYLOAD,"Ping")
messagemacro(PING_RESPONSE,2,RESPONSE_TOPIC,PS_RESPONSE_PAYLOAD,"Ping response")      	//I am alive

//General data reports (-> App)
messagemacro(FLOAT_DATA,3,SYS_REPORT_TOPIC,PS_NAME_FLOAT_PAYLOAD,"fData")
messagemacro(INT_DATA,3,SYS_REPORT_TOPIC,PS_NAME_INT_PAYLOAD,"iData")

//OVM script control
messagemacro(ACTIVATE,1,SYS_ACTION_TOPIC,PS_NAME_PAYLOAD,"Execute Script")
messagemacro(RELOAD,1,SYS_ACTION_TOPIC,PS_NO_PAYLOAD,"Reload Scripts")
messagemacro(HEEL_LOCATION,1,SYS_ACTION_TOPIC,PS_POSITION_PAYLOAD,"Heel Position")
        
//Alert
messagemacro(ALERT,1,SYS_REPORT_TOPIC,PS_NAME_PAYLOAD,"Alert")
messagemacro(MOVE,1,SYS_ACTION_TOPIC,PS_MOVE_PAYLOAD,"Move")
messagemacro(KEEPALIVE,1,PS_UNDEFINED_TOPIC,PS_NO_PAYLOAD,"Keepalive")

//#undef messagemacro
