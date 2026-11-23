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
