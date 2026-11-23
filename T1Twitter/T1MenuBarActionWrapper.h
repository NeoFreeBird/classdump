//
#ifndef T1MenuBarActionWrapper_h
#define T1MenuBarActionWrapper_h
@import Foundation;

@class NSObject;

@interface T1MenuBarActionWrapper : NSObject

@property (readonly, nonatomic) SEL action;

/* instance methods */
- (id)initWithAction:(SEL)action;

@end

#endif /* T1MenuBarActionWrapper_h */
