//
#ifndef T1HiringFeatures_h
#define T1HiringFeatures_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject;

@interface T1HiringFeatures : NSObject

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool isJobSearchEnabled;
@property (readonly, nonatomic) _Bool isNativeJobSearchEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* T1HiringFeatures_h */
