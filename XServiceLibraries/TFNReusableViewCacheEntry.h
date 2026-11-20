//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
