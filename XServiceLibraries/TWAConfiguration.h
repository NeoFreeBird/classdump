//
#ifndef TWAConfiguration_h
#define TWAConfiguration_h
@import Foundation;

@class NSObject;

@interface TWAConfiguration : NSObject // (Swift)

/* class methods */
+ (double)decodingWarningDuration;
+ (void)setDecodingWarningDuration:(double)duration;
+ (_Bool)decodingLogErrors;
+ (void)setDecodingLogErrors:(_Bool)errors;
+ (id /* block */)reportNonFatalError;
+ (void)setReportNonFatalError:(id /* block */)error;

/* instance methods */
- (id)init;

@end

#endif /* TWAConfiguration_h */
