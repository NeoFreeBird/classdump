//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
