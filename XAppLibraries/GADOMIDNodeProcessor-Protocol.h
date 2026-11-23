//
#ifndef GADOMIDNodeProcessor_Protocol_h
#define GADOMIDNodeProcessor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDNodeProcessor <NSObject>

@required

@property (readonly) id <GADOMIDNodeProcessor> processorForChildren;

/* required instance methods */
- (id)stateForView:(id)view;
- (id)childrenForView:(id)view;
- (id)orderedChildrenForView:(id)view;

@optional

@end

#endif /* GADOMIDNodeProcessor_Protocol_h */
