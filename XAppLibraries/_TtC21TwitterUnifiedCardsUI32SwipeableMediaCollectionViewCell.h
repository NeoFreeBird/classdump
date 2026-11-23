//
#ifndef _TtC21TwitterUnifiedCardsUI32SwipeableMediaCollectionViewCell_h
#define _TtC21TwitterUnifiedCardsUI32SwipeableMediaCollectionViewCell_h
@import Foundation;

@class Swift.Bool, TFNCollectionViewCell, TwitterUnifiedCardsUI.SwipeableMediaCollectionViewCell.Position, _$sSo12CAShapeLayerCSg, _$sSo21TUCMediaComponentViewCSg;

@interface TwitterUnifiedCardsUI.SwipeableMediaCollectionViewCell : TFNCollectionViewCell { // (Swift)
    /* instance variables */
    __C.TUCMediaComponentView? mediaComponentView;
    TwitterUnifiedCardsUI.SwipeableMediaCollectionViewCell.Position position;
    Swift.Bool shouldRoundBottomCorners;
    __C.CAShapeLayer? borderline;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)layer;
- (void)prepareForReuse;

@end

#endif /* _TtC21TwitterUnifiedCardsUI32SwipeableMediaCollectionViewCell_h */
