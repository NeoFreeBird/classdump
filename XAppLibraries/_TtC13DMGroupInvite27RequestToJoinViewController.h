//
#ifndef _TtC13DMGroupInvite27RequestToJoinViewController_h
#define _TtC13DMGroupInvite27RequestToJoinViewController_h
@import Foundation;

@class DMGroupInvite.RequestToJoinProviding, DMGroupInvite.RequestToJoinState, DMGroupInvite.RequestToJoinViewModel ?, DMGroupInvite.RequestToJoinViewModelBuilder, DMUI.ConversationAvatarUIView, Swift.Bool, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo7UILabelC;

@interface DMGroupInvite.RequestToJoinViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    DMGroupInvite.RequestToJoinState state;
    Swift.Bool isRequestingToJoin;
    DMGroupInvite.RequestToJoinProviding requestToJoinProvider;
    DMGroupInvite.RequestToJoinViewModelBuilder requestToJoinViewModelBuilder;
    DMGroupInvite.RequestToJoinViewModel ? $__lazy_storage_$_viewModel;
    DMUI.ConversationAvatarUIView avatarView;
    __C.UILabel subtitleLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC13DMGroupInvite27RequestToJoinViewController_h */
