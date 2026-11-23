//
#ifndef TFSTwitterLoginVerificationEnrollment_h
#define TFSTwitterLoginVerificationEnrollment_h
@import Foundation;

@class NSObject;

@interface TFSTwitterLoginVerificationEnrollment : NSObject

@property (readonly, nonatomic) int enrolled;
@property (readonly, nonatomic) _Bool enrolledElsewhere;

/* class methods */
+ (id)loginVerificationEnrollmentWithJSONData:(id)jsondata error:(id *)error;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary;
- (int)_verificationModeWithString:(id)string;
- (_Bool)isEnrolledElsewhere;

@end

#endif /* TFSTwitterLoginVerificationEnrollment_h */
