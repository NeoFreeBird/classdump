//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BasicAppCardForwardViewLayoutDelegate_h
#define T1BasicAppCardForwardViewLayoutDelegate_h
@import Foundation;

#include "T1BasicAppCardTargetImageSizeLayoutDelegate-Protocol.h"

@class NSString, TUICardViewLayoutDelegate;

@interface T1BasicAppCardForwardViewLayoutDelegate : TUICardViewLayoutDelegate <T1BasicAppCardTargetImageSizeLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;
+ (id)_titleFont;
+ (id)_subtitleFont;
+ (double)_maximumWidthForStandardLayout;
+ (double)_highlightViewPadding;
+ (struct CGSize { double x0; double x1; })_avatarImageSize;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })targetImageSizeForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (struct CGSize { double x0; double x1; })_titleSizeForCardViewModel:(id)model;
- (struct CGSize { double x0; double x1; })_detailTextSizeForCardViewModel:(id)model;
- (struct CGSize { double x0; double x1; })_callToActionSizeForCardViewModel:(id)model;
- (double)_layoutAttribution:(id)attribution forCardViewModel:(id)model layoutMetrics:(id)metrics atPoint:(struct CGPoint { double x0; double x1; })point;
- (double)_layoutImageNextToInfoAndAction:(id)action forCardViewModel:(id)model layoutMetrics:(id)metrics atPoint:(struct CGPoint { double x0; double x1; })point;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutDetailsForLayoutState:(id)state viewModel:(id)model layoutMetrics:(id)metrics atPoint:(struct CGPoint { double x0; double x1; })point;
- (id)titleFontForWidth:(double)width;
- (id)titleColorForWidth:(double)width;

@end

#endif /* T1BasicAppCardForwardViewLayoutDelegate_h */
