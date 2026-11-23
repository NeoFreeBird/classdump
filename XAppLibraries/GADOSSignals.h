//
#ifndef GADOSSignals_h
#define GADOSSignals_h
@import Foundation;

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GADOSSignals : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _useCachedIDFV;
    _Bool _disableDeviceString;
}

@property (readonly, nonatomic) NSString *vendorString;
@property (readonly, nonatomic) NSString *deviceString;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)deviceStringWithATTStatus:(long long)attstatus;

@end

#endif /* GADOSSignals_h */
