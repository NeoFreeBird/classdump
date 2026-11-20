//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TombstoneComposableViewAdapter_h
#define T1TombstoneComposableViewAdapter_h
@import Foundation;

@class TFNComposableViewAdapter;

@interface T1TombstoneComposableViewAdapter : TFNComposableViewAdapter

/* instance methods */
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* T1TombstoneComposableViewAdapter_h */
