//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
