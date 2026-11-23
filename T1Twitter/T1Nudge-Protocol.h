//
#ifndef T1Nudge_Protocol_h
#define T1Nudge_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1Nudge <NSObject>

@required

@property (readonly, nonatomic) unsigned long long nudgeType;

/* required instance methods */
- (void)presentNudgeFromViewController:(id)controller animated:(_Bool)animated;
- (void)dismissNudgeAnimated:(_Bool)animated completion:(id /* block */)completion;

@optional

@end

#endif /* T1Nudge_Protocol_h */
