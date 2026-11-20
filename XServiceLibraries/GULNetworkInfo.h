//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GULNetworkInfo_h
#define GULNetworkInfo_h
@import Foundation;

@class NSObject;

@interface GULNetworkInfo : NSObject

/* class methods */
+ (id)getNetworkInfo;
+ (long long)getNetworkType;
+ (id)getNetworkRadioType;

@end

#endif /* GULNetworkInfo_h */
