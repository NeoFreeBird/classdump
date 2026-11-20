//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZDeviceProperty_h
#define BRZDeviceProperty_h
@import Foundation;

@class Chat.DidEndCall, NSObject;

@interface BRZDeviceProperty : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall deviceProperty;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)model;
+ (id)osVersion;
+ (id)resolution;
+ (id)timeZone;
+ (id)locale;
+ (id)carrier;
+ (id)pushEnabled;
+ (id)pushAuthStatus;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* BRZDeviceProperty_h */
