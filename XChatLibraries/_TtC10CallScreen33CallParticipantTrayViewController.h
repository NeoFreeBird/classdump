//
#ifndef _TtC10CallScreen33CallParticipantTrayViewController_h
#define _TtC10CallScreen33CallParticipantTrayViewController_h
@import Foundation;

@class CallEngine.Call, CallModels.CallImageLoading, CallModels.RemoteCallParticipantID, CallScreen.CallParticipantTrayActionPluginPoint, CallScreen.CallParticipantTrayListActionPluginPoint, CallUI.CallTrayActionButtonRowView, CallUI.CallTrayHeroView, CallUI.CallTrayNameView, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface CallScreen.CallParticipantTrayViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    CallEngine.Call call;
    CallModels.RemoteCallParticipantID participantID;
    CallScreen.CallParticipantTrayActionPluginPoint actionPluginPoint;
    CallScreen.CallParticipantTrayListActionPluginPoint listActionPluginPoint;
    CallModels.CallImageLoading imageLoader;
    CallUI.CallTrayHeroView heroView;
    CallUI.CallTrayNameView nameView;
    CallUI.CallTrayActionButtonRowView actionButtonRowView;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10CallScreen33CallParticipantTrayViewController_h */
