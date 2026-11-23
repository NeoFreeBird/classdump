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
