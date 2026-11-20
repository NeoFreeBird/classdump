//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
