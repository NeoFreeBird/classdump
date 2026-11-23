//
#ifndef _TtC14T1TwitterSwift18FleetsFacepileView_h
#define _TtC14T1TwitterSwift18FleetsFacepileView_h
@import Foundation;

#include "_TtC14T1TwitterSwift22FleetsAnimatableUIView.h"

@class Swift.Bool, T1TwitterSwift.FleetsFacepileViewDelegate ?, _$s14TFSTwitterCore16TwitterCommunityOMn ?, _$sSaySo19TFNAvatarHeaderViewCG, _$sSaySo23TFSTwitterCanonicalUser_pG, _$sSo16TIPImagePipelineCSg, _$sSo23TFSTwitterCanonicalUser_pSg, _$sSo7UIColorC, _$sSo7UIColorCSg;

@interface T1TwitterSwift.FleetsFacepileView : T1TwitterSwift.FleetsAnimatableUIView { // (Swift)
    /* instance variables */
    T1TwitterSwift.FleetsFacepileViewDelegate ? delegate;
    [__C.TFSTwitterCanonicalUser] users;
    __C.TFSTwitterCanonicalUser? socialProofUser;
    __C.UIColor borderColor;
    __C.UIColor? ringColor;
    nominal type descriptor for TFSTwitterCore.TwitterCommunity ? community;
    __C.TIPImagePipeline? imagePipeline;
    [__C.TFNAvatarHeaderView] avatarViews;
    Swift.Bool isCollapsed;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didTap:(id)tap;

@end

#endif /* _TtC14T1TwitterSwift18FleetsFacepileView_h */
