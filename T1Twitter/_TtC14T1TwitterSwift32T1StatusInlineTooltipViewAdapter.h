//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32T1StatusInlineTooltipViewAdapter_h
#define _TtC14T1TwitterSwift32T1StatusInlineTooltipViewAdapter_h
@import Foundation;

@class T1TwitterSwift.T1StatusInlineTooltipAnchorFocusViewLayoutState, TFNComposableViewAdapter;

@interface T1TwitterSwift.T1StatusInlineTooltipViewAdapter : TFNComposableViewAdapter { // (Swift)
    /* instance variables */
    T1TwitterSwift.T1StatusInlineTooltipAnchorFocusViewLayoutState anchorFocusViewLayoutState;
}

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (_Bool)t1_recordVisibleImpression;
- (void)layoutAnchorFocusPoint;

@end

#endif /* _TtC14T1TwitterSwift32T1StatusInlineTooltipViewAdapter_h */
