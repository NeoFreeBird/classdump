//
#ifndef _TtC10XElections27ElectionsChatViewController_h
#define _TtC10XElections27ElectionsChatViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XElections.ElectionsChatContent ?, XElections.ElectionsChatContent _$sSgSSScMYcc, XElections.ElectionsChatCountdownView, XElections.ElectionsLiveViewersPillView, _$s10Foundation4DateVMn ?, _$s20TwitterActionService0bC0CMn, _$s7Combine14AnyCancellableCMn ?, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSo7NSTimerCSg;

@interface XElections.ElectionsChatViewController : UIViewController { // (Swift)
    /* instance variables */
    Swift.String electionID;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    XElections.ElectionsChatContent _$sSgSSScMYcc makeChat;
    XElections.ElectionsChatCountdownView countdownView;
    XElections.ElectionsLiveViewersPillView pill;
    XElections.ElectionsChatContent ? chat;
    Swift.Bool showsPill;
    nominal type descriptor for Combine.AnyCancellable ? viewersSubscription;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    __C.NSTimer? timer;
    nominal type descriptor for Foundation.Date ? opensAt;
    Swift.Bool isAppeared;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XElections27ElectionsChatViewController_h */
