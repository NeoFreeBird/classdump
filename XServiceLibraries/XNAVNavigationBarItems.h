//
#ifndef XNAVNavigationBarItems_h
#define XNAVNavigationBarItems_h
@import Foundation;

@class NSObject;

@interface XNAVNavigationBarItems : NSObject // (Swift)

/* class methods */
+ (id)doneItemWithTarget:(id)target action:(SEL)action;
+ (id)closeItemWithTarget:(id)target action:(SEL)action;
+ (id)cancelItemWithTarget:(id)target action:(SEL)action;
+ (id)addItemWithTarget:(id)target action:(SEL)action;
+ (id)labelWithTitle:(id)title target:(id)target action:(SEL)action;
+ (id)labelWithTitle:(id)title nativePlatterEnabled:(_Bool)enabled target:(id)target action:(SEL)action;
+ (id)iconWithName:(id)name accessibilityLabel:(id)label target:(id)target action:(SEL)action;

/* instance methods */
- (id)init;

@end

#endif /* XNAVNavigationBarItems_h */
