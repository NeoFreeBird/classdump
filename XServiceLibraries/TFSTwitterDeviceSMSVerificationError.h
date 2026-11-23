//
#ifndef TFSTwitterDeviceSMSVerificationError_h
#define TFSTwitterDeviceSMSVerificationError_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterDeviceSMSVerificationError : NSObject

@property (readonly, nonatomic) long long code;
@property (readonly, copy, nonatomic) NSString *message;

/* class methods */
+ (id)phoneVerificationErrorWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithCode:(long long)code message:(id)message;
- (id)init;

@end

#endif /* TFSTwitterDeviceSMSVerificationError_h */
