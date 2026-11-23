//
#ifndef TFNUnifiedBarButtonItems_h
#define TFNUnifiedBarButtonItems_h
@import Foundation;

@class NSObject;

@interface TFNUnifiedBarButtonItems : NSObject

/* class methods */
+ (id)doneItemWithTarget:(id)target action:(SEL)action;
+ (id)closeItemWithTarget:(id)target action:(SEL)action;

@end

#endif /* TFNUnifiedBarButtonItems_h */
