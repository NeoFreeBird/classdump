//
#ifndef _TtC7XSports29SportsGameSegmentSelectorCell_h
#define _TtC7XSports29SportsGameSegmentSelectorCell_h
@import Foundation;

@class UICollectionViewCell, XSports.SportsGameSegmentSelectorCell.Content ?, _$sSa -> XSports.SportsGameSegmentSelectorCell.ItemView, _$sSo16TIPImagePipelineCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewC, _$sySicSg;

@interface XSports.SportsGameSegmentSelectorCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    ((Swift.Int) -> ())? onSelect;
    Swift.Array -> XSports.SportsGameSegmentSelectorCell.ItemView itemViews;
    __C.UIView highlightBar;
    __C.UIImpactFeedbackGenerator feedback;
    XSports.SportsGameSegmentSelectorCell.Content ? content;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)didTapItem:(id)item;
- (void)didTouchDownItem;

@end

#endif /* _TtC7XSports29SportsGameSegmentSelectorCell_h */
