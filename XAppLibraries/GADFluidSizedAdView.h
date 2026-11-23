//
#ifndef GADFluidSizedAdView_h
#define GADFluidSizedAdView_h
@import Foundation;

#include "GADEventContextSource-Protocol.h"
#include "GADObserverCollection.h"

@class UIView;

@interface GADFluidSizedAdView : UIView {
    /* instance variables */
    UIView *_view;
    GADObserverCollection *_observers;
    id <GADEventContextSource> _messageSource;
}

@property (nonatomic) double contentHeight;

/* instance methods */
- (id)initWithView:(id)view messageSource:(id)source;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateContentHeightValueFromNotification:(id)notification;
- (void)layoutSubviews;

@end

#endif /* GADFluidSizedAdView_h */
