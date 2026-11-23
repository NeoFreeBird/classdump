//
#ifndef T1LiveEventCardViewModelDelegate_Protocol_h
#define T1LiveEventCardViewModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1LiveEventCardViewModelDelegate <NSObject>

@required

/* required instance methods */
- (void)liveEventCardViewModelDidUpdate:(id)update needsReload:(_Bool)reload;

@optional

@end

#endif /* T1LiveEventCardViewModelDelegate_Protocol_h */
