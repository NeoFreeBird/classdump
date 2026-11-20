//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFReportableComponentsContainer_Protocol_h
#define OCFReportableComponentsContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFReportableComponentsContainer <NSObject>

@required

/* required instance methods */
- (id)reportableComponents;

@optional

@end

#endif /* OCFReportableComponentsContainer_Protocol_h */
