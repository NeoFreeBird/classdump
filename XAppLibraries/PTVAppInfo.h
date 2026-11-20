//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
