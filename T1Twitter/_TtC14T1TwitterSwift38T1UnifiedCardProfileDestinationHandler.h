//
#ifndef _TtC14T1TwitterSwift38T1UnifiedCardProfileDestinationHandler_h
#define _TtC14T1TwitterSwift38T1UnifiedCardProfileDestinationHandler_h
@import Foundation;

#include "TUCDestinationHandler-Protocol.h"

@class NSObject, _$s21TwitterUnifiedCardsUI0B23CardEventHandlerContextCMn, _$sSo25TUCProfileDestinationData_p;

@interface T1TwitterSwift.T1UnifiedCardProfileDestinationHandler : NSObject <TUCDestinationHandler> { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterUnifiedCardsUI.UnifiedCardEventHandlerContext context;
    __C.TUCProfileDestinationData profileData;
}

/* class methods */
+ (id)handlerWithContext:(id)context;

/* instance methods */
- (void)handleClickWithCompletion:(id /* block */)completion;
- (id)handleForceTouchWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift38T1UnifiedCardProfileDestinationHandler_h */
