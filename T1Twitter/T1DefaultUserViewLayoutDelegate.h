//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
