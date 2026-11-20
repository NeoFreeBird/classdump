//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift17FleetLineItemView_h
#define _TtC14T1TwitterSwift17FleetLineItemView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSArray, Swift.Bool, T1TwitterSwift.AvatarPresenceView, T1TwitterSwift.FleetLineItemViewDelegate ?, UIView, _$s13XDesignSystem4BlurCMn ?, _$s13XDesignSystem5GlassCMn ?, _$s14TFSTwitterCore16TwitterCommunityOMn ?, _$sSSSg, _$sSaySo23TFSTwitterCanonicalUser_pG, _$sSaySo7UIColorCG, _$sSo11UIImageViewCSg, _$sSo18NSAttributedStringCSg, _$sSo7UIColorC, _$sSo7UIColorCSg;

@interface T1TwitterSwift.FleetLineItemView : UIView <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    __C.UIColor labelColor;
    Swift.String? itemTitle;
    __C.NSAttributedString? spaceSecondaryInfoAttributedText;
    [__C.UIColor] bubbleColors;
    __C.UIColor avatarsBorderColor;
    __C.UIColor? glassPillColor;
    Swift.Bool shouldShowCameraImage;
    T1TwitterSwift.FleetLineItemViewDelegate ? delegate;
    T1TwitterSwift.AvatarPresenceView avatarView;
    nominal type descriptor for XDesignSystem.Glass ? pillGlass;
    nominal type descriptor for XDesignSystem.Blur ? pillFrost;
    __C.UIImageView? composerImageView;
    nominal type descriptor for TFSTwitterCore.TwitterCommunity ? community;
}

@property (nonatomic, copy) NSArray *users;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift17FleetLineItemView_h */
