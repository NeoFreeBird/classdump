//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
