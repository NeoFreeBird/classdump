//
#ifndef TFNTabBarViewController_Protocol_h
#define TFNTabBarViewController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFNCustomTabBar;

@protocol TFNTabBarViewController <NSObject>

@required

@property (readonly, nonatomic) TFNCustomTabBar *tabBar;

@optional

@end

#endif /* TFNTabBarViewController_Protocol_h */
