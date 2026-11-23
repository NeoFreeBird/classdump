//
#ifndef C2PADetectionResult_h
#define C2PADetectionResult_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface C2PADetectionResult : NSObject // (Swift)

@property (nonatomic, readonly) _Bool isAIGenerated;
@property (nonatomic, readonly) NSArray *aiDigitalSourceTypes;
@property (nonatomic, readonly) NSArray *softwareAgents;
@property (nonatomic, readonly) NSString *claimGenerator;
@property (nonatomic, readonly) NSArray *actionLabels;
@property (nonatomic, readonly) NSString *rawManifestJSON;
@property (nonatomic, readonly) _Bool hasC2PAManifest;
@property (nonatomic, readonly) _Bool validationPassed;
@property (nonatomic, readonly) NSArray *validationFailures;
@property (nonatomic, readonly) NSArray *validationInformational;
@property (nonatomic, copy) NSString *exemptionReason;
@property (nonatomic, copy) NSString *skippedReason;
@property (nonatomic) double detectionDuration;

/* class methods */
+ (id)noManifest;
+ (id)skippedWithReason:(id)reason;

/* instance methods */
- (id)init;

@end

#endif /* C2PADetectionResult_h */
