//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer47MessageRateLimitUpsellTrayContentViewController_h
#define _TtC19ChatMessageComposer47MessageRateLimitUpsellTrayContentViewController_h
@import Foundation;

@class ChatMessageComposer.MessageRateLimitUpsellRecipientHeroView, ChatModels.ComplatPlanNameProviding, ChatUI.ChatImageLoading, _$s10Foundation3URLVMn ?, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo7UILabelC, _$syyc;

@interface ChatMessageComposer.MessageRateLimitUpsellTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL ? avatarURL;
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    ChatUI.ChatImageLoading imageLoader;
    () -> () onUpgrade;
    ChatMessageComposer.MessageRateLimitUpsellRecipientHeroView heroView;
    __C.UILabel titleLabel;
    __C.UILabel bodyLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC19ChatMessageComposer47MessageRateLimitUpsellTrayContentViewController_h */
