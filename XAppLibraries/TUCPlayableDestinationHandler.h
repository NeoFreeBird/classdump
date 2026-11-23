//
#ifndef TUCPlayableDestinationHandler_h
#define TUCPlayableDestinationHandler_h
@import Foundation;

#include "TUCDestinationHandler-Protocol.h"

@class NSObject;

@interface TUCPlayableDestinationHandler : NSObject <TUCDestinationHandler> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 context;
    @40@0:8:16@24@32 destination;
    @40@0:8:16@24@32 transitionObject;
}

/* class methods */
+ (id)handlerWithContext:(id)context;

/* instance methods */
- (void)handleClickWithCompletion:(id /* block */)completion;
- (id)handleForceTouchWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* TUCPlayableDestinationHandler_h */
