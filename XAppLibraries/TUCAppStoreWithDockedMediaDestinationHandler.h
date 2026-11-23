//
#ifndef TUCAppStoreWithDockedMediaDestinationHandler_h
#define TUCAppStoreWithDockedMediaDestinationHandler_h
@import Foundation;

#include "TUCDestinationHandler-Protocol.h"

@class NSObject;

@interface TUCAppStoreWithDockedMediaDestinationHandler : NSObject <TUCDestinationHandler> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 appStoreDataEntry;
    @40@0:8:16@24@32 mediaEntity;
    @40@0:8:16@24@32 context;
}

/* class methods */
+ (id)handlerWithContext:(id)context;

/* instance methods */
- (void)handleClickWithCompletion:(id /* block */)completion;
- (id)handleForceTouchWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* TUCAppStoreWithDockedMediaDestinationHandler_h */
