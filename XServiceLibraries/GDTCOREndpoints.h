//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GDTCOREndpoints_h
#define GDTCOREndpoints_h
@import Foundation;

@class NSObject;

@interface GDTCOREndpoints : NSObject

/* class methods */
+ (id)uploadURLs;
+ (id)uploadURLForTarget:(long long)target;

@end

#endif /* GDTCOREndpoints_h */
