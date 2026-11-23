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
