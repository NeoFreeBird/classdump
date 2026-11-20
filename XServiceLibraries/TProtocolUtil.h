//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TProtocolUtil_h
#define TProtocolUtil_h
@import Foundation;

@class NSObject;

@interface TProtocolUtil : NSObject

/* class methods */
+ (void)skipType:(int)type onProtocol:(id)protocol;

@end

#endif /* TProtocolUtil_h */
