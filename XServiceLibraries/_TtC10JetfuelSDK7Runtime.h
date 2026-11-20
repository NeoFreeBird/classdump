//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK7Runtime_h
#define _TtC10JetfuelSDK7Runtime_h
@import Foundation;

@class JetfuelSDK.ActionStorage, JetfuelSDK.AtomStorageProtocol, JetfuelSDK.Auth ??, JetfuelSDK.DefaultCache, JetfuelSDK.DevSettings ?, JetfuelSDK.MediaLoader ??, JetfuelSDK.Network ??, JetfuelSDK.Runtime.Config, _TtCs12_SwiftObject;

@interface JetfuelSDK.Runtime : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.Auth ?? $__lazy_storage_$_auth;
    JetfuelSDK.Network ?? $__lazy_storage_$_network;
    JetfuelSDK.MediaLoader ?? $__lazy_storage_$_mediaLoader;
    JetfuelSDK.DefaultCache cache;
    JetfuelSDK.AtomStorageProtocol atomStorage;
    JetfuelSDK.ActionStorage actionStorage;
    JetfuelSDK.DevSettings ? $__lazy_storage_$_devSettings;
    JetfuelSDK.Runtime.Config config;
}

@end

#endif /* _TtC10JetfuelSDK7Runtime_h */
