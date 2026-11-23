//
#ifndef _TtC14DMConversation26ConversationViewController_h
#define _TtC14DMConversation26ConversationViewController_h
@import Foundation;

#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "TFNToasterContextDelegate-Protocol.h"

@class DMConversation.ConversationContentPluginPoint, DMConversation.ConversationFooterPlugin ?, DMConversation.ConversationFooterPluginPoint, DMConversation.ConversationNavigationBarBuilder, DMConversation.ConversationNavigationBarDeclarationStream, DMConversation.ConversationNavigationBarWorkerPluginPoint ?, DMConversation.ConversationOverlayPluginPoint, DMConversation.ConversationVerticalColumnStream, DMConversation.ConversationView ?, DMConversation.ConversationWorkerPluginPoint, DMUI.DMEventScriber, DMUI.RootNavigation, DMUI.ViewControllerVisibilityStream, Swift.Bool, TFNViewController, _$s14ChatModelsCore14ConversationIDOMn, _$s16ChatConversation0B17HeaderPluginPointCMn, _$s23ChatConversationDetails0bC7BuilderCMn, _$s6ChatUI0A22NavigationStackFactoryMp, _$s6ChatUI23UITraitCollectionStreamCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UINavigationItemCSg, _$sSo16UIViewControllerCSg, __C.CGRect ?;

@interface DMConversation.ConversationViewController : TFNViewController <TFNJumpBackToHomeTimelineBehavior, TFNToasterContextDelegate> { // (Swift)
    /* instance variables */
    __C.UIViewController? contentViewController;
    __C.UIViewController? footerViewController;
    __C.UIViewController? headerViewController;
    __C.UIViewController? overlayViewController;
    DMConversation.ConversationContentPluginPoint conversationContentPluginPoint;
    nominal type descriptor for ChatConversationDetails.ConversationDetailsBuilder conversationDetailsBuilder;
    DMConversation.ConversationFooterPluginPoint conversationFooterPluginPoint;
    nominal type descriptor for ChatModelsCore.ConversationID conversationID;
    Swift.Bool allowsConversationDetails;
    DMConversation.ConversationNavigationBarBuilder conversationNavigationBarBuilder;
    nominal type descriptor for ChatConversation.ConversationHeaderPluginPoint conversationHeaderPluginPoint;
    DMConversation.ConversationOverlayPluginPoint conversationOverlayPluginPoint;
    DMUI.ViewControllerVisibilityStream conversationVisibilityStream;
    DMConversation.ConversationWorkerPluginPoint conversationWorkerPluginPoint;
    DMUI.DMEventScriber eventScriber;
    DMConversation.ConversationNavigationBarDeclarationStream navigationBarDeclarationStream;
    protocol descriptor for ChatUI.ChatNavigationStackFactory navigationStackFactory;
    __C.UINavigationItem? parentNavigationItem;
    DMUI.RootNavigation rootNavigation;
    nominal type descriptor for ChatUI.UITraitCollectionStream traitCollectionStream;
    DMConversation.ConversationVerticalColumnStream verticalColumnStream;
    Swift.Bool allowsColumnItems;
    DMConversation.ConversationView ? $__lazy_storage_$_internalView;
    DMConversation.ConversationNavigationBarWorkerPluginPoint ? conversationNavigationBarWorkerPluginPoint;
    DMConversation.ConversationFooterPlugin ? footerPlugin;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.CGRect ? quickComposerFrame;
}

@property (nonatomic, readonly) _Bool tfn_prefersTabBarShadowHidden;

/* instance methods */
- (_Bool)allowsJumpBackToHomeTimeline;
- (_Bool)toaster:(id)toaster canDisplayToast:(id)toast withPriority:(unsigned long long)priority;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)change;
- (void)keyboardDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14DMConversation26ConversationViewController_h */
