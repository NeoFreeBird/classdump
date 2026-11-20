//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatNumber35ChatNumberTrayContentViewController_h
#define _TtC10ChatNumber35ChatNumberTrayContentViewController_h
@import Foundation;

@class ChatNumber.ChatNumberDigitsView, ChatNumber.ChatNumberViewModel, ChatNumber.ChatNumberWorkerPluginPoint, Swift.Bool, _$s13XDesignSystem10LinkedTextCMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatNumber.ChatNumberTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatNumber.ChatNumberViewModel viewModel;
    ChatNumber.ChatNumberWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.LinkedText descriptionText;
    ChatNumber.ChatNumberDigitsView digitsView;
    nominal type descriptor for XDesignSystem.ListItems settingsList;
    Swift.Bool hasScribedTrayOpened;
    Swift.Bool isPreparingShareSheet;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10ChatNumber35ChatNumberTrayContentViewController_h */
