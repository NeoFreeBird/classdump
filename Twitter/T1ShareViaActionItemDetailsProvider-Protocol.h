//
#ifndef T1ShareViaActionItemDetailsProvider_Protocol_h
#define T1ShareViaActionItemDetailsProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ShareViaActionItemDetailsProvider <NSObject>

@required

/* required instance methods */
- (id)activityViewControllerForViewController:(id)controller account:(id)account source:(id)source scribeContext:(id)context doneBlock:(id /* block */)block;
- (id)activityViewControllerForViewController:(id)controller account:(id)account source:(id)source scribeContext:(id)context doneBlock:(id /* block */)block;

@optional

@end

#endif /* T1ShareViaActionItemDetailsProvider_Protocol_h */
