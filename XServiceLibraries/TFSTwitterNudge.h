//
#ifndef TFSTwitterNudge_h
#define TFSTwitterNudge_h
@import Foundation;

#include "TFSTwitterCompositionNudge.h"

@class NSObject, NSString;

@interface TFSTwitterNudge : NSObject

@property (readonly, nonatomic) unsigned long long nudgeType;
@property (readonly, nonatomic) NSString *nudgeIdentifier;
@property (readonly, nonatomic) NSString *proposedTweetLanguage;
@property (readonly, nonatomic) TFSTwitterCompositionNudge *compositionNudge;

/* class methods */
+ (id)nudgeFromError:(id)error createNudgeOperationErrorKey:(id)key;

/* instance methods */
- (id)init;
- (id)initWithNudgeType:(unsigned long long)type nudgeIdentifier:(id)identifier nudgeProposedTweetLanguage:(id)language compositionNudge:(id)nudge;

@end

#endif /* TFSTwitterNudge_h */
