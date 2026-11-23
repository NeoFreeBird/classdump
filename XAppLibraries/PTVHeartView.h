//
#ifndef PTVHeartView_h
#define PTVHeartView_h
@import Foundation;

#include "PTVLoadingHeartTheme.h"

@class UIView;

@interface PTVHeartView : UIView

@property (retain, nonatomic) PTVLoadingHeartTheme *heartTheme;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)heartLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithHeartTheme:(id)theme;
- (void)setParticipantIndex:(long long)index;

@end

#endif /* PTVHeartView_h */
