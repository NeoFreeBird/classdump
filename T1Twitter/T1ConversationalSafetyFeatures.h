//
#ifndef T1ConversationalSafetyFeatures_h
#define T1ConversationalSafetyFeatures_h
@import Foundation;

#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject;

@interface T1ConversationalSafetyFeatures : NSObject

@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (readonly, nonatomic) _Bool conversationalSafetyHeadsUpPoliticalEnabled;
@property (readonly, nonatomic) _Bool conversationalSafetyHeadsUpCopyAEnabled;
@property (readonly, nonatomic) _Bool conversationalSafetyHeadsUpCopyBEnabled;

/* instance methods */
- (id)init;
- (id)initWithFeatureSwitches:(id)switches;
- (_Bool)isConversationalSafetyHeadsUpPoliticalEnabled;
- (_Bool)isConversationalSafetyHeadsUpCopyAEnabled;
- (_Bool)isConversationalSafetyHeadsUpCopyBEnabled;

@end

#endif /* T1ConversationalSafetyFeatures_h */
