//
#ifndef PTVGuestDebugViewController_h
#define PTVGuestDebugViewController_h
@import Foundation;

#include "PTVBaseDebugViewController.h"
#include "PTVBroadcastController.h"
#include "PTVGuestCoordinator-Protocol.h"

@interface PTVGuestDebugViewController : PTVBaseDebugViewController

@property (retain, nonatomic) PTVBroadcastController *broadcastController;
@property (retain, nonatomic) id <PTVGuestCoordinator> guestCoordinator;

/* instance methods */
- (id)initWithBroadcastController:(id)controller guestCoordinator:(id)coordinator;
- (void)refreshSections;

@end

#endif /* PTVGuestDebugViewController_h */
