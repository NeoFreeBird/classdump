//
#ifndef _TtC4Jobs17JobsFeatureAccess_h
#define _TtC4Jobs17JobsFeatureAccess_h
@import Foundation;

@class NSObject, _$sSo24TPSFeatureSwitchesAccess_p;

@interface Jobs.JobsFeatureAccess : NSObject { // (Swift)
    /* instance variables */
    __C.TPSFeatureSwitchesAccess featureSwitches;
}

@property (nonatomic, readonly) _Bool shouldShowJobsTab;
@property (nonatomic, readonly) _Bool shouldShowJetfuelImpl;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* _TtC4Jobs17JobsFeatureAccess_h */
