//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LeaveConversationViewPrompt_h
#define T1LeaveConversationViewPrompt_h
@import Foundation;

@class _$s10TFNUISwift20TFNHostingControllerCN;

@interface T1LeaveConversationViewPrompt : type metadata for TFNUISwift.TFNHostingController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *page;
    NSNumber"16@0:8 *section;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *showsLeaveConversationButton;
}

@property (nonatomic, readonly) _Bool tfn_logoTitleViewShown;

/* class methods */
+ (id)makeWithLeaveButton:(_Bool)button account:(id)account page:(id)page section:(id)section onLeaveConversation:(id /* block */)conversation;
+ (id)leaveConversationPromptKey;
+ (_Bool)shouldShowForAccount:(id)account;

/* instance methods */
- (void)dismissAndScribe;
- (id)initWithCoder:(id)coder;

@end

#endif /* T1LeaveConversationViewPrompt_h */
