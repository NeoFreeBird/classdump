//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFNavigationContext_h
#define OCFNavigationContext_h
@import Foundation;

@class NSObject, NSString;

@interface OCFNavigationContext : NSObject

@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) _Bool error;

/* class methods */
+ (id)errorNavigationContext;

/* instance methods */
- (_Bool)isError;

@end

#endif /* OCFNavigationContext_h */
