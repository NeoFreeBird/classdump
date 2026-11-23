//
#ifndef TFNTwitterAutoGeotaggerDelegate_Protocol_h
#define TFNTwitterAutoGeotaggerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterAutoGeotaggerDelegate <NSObject>

@required

/* required instance methods */
- (void)geoAutotagger:(id)autotagger didCompleteWithPlace:(id)place;

@optional

@end

#endif /* TFNTwitterAutoGeotaggerDelegate_Protocol_h */
