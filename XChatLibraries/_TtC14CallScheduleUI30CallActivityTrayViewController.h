//
#ifndef _TtC14CallScheduleUI30CallActivityTrayViewController_h
#define _TtC14CallScheduleUI30CallActivityTrayViewController_h
@import Foundation;

@class CallEngine.CallActionTriggerStream, CallModels.CallConversationAudience, CallModels.CallConversationAvatarView, CallModels.CallImageLoading, CallScheduleUI.CallActivityConversationInfoStream, CallScheduleUI.CallActivityTrayWorkerPluginPoint, CallScheduleUI.CallScheduleNavigation, CallUI.CallTrayActionButtonRowView, CallUI.CallTrayHeroView, CallUI.CallTrayNameView, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScheduleUI.CallActivityTrayViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Swift.String conversationID;
    Swift.String accountID;
    CallModels.CallConversationAvatarView conversationAvatarView;
    CallModels.CallConversationAudience activityAudience;
    CallScheduleUI.CallActivityTrayWorkerPluginPoint workerPluginPoint;
    CallScheduleUI.CallActivityConversationInfoStream conversationInfoStream;
    CallEngine.CallActionTriggerStream callActionTriggerStream;
    CallScheduleUI.CallScheduleNavigation callScheduleNavigation;
    CallModels.CallImageLoading imageLoader;
    CallUI.CallTrayHeroView heroView;
    CallUI.CallTrayNameView nameView;
    CallUI.CallTrayActionButtonRowView actionButtonRowView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI30CallActivityTrayViewController_h */
