//
#ifndef FIRComponentLifecycleMaintainer_Protocol_h
#define FIRComponentLifecycleMaintainer_Protocol_h
@import Foundation;

@protocol FIRComponentLifecycleMaintainer

@required

/* required instance methods */
- (void)appWillBeDeleted:(id)deleted;

@optional

@end

#endif /* FIRComponentLifecycleMaintainer_Protocol_h */
