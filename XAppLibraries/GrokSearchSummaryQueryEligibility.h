//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
