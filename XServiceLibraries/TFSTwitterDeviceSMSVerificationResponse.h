//
#ifndef TFSTwitterDeviceSMSVerificationResponse_h
#define TFSTwitterDeviceSMSVerificationResponse_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterDeviceSMSVerificationResponse : NSObject

@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) _Bool isNumeric;
@property (readonly, nonatomic) _Bool isValid;

/* instance methods */
- (id)initWithPhoneNumber:(id)number isNumeric:(_Bool)numeric isValid:(_Bool)valid;
- (id)init;

@end

#endif /* TFSTwitterDeviceSMSVerificationResponse_h */
