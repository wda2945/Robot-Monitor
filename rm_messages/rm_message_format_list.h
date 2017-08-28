/* 
 * File: MsgFormatList.h
 * Author: martin
 *
 * Created on March 23, 2014, 1:11 PM
 */

//formatmacro(enum, type, var, size)
//-ve length for variable length names

formatmacro(PS_UNKNOWN_PAYLOAD,uint8_t,unknownPayload,0)
formatmacro(PS_NO_PAYLOAD,uint8_t,noPayload,0)
    //online msg
formatmacro(PS_RESPONSE_PAYLOAD,psResponsePayload_t,responsePayload,sizeof(psResponsePayload_t))
    //Generic Data
formatmacro(PS_BYTE_PAYLOAD,psBytePayload_t,bytePayload,sizeof(psBytePayload_t))
formatmacro(PS_INT_PAYLOAD,psIntPayload_t,intPayload,sizeof(psIntPayload_t))
formatmacro(PS_FLOAT_PAYLOAD,psFloatPayload_t,floatPayload,sizeof(psFloatPayload_t))
formatmacro(PS_2FLOAT_PAYLOAD,ps2FloatPayload_t,twoFloatPayload,sizeof(ps2FloatPayload_t))
formatmacro(PS_3FLOAT_PAYLOAD,ps3FloatPayload_t,threeFloatPayload,sizeof(ps3FloatPayload_t))
    //Generic named data
formatmacro(PS_NAME_PAYLOAD,psNamePayload_t,namePayload,sizeof(psNamePayload_t))
formatmacro(PS_NAME_BYTE_PAYLOAD,psNameBytePayload_t,nameBytePayload,sizeof(psNameBytePayload_t))
formatmacro(PS_NAME_FLOAT_PAYLOAD,psNameFloatPayload_t,nameFloatPayload,sizeof(psNameFloatPayload_t))
formatmacro(PS_NAME_INT_PAYLOAD,psNameIntPayload_t,nameIntPayload,sizeof(psNameIntPayload_t))
formatmacro(PS_NAME_3FLOAT_PAYLOAD,psName3FloatPayload_t,name3FloatPayload,sizeof(psName3FloatPayload_t))
formatmacro(PS_NAME_3INT_PAYLOAD,psName3IntPayload_t,name3IntPayload,sizeof(psName3IntPayload_t))
formatmacro(PS_NAME_4BYTE_PAYLOAD,psName4BytePayload_t,name4BytePayload,sizeof(psName4BytePayload_t))
    //sensors
formatmacro(PS_POSITION_PAYLOAD, psPositionPayload_t, positionPayload, sizeof(psPositionPayload_t))
    //motor
formatmacro(PS_MOVE_PAYLOAD, psMovePayload_t, movePayload, sizeof(psMovePayload_t))


