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
