//
#ifndef _TtC14T1TwitterSwift36ElectionsChatContainerViewController_h
#define _TtC14T1TwitterSwift36ElectionsChatContainerViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, _$s11XLiveChatUI04LiveB14ViewControllerCMn, _$s11XLiveChatUI04LiveB9ViewModelCMn;

@interface T1TwitterSwift.ElectionsChatContainerViewController : TFNViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for XLiveChatUI.LiveChatViewModel chatViewModel;
    nominal type descriptor for XLiveChatUI.LiveChatViewController chatViewController;
    Swift.Bool isAppeared;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift36ElectionsChatContainerViewController_h */
