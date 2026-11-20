//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StandardStatusOutdatedCalloutViewAdapter_h
#define T1StandardStatusOutdatedCalloutViewAdapter_h
@import Foundation;

#include "T1OutdatedCalloutViewDelegate-Protocol.h"

@class TFNComposableViewAdapter;

@interface T1StandardStatusOutdatedCalloutViewAdapter : TFNComposableViewAdapter <T1OutdatedCalloutViewDelegate>

@property (readonly, nonatomic) unsigned long long displayType;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier displayType:(unsigned long long)type;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (id)initializeView;
- (void)setViewModel:(id)model forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)outdatedCalloutView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1StandardStatusOutdatedCalloutViewAdapter_h */
