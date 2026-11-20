//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMinimumVersionSupport_h
#define GADMinimumVersionSupport_h
@import Foundation;

@class NSObject;

@interface GADMinimumVersionSupport : NSObject

/* class methods */
+ (_Bool)OSIsSupported;

@end

#endif /* GADMinimumVersionSupport_h */
