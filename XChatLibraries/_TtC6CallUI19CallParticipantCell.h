//
#ifndef _TtC6CallUI19CallParticipantCell_h
#define _TtC6CallUI19CallParticipantCell_h
@import Foundation;

@class CallUI.CallParticipantTileView, UICollectionViewCell;

@interface CallUI.CallParticipantCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    CallUI.CallParticipantTileView tileView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)attributes;
- (void)layoutSubviews;

@end

#endif /* _TtC6CallUI19CallParticipantCell_h */
