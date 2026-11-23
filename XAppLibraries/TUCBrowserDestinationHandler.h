//
#ifndef TUCBrowserDestinationHandler_h
#define TUCBrowserDestinationHandler_h
@import Foundation;

#include "TUCDestinationHandler-Protocol.h"

@class NSObject;

@interface TUCBrowserDestinationHandler : NSObject <TUCDestinationHandler> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 url;
    @40@0:8:16@24@32 destination;
    @40@0:8:16@24@32 context;
}

/* class methods */
+ (id)handlerWithContext:(id)context;

/* instance methods */
- (void)handleClickWithCompletion:(id /* block */)completion;
- (id)handleForceTouchWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* TUCBrowserDestinationHandler_h */
