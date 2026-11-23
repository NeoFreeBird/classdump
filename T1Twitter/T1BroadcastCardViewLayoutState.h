//
#ifndef T1BroadcastCardViewLayoutState_h
#define T1BroadcastCardViewLayoutState_h
@import Foundation;

#include "T1BroadcastCardViewModel.h"
#include "T1BroadcastContainerViewLayoutState.h"

@class TUICardViewLayoutState;

@interface T1BroadcastCardViewLayoutState : TUICardViewLayoutState

@property (retain, nonatomic) T1BroadcastCardViewModel *viewModel;
@property (retain, nonatomic) T1BroadcastContainerViewLayoutState *broadcastContainerViewLayoutState;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } backgroundViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } broadcastContainerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailImageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scheduledTimeViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } highlightViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } detailsViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } errorViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } detailsSeparatorFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } broadcastContentViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } broadcastCTAButtonFrame;

/* instance methods */

@end

#endif /* T1BroadcastCardViewLayoutState_h */
