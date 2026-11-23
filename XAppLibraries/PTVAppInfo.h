//
#ifndef PTVAppInfo_h
#define PTVAppInfo_h
@import Foundation;

@class NSObject;

@interface PTVAppInfo : NSObject

/* class methods */
+ (int)iOSMajorVersion;
+ (id)DeviceName;
+ (id)ShortAppVersionString;
+ (id)FullAppVersionString;

@end

#endif /* PTVAppInfo_h */
