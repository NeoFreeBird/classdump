//
#ifndef _TtC19ChatMessageRequests29MessageRequestsViewController_h
#define _TtC19ChatMessageRequests29MessageRequestsViewController_h
@import Foundation;

@class ChatMessageRequests.MessageRequestsListBuilder, ChatMessageRequests.MessageRequestsWorkerPluginPoint, UIViewController, _$sSo16UIViewControllerCSg;

@interface ChatMessageRequests.MessageRequestsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatMessageRequests.MessageRequestsListBuilder listBuilder;
    ChatMessageRequests.MessageRequestsWorkerPluginPoint workerPluginPoint;
    __C.UIViewController? priorityListViewController;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageRequests29MessageRequestsViewController_h */
