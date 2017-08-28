/* 
 * File:   RM_MessageFormats.h
 * Author: martin
 *
 * Created on December 8, 2013, 10:53 AM
 */

#ifndef RM_MESSAGEFORMATS_H
#define	RM_MESSAGEFORMATS_H

#include <stdint.h>
#include <stdbool.h>
#include <sys/time.h>

#define PS_NAME_LENGTH 30
#define PS_SHORT_NAME_LENGTH 16

typedef uint8_t ps_message_id_t;
typedef uint8_t ps_message_qos_t;

//----------------------SYSTEM MANAGEMENT

//PS_RESPONSE

typedef struct {
    uint8_t flags;					//pingResponseStatus_enum
    uint8_t source;
} psResponsePayload_t;

//----------------------GENERAL PURPOSE FORMATS
//PS_BYTE

typedef struct {
    uint8_t value;
} psBytePayload_t;

//PS_INT

typedef struct {
    int32_t value;
} psIntPayload_t;

//PS_FLOAT

typedef struct {
    float value;
} psFloatPayload_t;

//PS_2FLOAT

typedef struct {
    union {
        struct {
            float x, y;
        };
        struct {
            float value1, value2;
        };
        struct {
        	float opening, speed;
        };
    };
} ps2FloatPayload_t;

//PS_3FLOAT

typedef struct {
    union {
        struct {
            float x, y, z;
        };
        struct {
            float value1, value2, value3;
        };
        struct {
            float xSpeed;
            float ySpeed;
            float zRotateSpeed;
         };
        struct {
        	float heading;
        	float pitch;
        	float roll;
        };
    };
} ps3FloatPayload_t;

//PS_NAME

typedef struct {
    char name[PS_NAME_LENGTH+1];
} psNamePayload_t;

//PS_NAMED_BYTE

typedef struct {
    uint8_t value;
    char name[PS_NAME_LENGTH+1];
} psNameBytePayload_t;

//PS_NAMED_FLOAT

typedef struct {
    float value;
    char name[PS_NAME_LENGTH+1];
} psNameFloatPayload_t;

//PS_NAMED_INT

typedef struct {
    int value;
    char name[PS_NAME_LENGTH+1];
} psNameIntPayload_t;

//PS_NAMED_3FLOAT

typedef struct {

    union {

        struct {
            float float1;
            float float2;
            float float3;
        };

        struct {
            float min;
            float max;
            float value;
        };
    };
    char name[PS_NAME_LENGTH+1];
} psName3FloatPayload_t;

//PS_NAMED_3INT

typedef struct {
    union {
        struct {
            int int1;
            int int2;
            int int3;
        };
        struct {
            int min;
            int max;
            int value;
        };
    };
    char name[PS_NAME_LENGTH+1];
} psName3IntPayload_t;

//PS_NAMED_4BYTE

typedef struct {
    union {
    uint8_t uint8[4];
    uint16_t uint16[2];
    uint32_t uint32;
    };
    char name[PS_NAME_LENGTH+1];
} psName4BytePayload_t;

//------------------------POSITION

typedef struct {
	float latitude;
	float longitude;
} psPositionPayload_t;

//----------------------MOVEMENT

//PS_MOVE_PAYLOAT

typedef struct {
    int16_t xSpeed;
    int16_t ySpeed;
    int16_t zRotate;
} psMovePayload_t;

#endif	/* RM_MESSAGEFORMATS_H */

