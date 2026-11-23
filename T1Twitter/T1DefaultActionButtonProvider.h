//
#ifndef T1DefaultActionButtonProvider_h
#define T1DefaultActionButtonProvider_h
@import Foundation;

@class NSObject;

@interface T1DefaultActionButtonProvider : NSObject

/* class methods */
+ (id)buttonItemsForViewController:(id)controller categories:(id)categories account:(id)account;
+ (id)_t1_defaultButtonItemForViewController:(id)controller category:(unsigned long long)category account:(id)account;
+ (id)_t1_buttonItemForViewController:(id)controller category:(unsigned long long)category account:(id)account;
+ (id)standardActionButtonItemCategoriesForAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1DefaultActionButtonProvider_h */
