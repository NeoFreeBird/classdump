//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift40ImmersiveBroadcastChatHostViewController_h
#define _TtC14T1TwitterSwift40ImmersiveBroadcastChatHostViewController_h
@import Foundation;

@class T1TwitterSwift.ImmersiveBroadcastChatHostViewControllerDelegate ?, TFNViewController, _$s11XLiveChatUI04LiveB14ViewControllerCMn ?, _$s11XLiveChatUI04LiveB9ViewModelC16ConnectionStatusOMn ?, _$s11XLiveChatUI04LiveB9ViewModelCMn, _$s12CoreGraphics7CGFloatVMn, _$sSo17TFNTwitterAccountC, _$sSo6UIViewC, _$sSo6UIViewCSg;

@interface T1TwitterSwift.ImmersiveBroadcastChatHostViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.UIView? handleView;
    __C.UIView contentView;
    nominal type descriptor for XLiveChatUI.LiveChatViewModel.ConnectionStatus ? lastObservedConnectionStatus;
    nominal type descriptor for XLiveChatUI.LiveChatViewModel chatViewModel;
    __C.TFNTwitterAccount account;
    nominal type descriptor for XLiveChatUI.LiveChatViewController ? chatViewController;
    __C.UIView? errorView;
    __C.UIView? currentlyShownView;
    T1TwitterSwift.ImmersiveBroadcastChatHostViewControllerDelegate ? delegate;
    nominal type descriptor for CoreGraphics.CGFloat bottomInset;
    nominal type descriptor for CoreGraphics.CGFloat minHeight;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift40ImmersiveBroadcastChatHostViewController_h */
