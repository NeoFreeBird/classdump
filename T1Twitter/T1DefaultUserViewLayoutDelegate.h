//
#ifndef T1DefaultUserViewLayoutDelegate_h
#define T1DefaultUserViewLayoutDelegate_h
@import Foundation;

#include "T1BaseUserViewLayoutDelegate.h"

@interface T1DefaultUserViewLayoutDelegate : T1BaseUserViewLayoutDelegate

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)layoutItemsForLayoutContainer:(id)container withParameters:(id)parameters layoutState:(id)state contentRectProvider:(id /* block */)provider;

/* instance methods */
- (id)initPrivate;

@end

#endif /* T1DefaultUserViewLayoutDelegate_h */
