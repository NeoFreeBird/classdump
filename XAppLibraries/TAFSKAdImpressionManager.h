//
#ifndef TAFSKAdImpressionManager_h
#define TAFSKAdImpressionManager_h
@import Foundation;

#include "TAFAppAdImpressionHandler-Protocol.h"

@class NSObject;

@interface TAFSKAdImpressionManager : NSObject <TAFAppAdImpressionHandler> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 scribe;
    @40@0:8:16@24@32 minimumImpressionDuration;
    @40@0:8:16@24@32 endImpressionTimingExperimentBucket;
    @40@0:8:16@24@32 vtaRefactoringExperimentBucket;
    @40@0:8:16@24@32 skAdNetwork4Enabled;
    @40@0:8:16@24@32 skAdNetworkInterface;
    @40@0:8:16@24@32 crashlyticsInterface;
    @40@0:8:16@24@32 serialQueue;
    @40@0:8:16@24@32 numberOfStartImpressionCalls;
    @40@0:8:16@24@32 numberOfEndImpressionCalls;
    @40@0:8:16@24@32 startImpressionStartDate;
    @40@0:8:16@24@32 endImpressionStartDate;
    @40@0:8:16@24@32 candidateImpression;
    @40@0:8:16@24@32 currentImpression;
}

/* class methods */
+ (id)sharedSerialQueue;

/* instance methods */
- (void)startImpressionWithPromotedContent:(id)content scribeContext:(id)context;
- (void)endImpressionWithPromotedContent:(id)content scribeContext:(id)context;
- (id)initWithScribe:(id)scribe minimumImpressionDuration:(double)duration skAdNetworkInterface:(id)interface crashlyticsInterface:(id)interface serialQueue:(id)queue endImpressionTimingExperimentBucket:(unsigned long long)bucket vtaRefactoringExperimentBucket:(unsigned long long)bucket skAdNetwork4Enabled:(_Bool)enabled;
- (id)init;

@end

#endif /* TAFSKAdImpressionManager_h */
