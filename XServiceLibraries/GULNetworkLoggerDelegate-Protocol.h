//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GULNetworkLoggerDelegate_Protocol_h
#define GULNetworkLoggerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GULNetworkLoggerDelegate <NSObject>

@required

/* required instance methods */
- (void)GULNetwork_logWithLevel:(long long)level messageCode:(long long)code message:(id)message contexts:(id)contexts;
- (void)GULNetwork_logWithLevel:(long long)level messageCode:(long long)code message:(id)message context:(id)context;
- (void)GULNetwork_logWithLevel:(long long)level messageCode:(long long)code message:(id)message;

@optional

@end

#endif /* GULNetworkLoggerDelegate_Protocol_h */
