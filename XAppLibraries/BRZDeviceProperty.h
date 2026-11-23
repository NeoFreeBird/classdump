//
#ifndef BRZDeviceProperty_h
#define BRZDeviceProperty_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZDeviceProperty : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift deviceProperty;
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
