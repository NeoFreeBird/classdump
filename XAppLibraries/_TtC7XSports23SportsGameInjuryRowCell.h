//
#ifndef _TtC7XSports23SportsGameInjuryRowCell_h
#define _TtC7XSports23SportsGameInjuryRowCell_h
@import Foundation;

@class UICollectionViewCell, XSports.SportsGameInjuryReport.Row ?, XSports.SportsImageLoader ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC;

@interface XSports.SportsGameInjuryRowCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.UIImageView avatarView;
    __C.UILabel nameLabel;
    __C.UILabel statusLabel;
    __C.UIImageView verifiedBadge;
    __C.UILabel injuryLabel;
    XSports.SportsImageLoader ? $__lazy_storage_$_headshotLoader;
    XSports.SportsGameInjuryReport.Row ? content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC7XSports23SportsGameInjuryRowCell_h */
