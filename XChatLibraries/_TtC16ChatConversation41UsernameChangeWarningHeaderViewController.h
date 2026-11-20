//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation41UsernameChangeWarningHeaderViewController_h
#define _TtC16ChatConversation41UsernameChangeWarningHeaderViewController_h
@import Foundation;

@class ChatConversation.UsernameChangeWarningHeaderView ?, ChatConversationServices.ConversationNavigation, ChatModels.ConversationUsernameChangeWarningStream, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo014Subsystem_ios_B31Arm64_mainUsernameChangeWarningCSg, _$sSo014Subsystem_ios_B35Arm64_mainUsernameChangeWarningRepo_p, _$sSo014Subsystem_ios_B38Arm64_mainUsernameChangeWarningScriber_p;

@interface ChatConversation.UsernameChangeWarningHeaderViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatModels.ConversationUsernameChangeWarningStream conversationUsernameChangeWarningStream;
    __C.Subsystem_ios_iosArm64_mainUsernameChangeWarningRepo usernameChangeWarningRepo;
    __C.Subsystem_ios_iosArm64_mainUsernameChangeWarningScriber usernameChangeWarningScriber;
    ChatConversation.UsernameChangeWarningHeaderView ? $__lazy_storage_$_internalView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.Subsystem_ios_iosArm64_mainUsernameChangeWarning? warning;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC16ChatConversation41UsernameChangeWarningHeaderViewController_h */
