//
#ifndef T1BottomTabBarItemCapacity_h
#define T1BottomTabBarItemCapacity_h
@import Foundation;

@class NSObject;

@interface T1BottomTabBarItemCapacity : NSObject // (Swift)

/* class methods */
+ (long long)compact;
+ (long long)regular;
+ (long long)visibleItemCountForHorizontalSizeClass:(long long)_class verticalSizeClass:(long long)_class userInterfaceIdiom:(long long)idiom;
+ (long long)displayedItemCountForSavedItemCount:(long long)count horizontalSizeClass:(long long)_class verticalSizeClass:(long long)_class userInterfaceIdiom:(long long)idiom;

/* instance methods */
- (id)init;

@end

#endif /* T1BottomTabBarItemCapacity_h */
