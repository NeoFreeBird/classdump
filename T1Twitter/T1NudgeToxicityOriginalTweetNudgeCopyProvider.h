//
#ifndef T1NudgeToxicityOriginalTweetNudgeCopyProvider_h
#define T1NudgeToxicityOriginalTweetNudgeCopyProvider_h
@import Foundation;

#include "T1NudgeToxicityNudgeCopyProvider-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject, NSString;

@interface T1NudgeToxicityOriginalTweetNudgeCopyProvider : NSObject <T1NudgeToxicityNudgeCopyProvider> {
    /* instance variables */
    unsigned long long cachedCopyVersion;
}

@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> accountFeatureSwitches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (id)init;
- (id)nudgeTitle;
- (id)nudgeSubtitle;
- (unsigned long long)copyVersion;

@end

#endif /* T1NudgeToxicityOriginalTweetNudgeCopyProvider_h */
