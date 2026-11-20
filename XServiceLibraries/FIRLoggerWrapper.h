//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRLoggerWrapper_h
#define FIRLoggerWrapper_h
@import Foundation;

@class NSObject;

@interface FIRLoggerWrapper : NSObject

/* class methods */
+ (void)logWithLevel:(long long)level service:(id)service code:(id)code message:(id)message;

@end

#endif /* FIRLoggerWrapper_h */
