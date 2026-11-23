//
#ifndef T1BroadcastCellCardViewLayoutState_h
#define T1BroadcastCellCardViewLayoutState_h
@import Foundation;

@class TUICardViewLayoutState;

@interface T1BroadcastCellCardViewLayoutState : TUICardViewLayoutState

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } liveBadgeFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } categoryFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } categorySpacerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } descriptionFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } previewImageFrame;
@property (nonatomic) _Bool isPeriscopeBadgeHidden;
@property (nonatomic) _Bool isLiveBadgeHidden;

@end

#endif /* T1BroadcastCellCardViewLayoutState_h */
