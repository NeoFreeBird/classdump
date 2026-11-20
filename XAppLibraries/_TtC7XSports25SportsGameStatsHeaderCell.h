//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports25SportsGameStatsHeaderCell_h
#define _TtC7XSports25SportsGameStatsHeaderCell_h
@import Foundation;

@class UICollectionViewCell, XSports.SportsGameStatsHeaderCell.Content ?, XSports.SportsImageLoader ?, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo7UILabelC;

@interface XSports.SportsGameStatsHeaderCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.UIImageView awayLogoView;
    __C.UIImageView homeLogoView;
    __C.UILabel awayAbbreviationLabel;
    __C.UILabel homeAbbreviationLabel;
    __C.UILabel titleLabel;
    XSports.SportsImageLoader ? $__lazy_storage_$_awayLogoLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_homeLogoLoader;
    XSports.SportsGameStatsHeaderCell.Content ? content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports25SportsGameStatsHeaderCell_h */
