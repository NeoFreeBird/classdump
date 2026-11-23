//
#ifndef T1LargeProfileCardUserViewLayoutDelegate_h
#define T1LargeProfileCardUserViewLayoutDelegate_h
@import Foundation;

#include "T1BaseUserViewLayoutDelegate.h"

@interface T1LargeProfileCardUserViewLayoutDelegate : T1BaseUserViewLayoutDelegate

/* class methods */
+ (id)sharedLayoutDelegate;
+ (struct CGSize { double x0; double x1; })defaultAvatarSizeForStyle:(long long)style showBio:(_Bool)bio layoutMetrics:(id)metrics;
+ (id)layoutItemsForLayoutContainer:(id)container withParameters:(id)parameters layoutState:(id)state contentRectProvider:(id /* block */)provider;

/* instance methods */
- (id)initPrivate;

@end

#endif /* T1LargeProfileCardUserViewLayoutDelegate_h */
