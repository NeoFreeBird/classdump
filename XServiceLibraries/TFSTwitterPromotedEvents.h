//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterPromotedEvents_h
#define TFSTwitterPromotedEvents_h
@import Foundation;

@class NSObject;

@interface TFSTwitterPromotedEvents : NSObject

/* class methods */
+ (id)eventStringForEventType:(long long)type;

@end

#endif /* TFSTwitterPromotedEvents_h */
