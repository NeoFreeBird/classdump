//
#ifndef T1CardCellLayout_h
#define T1CardCellLayout_h
@import Foundation;

@class TFNDataViewCellLayout, TUICardViewLayoutState;

@interface T1CardCellLayout : TFNDataViewCellLayout

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cardContainerViewFrame;
@property (retain, nonatomic) TUICardViewLayoutState *cardViewLayoutState;

/* instance methods */

@end

#endif /* T1CardCellLayout_h */
