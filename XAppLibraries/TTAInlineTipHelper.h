//
#ifndef TTAInlineTipHelper_h
#define TTAInlineTipHelper_h
@import Foundation;

@class NSObject;

@interface TTAInlineTipHelper : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 answeredFeedbackActions;
    @40@0:8:16@24@32 impressedSurveyPostIDs;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (_Bool)shouldLogSurveyImpressionForUnifiedID:(id)id accountID:(id)id;

@end

#endif /* TTAInlineTipHelper_h */
