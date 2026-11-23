//
#ifndef _TtC11ChatGrokBot35GrokBotFastOnboardingViewController_h
#define _TtC11ChatGrokBot35GrokBotFastOnboardingViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotFastOnboardingHeroView, ChatGrokBot.GrokBotFastOnboardingViewController.AccountLinkState, ChatGrokBot.GrokBotHostingView, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotXChatEnableService, ChatGrokBot.GrokBotsInboxPromptListener ?, _$s13XDesignSystem16TrayFootnoteViewCMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo25UIImpactFeedbackGeneratorC;

@interface ChatGrokBot.GrokBotFastOnboardingViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotsInboxPromptListener ? listener;
    ChatGrokBot.GrokBotFastOnboardingViewController.AccountLinkState accountLinkState;
    ChatGrokBot.GrokBotHostingView bodyView;
    ChatGrokBot.GrokBotHostingView existingAccountPlaceholderView;
    ChatGrokBot.GrokBotHostingView existingAccountView;
    nominal type descriptor for XDesignSystem.TrayFootnoteView footnotePlaceholderView;
    nominal type descriptor for XDesignSystem.TrayFootnoteView footnoteView;
    ChatGrokBot.GrokBotSession grokBotSession;
    ChatGrokBot.GrokBotFastOnboardingHeroView heroView;
    __C.UIImpactFeedbackGenerator lightFeedbackGenerator;
    nominal type descriptor for XDesignSystem.TrayFootnoteView linkedFootnoteView;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadingTimerTask;
    __C.UIImpactFeedbackGenerator mediumFeedbackGenerator;
    ChatGrokBot.GrokBotScribing scriber;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    ChatGrokBot.GrokBotXChatEnableService xChatEnableService;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot35GrokBotFastOnboardingViewController_h */
