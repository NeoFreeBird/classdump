//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10CallScreen25CallDockBarViewController_h
#define _TtC10CallScreen25CallDockBarViewController_h
@import Foundation;

@class CallEngine.Call, CallScreen.CallDockBarView, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$syyc;

@interface CallScreen.CallDockBarViewController : UIViewController { // (Swift)
    /* instance variables */
    CallEngine.Call call;
    () -> () onTap;
    CallScreen.CallDockBarView internalView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)handleTap;
- (void)toggleMicrophone;
- (void)endCall;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10CallScreen25CallDockBarViewController_h */
