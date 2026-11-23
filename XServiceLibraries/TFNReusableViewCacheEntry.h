//
#ifndef TFNReusableViewCacheEntry_h
#define TFNReusableViewCacheEntry_h
@import Foundation;

@class NSObject, UIView;

@interface TFNReusableViewCacheEntry : NSObject

@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view type:(long long)type;

@end

#endif /* TFNReusableViewCacheEntry_h */
