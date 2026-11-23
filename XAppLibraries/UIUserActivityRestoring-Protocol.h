//
#ifndef UIUserActivityRestoring_Protocol_h
#define UIUserActivityRestoring_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIUserActivityRestoring <NSObject>

@required

/* required instance methods */
- (void)restoreUserActivityState:(id)state;

@optional

@end

#endif /* UIUserActivityRestoring_Protocol_h */
