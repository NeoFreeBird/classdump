//
#ifndef TFSTwitterDeviceRegistrationError_h
#define TFSTwitterDeviceRegistrationError_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterDeviceRegistrationError : NSObject

@property (readonly, nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *message;

/* class methods */
+ (id)deviceRegisterErrorWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithCode:(long long)code message:(id)message;
- (id)init;

@end

#endif /* TFSTwitterDeviceRegistrationError_h */
