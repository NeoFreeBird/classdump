//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
