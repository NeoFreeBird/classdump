//
#ifndef PTVBroadcastOverflowMenuFeaturedReasonView_h
#define PTVBroadcastOverflowMenuFeaturedReasonView_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVFeaturedPillView.h"

@class UILabel, UIStackView;

@interface PTVBroadcastOverflowMenuFeaturedReasonView : UIStackView {
    /* instance variables */
    PTVBroadcastOverflowMenuFeaturedReasonView *_weakSelf;
    PTVFeaturedPillView *_featuredPill;
    UILabel *_featuredReasonLabel;
    PTVBroadcast *_broadcast;
    _Bool _observingBroadcast;
}

/* instance methods */
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithBroadcast:(id)broadcast;
- (void)startObservingBroadcast;
- (void)stopObservingBroadcast;
- (void)broadcastDidChange;

@end

#endif /* PTVBroadcastOverflowMenuFeaturedReasonView_h */
