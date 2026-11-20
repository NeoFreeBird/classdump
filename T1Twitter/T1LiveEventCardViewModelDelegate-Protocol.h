//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
