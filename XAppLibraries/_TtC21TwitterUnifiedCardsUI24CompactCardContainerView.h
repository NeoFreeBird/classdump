//
#ifndef _TtC21TwitterUnifiedCardsUI24CompactCardContainerView_h
#define _TtC21TwitterUnifiedCardsUI24CompactCardContainerView_h
@import Foundation;

#include "TUCDefaultContainerView.h"

@class UIColor;

@interface TwitterUnifiedCardsUI.CompactCardContainerView : TUCDefaultContainerView // (Swift)

@property (nonatomic, readonly) UIColor *containerBackgroundColor;
@property (nonatomic, readonly) UIColor *containerBorderColor;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC21TwitterUnifiedCardsUI24CompactCardContainerView_h */
