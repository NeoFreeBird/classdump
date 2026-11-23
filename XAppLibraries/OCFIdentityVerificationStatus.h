//
#ifndef OCFIdentityVerificationStatus_h
#define OCFIdentityVerificationStatus_h
@import Foundation;

@class NSObject, NSString;

@interface OCFIdentityVerificationStatus : NSObject

@property (readonly, nonatomic) _Bool isVerified;
@property (readonly, nonatomic) NSString *pinCode;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;

@end

#endif /* OCFIdentityVerificationStatus_h */
