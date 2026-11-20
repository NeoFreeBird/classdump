//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
