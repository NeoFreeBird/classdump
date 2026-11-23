//
#ifndef _TtC7XSports19SportsMediaCardCell_h
#define _TtC7XSports19SportsMediaCardCell_h
@import Foundation;

@class UICollectionViewCell, XSports.SportsInlineVideoSession ?, XSports.SportsMediaCardCell.Content ?, _$sSSSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsMediaCardCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    (() -> ())? onPlay;
    __C.UIView videoContainer;
    __C.UILabel titleLabel;
    __C.UILabel detailsLabel;
    XSports.SportsMediaCardCell.Content ? content;
    XSports.SportsInlineVideoSession ? videoSession;
    Swift.String? installedTweetID;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports19SportsMediaCardCell_h */
