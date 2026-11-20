//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
