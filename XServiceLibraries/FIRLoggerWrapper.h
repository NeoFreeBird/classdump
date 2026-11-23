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
