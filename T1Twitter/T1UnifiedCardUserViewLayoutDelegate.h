//
#ifndef T1UnifiedCardUserViewLayoutDelegate_h
#define T1UnifiedCardUserViewLayoutDelegate_h
@import Foundation;

#include "T1BaseUserViewLayoutDelegate.h"

@interface T1UnifiedCardUserViewLayoutDelegate : T1BaseUserViewLayoutDelegate

/* class methods */
+ (id)sharedLayoutDelegate;
+ (struct CGSize { double x0; double x1; })defaultAvatarSizeForStyle:(long long)style showBio:(_Bool)bio layoutMetrics:(id)metrics;
+ (id)layoutItemsForLayoutContainer:(id)container withParameters:(id)parameters layoutState:(id)state contentRectProvider:(id /* block */)provider;

/* instance methods */
- (id)initPrivate;

@end

#endif /* T1UnifiedCardUserViewLayoutDelegate_h */
