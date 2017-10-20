//This file is automatically generated. DO NOT EDIT!

#include "robot__service__camera.h"
#pragma once

namespace robot
{
namespace service
{
namespace camera
{

class robot__service__cameraFactory : public virtual RobotRaconteur::ServiceFactory
{
public:
virtual std::string GetServiceName();
virtual std::string DefString();
virtual RR_SHARED_PTR<RobotRaconteur::StructureStub> FindStructureStub(std::string s);
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRStructure> structin);
virtual RR_SHARED_PTR<RobotRaconteur::RRObject> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> mstructin);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceStub> CreateStub(std::string objecttype, std::string path, RR_SHARED_PTR<RobotRaconteur::ClientContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::ServiceSkel> CreateSkel(std::string objecttype, std::string path, RR_SHARED_PTR<RobotRaconteur::RRObject> obj, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual void DownCastAndThrowException(RobotRaconteur::RobotRaconteurException& exp);
virtual RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> DownCastException(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> exp);
};

class BaxterImage_stub : public virtual RobotRaconteur::StructureStub
{
public:
BaxterImage_stub(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurNode> node) : RobotRaconteur::StructureStub(node) {}
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRObject> s);
virtual RR_SHARED_PTR<RobotRaconteur::RRStructure> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> m);
};

class CameraIntrinsics_stub : public virtual RobotRaconteur::StructureStub
{
public:
CameraIntrinsics_stub(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurNode> node) : RobotRaconteur::StructureStub(node) {}
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRObject> s);
virtual RR_SHARED_PTR<RobotRaconteur::RRStructure> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> m);
};

class ImageHeader_stub : public virtual RobotRaconteur::StructureStub
{
public:
ImageHeader_stub(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurNode> node) : RobotRaconteur::StructureStub(node) {}
virtual RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> PackStructure(RR_SHARED_PTR<RobotRaconteur::RRObject> s);
virtual RR_SHARED_PTR<RobotRaconteur::RRStructure> UnpackStructure(RR_SHARED_PTR<RobotRaconteur::MessageElementStructure> m);
};

class async_BaxterCamera
{
public:
virtual void async_get_camera_open(boost::function<void (uint8_t,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;
virtual void async_set_camera_open(uint8_t value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual uint8_t async_get_camera_open(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<uint8_t >(boost::bind((void (async_BaxterCamera::*)(boost::function<void (uint8_t, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) >, int32_t))&async_BaxterCamera::async_get_camera_open, this, _1, rr_timeout), rr_yield);
}
virtual void async_set_camera_open(uint8_t value, boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_BaxterCamera::*)(uint8_t, boost::function<void(RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>, int32_t))&async_BaxterCamera::async_set_camera_open, this, boost::ref(value), _1, rr_timeout), rr_yield);
}
#endif

virtual void async_openCamera(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual void async_openCamera(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_BaxterCamera::*)(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_openCamera, this, _1,rr_timeout), rr_yield);
}
#endif

virtual void async_closeCamera(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual void async_closeCamera(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_BaxterCamera::*)(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_closeCamera, this, _1,rr_timeout), rr_yield);
}
#endif

virtual void async_setExposure(int16_t exposure,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual void async_setExposure(int16_t exposure,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_BaxterCamera::*)(int16_t,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_setExposure, this, boost::ref(exposure),_1,rr_timeout), rr_yield);
}
#endif

virtual void async_setGain(int16_t gain,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual void async_setGain(int16_t gain,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_BaxterCamera::*)(int16_t,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_setGain, this, boost::ref(gain),_1,rr_timeout), rr_yield);
}
#endif

virtual void async_setWhiteBalance(int16_t red, int16_t green, int16_t blue,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual void async_setWhiteBalance(int16_t red, int16_t green, int16_t blue,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_BaxterCamera::*)(int16_t,int16_t,int16_t,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_setWhiteBalance, this, boost::ref(red),boost::ref(green),boost::ref(blue),_1,rr_timeout), rr_yield);
}
#endif

virtual void async_setFPS(double fps,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
virtual void async_setFPS(double fps,boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    RobotRaconteur::detail::async_wrap_for_spawn_void(boost::bind((void (async_BaxterCamera::*)(double,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_setFPS, this, boost::ref(fps),_1,rr_timeout), rr_yield);
}
#endif

virtual void async_getCurrentImage(boost::function<void (RR_SHARED_PTR<BaxterImage >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
RR_SHARED_PTR<BaxterImage > async_getCurrentImage(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<RR_SHARED_PTR<BaxterImage >>(boost::bind((void (async_BaxterCamera::*)(boost::function<void (RR_SHARED_PTR<BaxterImage >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_getCurrentImage, this, _1,rr_timeout), rr_yield);
}
#endif

virtual void async_getImageHeader(boost::function<void (RR_SHARED_PTR<ImageHeader >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
RR_SHARED_PTR<ImageHeader > async_getImageHeader(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<RR_SHARED_PTR<ImageHeader >>(boost::bind((void (async_BaxterCamera::*)(boost::function<void (RR_SHARED_PTR<ImageHeader >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_getImageHeader, this, _1,rr_timeout), rr_yield);
}
#endif

virtual void async_getCameraIntrinsics(boost::function<void (RR_SHARED_PTR<CameraIntrinsics >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE) = 0;

#ifdef ROBOTRACONTEUR_USE_ASIO_SPAWN
RR_SHARED_PTR<CameraIntrinsics > async_getCameraIntrinsics(boost::asio::yield_context rr_yield, int32_t rr_timeout=RR_TIMEOUT_INFINITE)
{
    return RobotRaconteur::detail::async_wrap_for_spawn<RR_SHARED_PTR<CameraIntrinsics >>(boost::bind((void (async_BaxterCamera::*)(boost::function<void (RR_SHARED_PTR<CameraIntrinsics >,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>)>,int32_t))&async_BaxterCamera::async_getCameraIntrinsics, this, _1,rr_timeout), rr_yield);
}
#endif

};
class BaxterCamera_stub : public virtual BaxterCamera, public virtual async_BaxterCamera, public virtual RobotRaconteur::ServiceStub
{
public:
BaxterCamera_stub(const std::string& path, RR_SHARED_PTR<RobotRaconteur::ClientContext> c);

virtual void RRInitStub();
virtual uint8_t get_camera_open();
virtual void set_camera_open(uint8_t value);

virtual void openCamera();

virtual void closeCamera();

virtual void setExposure(int16_t exposure);

virtual void setGain(int16_t gain);

virtual void setWhiteBalance(int16_t red, int16_t green, int16_t blue);

virtual void setFPS(double fps);

virtual RR_SHARED_PTR<BaxterImage > getCurrentImage();

virtual RR_SHARED_PTR<ImageHeader > getImageHeader();

virtual RR_SHARED_PTR<CameraIntrinsics > getCameraIntrinsics();

virtual RR_SHARED_PTR<RobotRaconteur::Pipe<RR_SHARED_PTR<BaxterImage > > > get_ImageStream();
virtual void set_ImageStream(RR_SHARED_PTR<RobotRaconteur::Pipe<RR_SHARED_PTR<BaxterImage > > > value);


virtual void DispatchEvent(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallbackCall(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);
virtual void RRClose();
private:
RR_SHARED_PTR<RobotRaconteur::PipeClient<RR_SHARED_PTR<BaxterImage > > > rrvar_ImageStream;
virtual void async_get_camera_open(boost::function<void (uint8_t,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);
virtual void async_set_camera_open(uint8_t value,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_get_camera_open(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (uint8_t ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
virtual void rrend_set_camera_open(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_openCamera(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_openCamera(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_closeCamera(boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_closeCamera(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_setExposure(int16_t exposure,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_setExposure(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_setGain(int16_t gain,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_setGain(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_setWhiteBalance(int16_t red, int16_t green, int16_t blue,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_setWhiteBalance(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_setFPS(double fps,boost::function<void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_setFPS(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_getCurrentImage(boost::function<void (RR_SHARED_PTR<BaxterImage >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_getCurrentImage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<BaxterImage > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_getImageHeader(boost::function<void (RR_SHARED_PTR<ImageHeader >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_getImageHeader(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<ImageHeader > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual void async_getCameraIntrinsics(boost::function<void (RR_SHARED_PTR<CameraIntrinsics >, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > rr_handler, int32_t rr_timeout=RR_TIMEOUT_INFINITE);

protected:
virtual void rrend_getCameraIntrinsics(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, boost::function< void (RR_SHARED_PTR<CameraIntrinsics > ,RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException>) > handler);
public:
virtual std::string RRType();
};


class BaxterCamera_skel : public virtual RobotRaconteur::ServiceSkel
{
public:
virtual void Init(const std::string& path, RR_SHARED_PTR<RobotRaconteur::RRObject> object, RR_SHARED_PTR<RobotRaconteur::ServerContext> context);
virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallGetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallSetProperty(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m);

virtual void ReleaseCastObject();

virtual void RegisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void UnregisterEvents(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual RR_SHARED_PTR<RobotRaconteur::RRObject> GetSubObj(const std::string &name, const std::string &ind);

virtual void InitPipeServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void InitWireServers(RR_SHARED_PTR<RobotRaconteur::RRObject> rrobj1);

virtual void DispatchPipeMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void DispatchWireMessage(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual void InitCallbackServers(RR_SHARED_PTR<RobotRaconteur::RRObject> o);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallPipeFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallWireFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, uint32_t e);

virtual RR_SHARED_PTR<void> GetCallbackFunction(uint32_t endpoint, const std::string& membername);

virtual RR_SHARED_PTR<RobotRaconteur::MessageEntry> CallMemoryFunction(RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::Endpoint> e);

virtual std::string GetObjectType();
virtual RR_SHARED_PTR<robot::service::camera::BaxterCamera > get_obj();

virtual RR_SHARED_PTR<robot::service::camera::async_BaxterCamera > get_asyncobj();

protected:
static void rr_get_camera_open(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, uint8_t value, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_openCamera(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_closeCamera(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_setExposure(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_setGain(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_setWhiteBalance(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_setFPS(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_getCurrentImage(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<BaxterImage > ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_getImageHeader(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<ImageHeader > ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
static void rr_getCameraIntrinsics(RR_WEAK_PTR<robot::service::camera::BaxterCamera_skel> skel, RR_SHARED_PTR<CameraIntrinsics > ret, RR_SHARED_PTR<RobotRaconteur::RobotRaconteurException> err, RR_SHARED_PTR<RobotRaconteur::MessageEntry> m, RR_SHARED_PTR<RobotRaconteur::ServerEndpoint> ep);
 public:
protected:bool rr_InitPipeServersRun;
bool rr_InitWireServersRun;
RR_SHARED_PTR<RobotRaconteur::PipeServer<RR_SHARED_PTR<BaxterImage > > > rr_ImageStream_pipe;
public: 
private:

};

}
}
}

