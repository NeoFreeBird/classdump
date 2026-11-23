//
#ifndef TFNTwitterHomeTimelineStreamFactory_Protocol_h
#define TFNTwitterHomeTimelineStreamFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterHomeTimelineStreamFactory <NSObject>

@required

/* required instance methods */
- (id)createWithAccount:(id)account;
- (id)createWithAccount:(id)account;

@optional

@end

#endif /* TFNTwitterHomeTimelineStreamFactory_Protocol_h */
