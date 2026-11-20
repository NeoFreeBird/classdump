//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCProductExplorerScrollHandler_h
#define TUCProductExplorerScrollHandler_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class NSObject;

@interface TUCProductExplorerScrollHandler : NSObject <UIScrollViewDelegate> // (Swift)

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (id)initWithDataViewController:(id)controller features:(id)features;
- (id)init;

@end

#endif /* TUCProductExplorerScrollHandler_h */
