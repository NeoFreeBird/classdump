//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9ChatInbox43ExternalAppIntegrationsPromptViewController_h
#define _TtC9ChatInbox43ExternalAppIntegrationsPromptViewController_h
@import Foundation;

@class ChatInbox.ExternalAppIntegrationsNavigation, ChatInbox.ExternalAppIntegrationsPromptHeroView, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelC;

@interface ChatInbox.ExternalAppIntegrationsPromptViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatInbox.ExternalAppIntegrationsNavigation externalAppIntegrationsNavigation;
    ChatInbox.ExternalAppIntegrationsPromptHeroView heroView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.UILabel titleLabel;
    __C.UILabel bodyLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC9ChatInbox43ExternalAppIntegrationsPromptViewController_h */
