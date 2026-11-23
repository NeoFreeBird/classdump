//
#ifndef TASVoiceRoomRetractableBarContainerView_h
#define TASVoiceRoomRetractableBarContainerView_h
@import Foundation;

#include "TASVoiceRoomRetractableBarContainerViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class UIView;

@interface TASVoiceRoomRetractableBarContainerView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 retractableBarHeightAnchorConstraint;
    @40@0:8:16@24@32 retractableBarHeightRange;
}

@property (nonatomic, weak) id <TASVoiceRoomRetractableBarContainerViewDelegate> delegate;
@property (nonatomic, readonly) UIView *scrollViewContainerView;
@property (nonatomic, readonly) UIView *retractableBar;
@property (nonatomic) double scrollViewContentInsetsTop;
@property (nonatomic, readonly) double retractableBarHeightPercentage;
@property (nonatomic, readonly) double retractableBarPushedHeight;
@property (nonatomic, readonly) double retractableBarPulledHeight;
@property (nonatomic, readonly) long long retractableBarState;

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setRetractableBarPushedHeight:(double)height pulledHeight:(double)height;

@end

#endif /* TASVoiceRoomRetractableBarContainerView_h */
