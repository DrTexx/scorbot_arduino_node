#ifndef _ROS_SERVICE_write_joint_cmd_h
#define _ROS_SERVICE_write_joint_cmd_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rosserial_arduino
{

static const char WRITE_JOINT_CMD[] = "rosserial_arduino/write_joint_cmd";

  class write_joint_cmdRequest : public ros::Msg
  {
    public:
      float cmd0;
      float cmd1;
      float cmd2;
      float cmd3;
      float cmd4;

    write_joint_cmdRequest():
      cmd0(0),
      cmd1(0),
      cmd2(0),
      cmd3(0),
      cmd4(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_cmd0;
      u_cmd0.real = this->cmd0;
      *(outbuffer + offset + 0) = (u_cmd0.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd0.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd0.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd0.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cmd0);
      union {
        float real;
        uint32_t base;
      } u_cmd1;
      u_cmd1.real = this->cmd1;
      *(outbuffer + offset + 0) = (u_cmd1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cmd1);
      union {
        float real;
        uint32_t base;
      } u_cmd2;
      u_cmd2.real = this->cmd2;
      *(outbuffer + offset + 0) = (u_cmd2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cmd2);
      union {
        float real;
        uint32_t base;
      } u_cmd3;
      u_cmd3.real = this->cmd3;
      *(outbuffer + offset + 0) = (u_cmd3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cmd3);
      union {
        float real;
        uint32_t base;
      } u_cmd4;
      u_cmd4.real = this->cmd4;
      *(outbuffer + offset + 0) = (u_cmd4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cmd4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cmd4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cmd4.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->cmd4);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_cmd0;
      u_cmd0.base = 0;
      u_cmd0.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd0.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd0.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd0.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cmd0 = u_cmd0.real;
      offset += sizeof(this->cmd0);
      union {
        float real;
        uint32_t base;
      } u_cmd1;
      u_cmd1.base = 0;
      u_cmd1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cmd1 = u_cmd1.real;
      offset += sizeof(this->cmd1);
      union {
        float real;
        uint32_t base;
      } u_cmd2;
      u_cmd2.base = 0;
      u_cmd2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cmd2 = u_cmd2.real;
      offset += sizeof(this->cmd2);
      union {
        float real;
        uint32_t base;
      } u_cmd3;
      u_cmd3.base = 0;
      u_cmd3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cmd3 = u_cmd3.real;
      offset += sizeof(this->cmd3);
      union {
        float real;
        uint32_t base;
      } u_cmd4;
      u_cmd4.base = 0;
      u_cmd4.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cmd4.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cmd4.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cmd4.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->cmd4 = u_cmd4.real;
      offset += sizeof(this->cmd4);
     return offset;
    }

    const char * getType(){ return WRITE_JOINT_CMD; };
    const char * getMD5(){ return "8088f5e8ef717be5c4c76e3b4fd4a836"; };

  };

  class write_joint_cmdResponse : public ros::Msg
  {
    public:
      float status;

    write_joint_cmdResponse():
      status(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_status;
      u_status.real = this->status;
      *(outbuffer + offset + 0) = (u_status.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_status.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_status.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_status.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->status);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_status;
      u_status.base = 0;
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_status.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->status = u_status.real;
      offset += sizeof(this->status);
     return offset;
    }

    const char * getType(){ return WRITE_JOINT_CMD; };
    const char * getMD5(){ return "65d75810a3fe0e7fa69efb761bfebecf"; };

  };

  class write_joint_cmd {
    public:
    typedef write_joint_cmdRequest Request;
    typedef write_joint_cmdResponse Response;
  };

}
#endif
