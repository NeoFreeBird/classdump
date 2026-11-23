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
