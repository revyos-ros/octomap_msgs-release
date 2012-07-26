/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /wg/stor2a/isucan/repos/wg_debs/octomap_msgs-release/srv/GetOctomap.srv
 *
 */


#ifndef OCTOMAP_MSGS_MESSAGE_GETOCTOMAPREQUEST_H
#define OCTOMAP_MSGS_MESSAGE_GETOCTOMAPREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace octomap_msgs
{
template <class ContainerAllocator>
struct GetOctomapRequest_
{
  typedef GetOctomapRequest_<ContainerAllocator> Type;

  GetOctomapRequest_()
    {
    }
  GetOctomapRequest_(const ContainerAllocator& _alloc)
    {
    }






  typedef boost::shared_ptr< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GetOctomapRequest_

typedef ::octomap_msgs::GetOctomapRequest_<std::allocator<void> > GetOctomapRequest;

typedef boost::shared_ptr< ::octomap_msgs::GetOctomapRequest > GetOctomapRequestPtr;
typedef boost::shared_ptr< ::octomap_msgs::GetOctomapRequest const> GetOctomapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace octomap_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/fuerte/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/fuerte/share/std_msgs/cmake/../msg'], 'octomap_msgs': ['/wg/stor2a/isucan/repos/wg_debs/octomap_msgs-release/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::octomap_msgs::GetOctomapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "octomap_msgs/GetOctomapRequest";
  }

  static const char* value(const ::octomap_msgs::GetOctomapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
";
  }

  static const char* value(const ::octomap_msgs::GetOctomapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetOctomapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::octomap_msgs::GetOctomapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::octomap_msgs::GetOctomapRequest_<ContainerAllocator>& v)
  {
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCTOMAP_MSGS_MESSAGE_GETOCTOMAPREQUEST_H
