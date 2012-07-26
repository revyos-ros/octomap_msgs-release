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
 * Auto-generated by genmsg_cpp from file /wg/stor2a/isucan/repos/wg_debs/octomap_msgs-release/msg/OctomapBinaryWithPose.msg
 *
 */


#ifndef OCTOMAP_MSGS_MESSAGE_OCTOMAPBINARYWITHPOSE_H
#define OCTOMAP_MSGS_MESSAGE_OCTOMAPBINARYWITHPOSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Pose.h>

namespace octomap_msgs
{
template <class ContainerAllocator>
struct OctomapBinaryWithPose_
{
  typedef OctomapBinaryWithPose_<ContainerAllocator> Type;

  OctomapBinaryWithPose_()
    : header()
    , id(0)
    , origin()
    , data()  {
    }
  OctomapBinaryWithPose_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(0)
    , origin(_alloc)
    , data(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _id_type;
  _id_type id;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _origin_type;
  _origin_type origin;

   typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _data_type;
  _data_type data;




  typedef boost::shared_ptr< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct OctomapBinaryWithPose_

typedef ::octomap_msgs::OctomapBinaryWithPose_<std::allocator<void> > OctomapBinaryWithPose;

typedef boost::shared_ptr< ::octomap_msgs::OctomapBinaryWithPose > OctomapBinaryWithPosePtr;
typedef boost::shared_ptr< ::octomap_msgs::OctomapBinaryWithPose const> OctomapBinaryWithPoseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace octomap_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/fuerte/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/fuerte/share/std_msgs/cmake/../msg'], 'octomap_msgs': ['/wg/stor2a/isucan/repos/wg_debs/octomap_msgs-release/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8fb58fc8c87150ac05695a4df6e2250";
  }

  static const char* value(const ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8fb58fc8c87150aULL;
  static const uint64_t static_value2 = 0xc05695a4df6e2250ULL;
};

template<class ContainerAllocator>
struct DataType< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "octomap_msgs/OctomapBinaryWithPose";
  }

  static const char* value(const ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A 3D map in binary format, as Octree\n\
Header header\n\
int32  id\n\
geometry_msgs/Pose origin\n\
int8[] data\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.origin);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct OctomapBinaryWithPose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::octomap_msgs::OctomapBinaryWithPose_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "origin: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.origin);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCTOMAP_MSGS_MESSAGE_OCTOMAPBINARYWITHPOSE_H
