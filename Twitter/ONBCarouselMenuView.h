//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBCarouselMenuView_h
#define ONBCarouselMenuView_h
@import Foundation;

#include "ONBCarouselMenuViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, TFNFlexibleLayoutView, UIScrollView, UIView;
@protocol TFNTappableView;

@interface ONBCarouselMenuView : UIView <UIScrollViewDelegate> {
    /* instance variables */
    id <ONBCarouselMenuViewDelegate> _delegate;
    id _identifier;
    UIScrollView *_scrollView;
    TFNFlexibleLayoutView *_contentView;
    id <TFNTappableView> _currentTappableView;
    NSMutableArray *_tappableViews;
}

@property (nonatomic) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier delegate:(id)delegate;
- (void)private_configureContentViewIfNeeded;
- (void)clearSelection;
- (void)setSelectionOfItemWithIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeThatFitsSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics;
- (void)layoutSubviews;
- (void)private_didTapTappableView:(id)view atIndex:(long long)index;
- (void)private_updateItemLayout:(id)layout;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (_Bool)isEnabled;

@end

#endif /* ONBCarouselMenuView_h */
