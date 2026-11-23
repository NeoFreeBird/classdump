//
#ifndef _TtC16HealthFoundation19AppReinstallTracker_h
#define _TtC16HealthFoundation19AppReinstallTracker_h
@import Foundation;

@class NSObject, Swift.Bool, _$s2os6LoggerVMn, _$sSi, _$sSo11TFSKeychainC, _$sSo14NSUserDefaultsC;

@interface HealthFoundation.AppReinstallTracker : NSObject { // (Swift)
    /* instance variables */
    __C.NSUserDefaults userDefaults;
    __C.TFSKeychain keychain;
    nominal type descriptor for os.Logger logger;
    Swift.Bool isFirstLaunchAfterReinstall;
    Swift.Int currentReinstallCount;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (void)appDidLaunchNotifyOnReinstallDetected:(id /* block */)detected;
- (id)init;

@end

#endif /* _TtC16HealthFoundation19AppReinstallTracker_h */
