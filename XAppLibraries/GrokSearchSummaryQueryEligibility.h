//
#ifndef GrokSearchSummaryQueryEligibility_h
#define GrokSearchSummaryQueryEligibility_h
@import Foundation;

@class NSObject;

@interface GrokSearchSummaryQueryEligibility : NSObject // (Swift)

/* class methods */
+ (_Bool)isEligibleForSummaryWithQuery:(id)query maximumWeightedLength:(long long)length cjkCharacterWeight:(double)weight;

/* instance methods */
- (id)init;

@end

#endif /* GrokSearchSummaryQueryEligibility_h */
