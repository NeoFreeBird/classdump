//
#ifndef T1SpacesFeatureConfiguration_h
#define T1SpacesFeatureConfiguration_h
@import Foundation;

#include "TASSpacesFeatureConfiguration-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject;

@interface T1SpacesFeatureConfiguration : NSObject <TASSpacesFeatureConfiguration>

@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool cancelFromShareEditDismissesShareEnabled;
@property (readonly, nonatomic) float soundsVolume;
@property (readonly, nonatomic) _Bool isWelcomeTrayTitleFocusSkipEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;
- (_Bool)isCancelFromShareEditDismissesShareEnabled;

@end

#endif /* T1SpacesFeatureConfiguration_h */
