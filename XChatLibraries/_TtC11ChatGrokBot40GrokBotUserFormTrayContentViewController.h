//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot40GrokBotUserFormTrayContentViewController_h
#define _TtC11ChatGrokBot40GrokBotUserFormTrayContentViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotUserForm, ChatGrokBot.GrokBotUserFormFieldListView, ChatGrokBot.GrokBotUserFormSubmission _$scSg ->, ChatGrokBot.GrokBotUserFormValues, Swift.Bool, _$s13XDesignSystem16TrayFootnoteViewCMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotUserFormTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    (() -> ())? onEscalate;
    ChatGrokBot.GrokBotUserFormSubmission _$scSg -> onSubmit;
    Swift.Bool canEscalate;
    ChatGrokBot.GrokBotUserFormFieldListView fieldListView;
    ChatGrokBot.GrokBotUserForm form;
    __C.UILabel instructionLabel;
    Swift.Bool isEditingField;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    ChatGrokBot.GrokBotUserFormValues values;
    nominal type descriptor for XDesignSystem.TrayFootnoteView ? vaultNoteView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot40GrokBotUserFormTrayContentViewController_h */
