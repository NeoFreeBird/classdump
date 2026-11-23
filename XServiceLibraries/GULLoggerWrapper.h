//
#ifndef GULLoggerWrapper_h
#define GULLoggerWrapper_h
@import Foundation;

@class NSObject;

@interface GULLoggerWrapper : NSObject

/* class methods */
+ (void)logWithLevel:(long long)level subsystem:(id)subsystem category:(id)category messageCode:(id)code message:(id)message arguments:(char *)arguments;
+ (void)logWithLevel:(long long)level withService:(id)service withCode:(id)code withMessage:(id)message withArgs:(char *)args;

@end

#endif /* GULLoggerWrapper_h */
