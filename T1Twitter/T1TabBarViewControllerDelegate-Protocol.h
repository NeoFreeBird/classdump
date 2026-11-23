//
#ifndef T1TabBarViewControllerDelegate_Protocol_h
#define T1TabBarViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TabBarViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)tabBarViewController:(id)controller selectTabRequiresLongPressFailureForTabAtIndex:(long long)index withView:(id)view;
- (void)tabBarViewController:(id)controller selectTabAtIndex:(long long)index withView:(id)view;
- (void)tabBarViewController:(id)controller longPressOnTabAtIndex:(long long)index withView:(id)view;
- (_Bool)shouldShowProgressBarForTabBarViewController:(id)controller;
- (void)tabBarViewController:(id)controller didUpdateAlpha:(double)alpha;
- (void)tabBarViewController:(id)controller didUpdateVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (_Bool)hasVisibleDockedBars;
- (_Bool)isBottomSegmentActive;
- (void)setDockedBarOpacity:(double)opacity;
- (_Bool)tabBarViewController:(id)controller gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;

@optional

@end

#endif /* T1TabBarViewControllerDelegate_Protocol_h */
