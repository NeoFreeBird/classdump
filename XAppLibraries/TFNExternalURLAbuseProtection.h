//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNExternalURLAbuseProtection_h
#define TFNExternalURLAbuseProtection_h
@import Foundation;

@class NSDate, NSObject;

@interface TFNExternalURLAbuseProtection : NSObject

@property (nonatomic) _Bool shouldBlockAllAttempts;
@property (retain, nonatomic) NSDate *firstAttemptedDate;
@property (nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (_Bool)shouldBlockAttempt;
- (void)resetAbuseProtection;

@end

#endif /* TFNExternalURLAbuseProtection_h */
