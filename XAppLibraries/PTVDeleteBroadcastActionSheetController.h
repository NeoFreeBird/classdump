//
#ifndef PTVDeleteBroadcastActionSheetController_h
#define PTVDeleteBroadcastActionSheetController_h
@import Foundation;

#include "PTVActionSheetController.h"

@interface PTVDeleteBroadcastActionSheetController : PTVActionSheetController

@property (copy, nonatomic) id /* block */ didCancelBlock;
@property (copy, nonatomic) id /* block */ didHideBlock;
@property (copy, nonatomic) id /* block */ willDeleteBlock;

/* instance methods */
- (id)initActionSheetToDeleteBroadcast:(id)broadcast loggedInUser:(id)user twitterIntegrationDelegate:(id)delegate emailDelegate:(id)delegate broadcastDeleteCompletion:(id /* block */)completion;
- (void)dismissSelfFromDismissAction:(_Bool)action;

@end

#endif /* PTVDeleteBroadcastActionSheetController_h */
