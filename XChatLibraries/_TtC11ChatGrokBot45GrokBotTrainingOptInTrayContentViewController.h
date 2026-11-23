//
#ifndef _TtC11ChatGrokBot45GrokBotTrainingOptInTrayContentViewController_h
#define _TtC11ChatGrokBot45GrokBotTrainingOptInTrayContentViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotTrainingOptInAction _$scSg ->, ChatGrokBot.GrokBotTrainingOptInActionsView, ChatGrokBot.GrokBotTrainingOptInArtView, ChatGrokBot.GrokBotTrainingOptInCopy, ChatGrokBot.GrokBotTrainingOptInEntry, ChatGrokBot.GrokBotTrainingOptInStep, _$s10Foundation3URLVMn ?, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotTrainingOptInTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotTrainingOptInAction _$scSg -> onAction;
    ChatGrokBot.GrokBotTrainingOptInStep step;
    ChatGrokBot.GrokBotTrainingOptInActionsView actionsView;
    ChatGrokBot.GrokBotTrainingOptInArtView artView;
    ChatGrokBot.GrokBotTrainingOptInCopy copy;
    ChatGrokBot.GrokBotTrainingOptInEntry entry;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? privacyFootnoteView;
    nominal type descriptor for Foundation.URL ? privacyPolicyURL;
    __C.UILabel messageLabel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot45GrokBotTrainingOptInTrayContentViewController_h */
