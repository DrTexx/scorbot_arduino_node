#ifndef _ROS_SERVICE_read_joint_states_h
#define _ROS_SERVICE_read_joint_states_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rosserial_arduino
{

static const char READ_JOINT_STATES[] = "rosserial_arduino/read_joint_states";

  class read_joint_statesRequest : public ros::Msg
  {
    public:
      float input;

    read_joint_statesRequest():
      input(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_input;
      u_input.real = this->input;
      *(outbuffer + offset + 0) = (u_input.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_input.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_input.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_input.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->input);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_input;
      u_input.base = 0;
      u_input.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_input.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_input.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_input.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->input = u_input.real;
      offset += sizeof(this->input);
     return offset;
    }

    const char * getType(){ return READ_JOINT_STATES; };
    const char * getMD5(){ return "79c3c282188d9b61edcde55d5577527e"; };

  };

  class read_joint_statesResponse : public ros::Msg
  {
    public:
      float joint0;
      float joint1;
      float joint2;
      float joint3;
      float joint4;

    read_joint_statesResponse():
      joint0(0),
      joint1(0),
      joint2(0),
      joint3(0),
      joint4(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_joint0;
      u_joint0.real = this->joint0;
      *(outbuffer + offset + 0) = (u_joint0.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint0.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint0.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint0.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint0);
      union {
        float real;
        uint32_t base;
      } u_joint1;
      u_joint1.real = this->joint1;
      *(outbuffer + offset + 0) = (u_joint1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint1);
      union {
        float real;
        uint32_t base;
      } u_joint2;
      u_joint2.real = this->joint2;
      *(outbuffer + offset + 0) = (u_joint2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint2);
      union {
        float real;
        uint32_t base;
      } u_joint3;
      u_joint3.real = this->joint3;
      *(outbuffer + offset + 0) = (u_joint3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint3);
      union {
        float real;
        uint32_t base;
      } u_joint4;
      u_joint4.real = this->joint4;
      *(outbuffer + offset + 0) = (u_joint4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_joint4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_joint4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_joint4.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->joint4);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_joint0;
      u_joint0.base = 0;
      u_joint0.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_joint0.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_joint0.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_joint0.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->joint0 = u_joint0.real;
      offset += sizeof(this->joint0);
      union {
        float real;
        uint32_t base;
      } u_joint1;
      u_joint1.base = 0;
      u_joint1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_joint1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_joint1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_joint1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->joint1 = u_joint1.real;
      offset += sizeof(this->joint1);
      union {
        float real;
        uint32_t base;
      } u_joint2;
      u_joint2.base = 0;
      u_joint2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_joint2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_joint2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_joint2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->joint2 = u_joint2.real;
      offset += sizeof(this->joint2);
      union {
        float real;
        uint32_t base;
      } u_joint3;
      u_joint3.base = 0;
      u_joint3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_joint3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_joint3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_joint3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->joint3 = u_joint3.real;
      offset += sizeof(this->joint3);
      union {
        float real;
        uint32_t base;
      } u_joint4;
      u_joint4.base = 0;
      u_joint4.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_joint4.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_joint4.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_joint4.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->joint4 = u_joint4.real;
      offset += sizeof(this->joint4);
     return offset;
    }

    const char * getType(){ return READ_JOINT_STATES; };
    const char * getMD5(){ return "5075703135afe07e4798ec5d505e6971"; };

  };

  class read_joint_states {
    public:
    typedef read_joint_statesRequest Request;
    typedef read_joint_statesResponse Response;
  };

}
#endif
