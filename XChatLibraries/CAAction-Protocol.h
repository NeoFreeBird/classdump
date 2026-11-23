//
#ifndef CAAction_Protocol_h
#define CAAction_Protocol_h
@import Foundation;

@protocol CAAction

@required

/* required instance methods */
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;

@optional

@end

#endif /* CAAction_Protocol_h */
