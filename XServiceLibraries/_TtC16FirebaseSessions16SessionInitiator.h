//
#ifndef _TtC16FirebaseSessions16SessionInitiator_h
#define _TtC16FirebaseSessions16SessionInitiator_h
@import Foundation;

@class FirebaseSessions.SettingsProtocol, _$s10Foundation4DateVMn, _$s10Foundation4DateVMn _$syc, _$syyc, _TtCs12_SwiftObject;

@interface FirebaseSessions.SessionInitiator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.Date _$syc currentTime;
    FirebaseSessions.SettingsProtocol settings;
    nominal type descriptor for Foundation.Date backgroundTime;
    () -> () initiateSessionStart;
}

/* instance methods */
- (void)appBackgrounded;
- (void)appForegrounded;

@end

#endif /* _TtC16FirebaseSessions16SessionInitiator_h */
