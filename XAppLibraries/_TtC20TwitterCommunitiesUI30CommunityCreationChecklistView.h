//
#ifndef _TtC20TwitterCommunitiesUI30CommunityCreationChecklistView_h
#define _TtC20TwitterCommunitiesUI30CommunityCreationChecklistView_h
@import Foundation;

@class TwitterCommunitiesUI.CommunityCreationChecklistItemRow ?, TwitterCommunitiesUI.CommunityCreationChecklistViewDelegate ?, TwitterCommunitiesUI.CommunityCreationChecklistViewModel, UIStackView, _$sSo11UIStackViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface TwitterCommunitiesUI.CommunityCreationChecklistView : UIStackView { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunityCreationChecklistViewDelegate ? delegate;
    TwitterCommunitiesUI.CommunityCreationChecklistViewModel viewModel;
    __C.UIStackView? $__lazy_storage_$_rootStackView;
    __C.UIStackView? $__lazy_storage_$_dismissButtonStackView;
    __C.UIView? $__lazy_storage_$_dismissButton;
    __C.UIStackView? $__lazy_storage_$_headerStackView;
    __C.UILabel? $__lazy_storage_$_headerTitleLabel;
    __C.UILabel? $__lazy_storage_$_headerSubtitleLabel;
    TwitterCommunitiesUI.CommunityCreationChecklistItemRow ? $__lazy_storage_$_rulesChecklistItemRow;
    TwitterCommunitiesUI.CommunityCreationChecklistItemRow ? $__lazy_storage_$_communityPersonalizationChecklistItemRow;
    TwitterCommunitiesUI.CommunityCreationChecklistItemRow ? $__lazy_storage_$_memberInviteChecklistItemRow;
    TwitterCommunitiesUI.CommunityCreationChecklistItemRow ? $__lazy_storage_$_tweetingCommunityChecklistItemRow;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)dismissChecklist;

@end

#endif /* _TtC20TwitterCommunitiesUI30CommunityCreationChecklistView_h */
