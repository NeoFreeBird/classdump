//
#ifndef _TtC33TwitterCommunitiesFeatureSwitches19CommunitiesSwitches_h
#define _TtC33TwitterCommunitiesFeatureSwitches19CommunitiesSwitches_h
@import Foundation;

#include "TCMCommunitiesFeatures.h"
#include "TCMCommunitiesFeaturesWrapper-Protocol.h"

@class NSObject, _$sSo24TPSFeatureSwitchesAccess_p;

@interface TwitterCommunitiesFeatureSwitches.CommunitiesSwitches : NSObject <TCMCommunitiesFeaturesWrapper> { // (Swift)
    /* instance variables */
    __C.TPSFeatureSwitchesAccess featureSwitches;
}

@property (nonatomic, readonly) TCMCommunitiesFeatures *wrappedCommunitiesFeatures;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* _TtC33TwitterCommunitiesFeatureSwitches19CommunitiesSwitches_h */
