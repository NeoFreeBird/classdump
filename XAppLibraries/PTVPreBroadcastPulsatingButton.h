//
#ifndef PTVPreBroadcastPulsatingButton_h
#define PTVPreBroadcastPulsatingButton_h
@import Foundation;

#include "PTVPreBroadcastButton.h"
#include "PTVPulsatingView.h"

@interface PTVPreBroadcastPulsatingButton : PTVPreBroadcastButton {
    /* instance variables */
    PTVPulsatingView *_pulsatingView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)setupPTVPreBroadcastPulsatingButton;
- (void)setSelected:(_Bool)selected;

@end

#endif /* PTVPreBroadcastPulsatingButton_h */
