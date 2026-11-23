//
#ifndef T1AISignatureDetectionFeatures_h
#define T1AISignatureDetectionFeatures_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject;

@interface T1AISignatureDetectionFeatures : NSObject

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool isGrokSignatureDetectionEnabled;
@property (readonly, nonatomic) _Bool isC2PADetectionEnabled;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;

@end

#endif /* T1AISignatureDetectionFeatures_h */
