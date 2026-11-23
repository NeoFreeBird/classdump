//
#ifndef TFNCustomTabBarDelegate_Protocol_h
#define TFNCustomTabBarDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNCustomTabBarDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)customTabBar:(id)bar selectTabRequiresLongPressFailureForTabAtIndex:(long long)index withView:(id)view;
- (void)customTabBar:(id)bar selectTabAtIndex:(long long)index withView:(id)view;
- (void)customTabBarHighlightedTabIndexChanged:(id)changed;
- (void)customTabBar:(id)bar longPressOnTabAtIndex:(long long)index withView:(id)view;
- (struct CGSize { double x0; double x1; })customTabBar:(id)bar sizeForTabAtIndex:(long long)index withView:(id)view;
- (long long)customTabBar:(id)bar contentModeForTabAtIndex:(long long)index withView:(id)view;
- (_Bool)customTabBar:(id)bar gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;

@end

#endif /* TFNCustomTabBarDelegate_Protocol_h */
