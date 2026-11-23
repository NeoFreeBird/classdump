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
