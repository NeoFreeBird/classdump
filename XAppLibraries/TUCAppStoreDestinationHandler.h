//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCAppStoreDestinationHandler_h
#define TUCAppStoreDestinationHandler_h
@import Foundation;

#include "TUCDestinationHandler-Protocol.h"

@class NSObject;

@interface TUCAppStoreDestinationHandler : NSObject <TUCDestinationHandler> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 appStoreDataEntry;
    @40@0:8:16@24@32 context;
}

/* class methods */
+ (id)handlerWithContext:(id)context;

/* instance methods */
- (void)handleClickWithCompletion:(id /* block */)completion;
- (id)handleForceTouchWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* TUCAppStoreDestinationHandler_h */
