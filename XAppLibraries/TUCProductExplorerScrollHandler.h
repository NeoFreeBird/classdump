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
