//
#ifndef T1BasicAppCardFullViewLayoutDelegate_h
#define T1BasicAppCardFullViewLayoutDelegate_h
@import Foundation;

#include "T1BasicAppCardTargetImageSizeLayoutDelegate-Protocol.h"

@class NSString, TUICardViewLayoutDelegate;

@interface T1BasicAppCardFullViewLayoutDelegate : TUICardViewLayoutDelegate <T1BasicAppCardTargetImageSizeLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;
+ (double)_maximumWidthForStandardLayout;
+ (double)_highlightViewPadding;
+ (struct CGSize { double x0; double x1; })_avatarImageSize;
+ (id)_titleFont;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (struct CGSize { double x0; double x1; })targetImageSizeForViewModel:(id)model layoutMetrics:(id)metrics;
- (struct CGSize { double x0; double x1; })_titleSizeForCardViewModel:(id)model;
- (struct CGSize { double x0; double x1; })_detailSizeForCardViewModel:(id)model;
- (struct CGSize { double x0; double x1; })_secondDetailSizeForCardViewModel:(id)model;
- (double)_layoutAttribution:(id)attribution forCardViewModel:(id)model layoutMetrics:(id)metrics atPoint:(struct CGPoint { double x0; double x1; })point;
- (double)_layoutImageAndInfoAndAction:(id)action forCardViewModel:(id)model layoutMetrics:(id)metrics atPoint:(struct CGPoint { double x0; double x1; })point;

@end

#endif /* T1BasicAppCardFullViewLayoutDelegate_h */
