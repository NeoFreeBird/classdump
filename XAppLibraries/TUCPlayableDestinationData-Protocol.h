//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCPlayableDestinationData_Protocol_h
#define TUCPlayableDestinationData_Protocol_h
@import Foundation;

#include "TUCButtonData.h"

@protocol TUCPlayableDestinationData

@required

@property (nonatomic, readonly) TUCButtonData *button;

@optional

@end

#endif /* TUCPlayableDestinationData_Protocol_h */
