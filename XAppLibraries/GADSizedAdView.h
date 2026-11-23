//
#ifndef GADSizedAdView_h
#define GADSizedAdView_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADView.h"

@class UIView;

@interface GADSizedAdView : GADView {
    /* instance variables */
    UIView *_view;
    id _messageSource;
    GADObserverCollection *_observers;
}

@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;

/* instance methods */
- (id)initWithView:(id)view size:(struct CGSize { double x0; double x1; })size context:(id)context messageSource:(id)source;
- (void)dealloc;
- (void)setUpSubview:(id)subview;
- (void)mediationBannerInnerRefreshWithView:(id)view;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateAdSizeFromNotification:(id)notification;

@end

#endif /* GADSizedAdView_h */
