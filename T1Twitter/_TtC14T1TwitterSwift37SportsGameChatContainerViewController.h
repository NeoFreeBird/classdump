//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift37SportsGameChatContainerViewController_h
#define _TtC14T1TwitterSwift37SportsGameChatContainerViewController_h
@import Foundation;

@class TFNViewController, _$s11XLiveChatUI04LiveB14ViewControllerCMn, _$s11XLiveChatUI04LiveB9ViewModelCMn, _$sSS, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.SportsGameChatContainerViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.String scribePage;
    nominal type descriptor for XLiveChatUI.LiveChatViewModel chatViewModel;
    nominal type descriptor for XLiveChatUI.LiveChatViewController chatViewController;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)applicationDidEnterBackground:(id)background;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift37SportsGameChatContainerViewController_h */
