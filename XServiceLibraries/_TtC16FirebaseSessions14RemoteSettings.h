//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16FirebaseSessions14RemoteSettings_h
#define _TtC16FirebaseSessions14RemoteSettings_h
@import Foundation;

@class FirebaseCoreInternal.FIRAllocatedUnfairLock FirebaseSessions.SettingsCacheClient, FirebaseSessions.ApplicationInfoProtocol, FirebaseSessions.SettingsDownloadClient, _TtCs12_SwiftObject;

@interface FirebaseSessions.RemoteSettings : Swift._SwiftObject { // (Swift)
    /* instance variables */
    FirebaseSessions.ApplicationInfoProtocol appInfo;
    FirebaseSessions.SettingsDownloadClient downloader;
    FirebaseCoreInternal.FIRAllocatedUnfairLock FirebaseSessions.SettingsCacheClient cache;
}

@end

#endif /* _TtC16FirebaseSessions14RemoteSettings_h */
