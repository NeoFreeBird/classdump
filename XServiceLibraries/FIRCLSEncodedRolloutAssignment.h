//
#ifndef FIRCLSEncodedRolloutAssignment_h
#define FIRCLSEncodedRolloutAssignment_h
@import Foundation;

@class HasMalware, NSObject, NSString;

@interface FIRCLSEncodedRolloutAssignment : NSObject // (Swift)

@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, copy) NSString *variantId;
@property (nonatomic) long long templateVersion;
@property (nonatomic, copy) NSString *parameterKey;
@property (nonatomic, copy) NSString *parameterValue;

/* instance methods */
- (id)init;

@end

#endif /* FIRCLSEncodedRolloutAssignment_h */
