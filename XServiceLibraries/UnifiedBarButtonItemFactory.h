//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UnifiedBarButtonItemFactory_h
#define UnifiedBarButtonItemFactory_h
@import Foundation;

@class NSObject;

@interface UnifiedBarButtonItemFactory : NSObject // (Swift)

/* class methods */
+ (id)closeItemWithTarget:(id)target action:(SEL)action;
+ (id)closeItemWithNativePlatterEnabled:(_Bool)enabled target:(id)target action:(SEL)action;
+ (id)backItemWithTarget:(id)target action:(SEL)action;
+ (id)forwardItemWithTarget:(id)target action:(SEL)action;
+ (id)settingsItemWithTarget:(id)target action:(SEL)action;
+ (id)moreItemWithMenuActionItems:(id /* block */)items;
+ (id)moreItemWithNativePlatterEnabled:(_Bool)enabled menuActionItems:(id /* block */)items;
+ (id)shareItemWithTarget:(id)target action:(SEL)action;
+ (id)shareItemWithMenuActionItems:(id /* block */)items;
+ (id)addItemWithTarget:(id)target action:(SEL)action;
+ (id)addItemWithMenuActionItems:(id /* block */)items;
+ (id)doneItemWithTarget:(id)target action:(SEL)action;
+ (id)cancelItemWithTarget:(id)target action:(SEL)action;
+ (id)cancelItemWithNativePlatterEnabled:(_Bool)enabled target:(id)target action:(SEL)action;
+ (id)iconWithName:(id)name accessibilityLabel:(id)label target:(id)target action:(SEL)action;
+ (id)labelWithTitle:(id)title menuActionItems:(id /* block */)items;
+ (id)labelWithTitle:(id)title target:(id)target action:(SEL)action;
+ (id)labelWithTitle:(id)title destructive:(_Bool)destructive target:(id)target action:(SEL)action;
+ (id)customViewItemWithView:(id)view customPlatterEnabled:(_Bool)enabled;
+ (id)fixedSpaceWithWidth:(double)width;

/* instance methods */
- (id)init;

@end

#endif /* UnifiedBarButtonItemFactory_h */
