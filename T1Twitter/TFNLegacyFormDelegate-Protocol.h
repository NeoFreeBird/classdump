//
#ifndef TFNLegacyFormDelegate_Protocol_h
#define TFNLegacyFormDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLegacyFormDelegate <NSObject>

@required

/* required instance methods */
- (void)form:(id)form didChangeSubmittability:(_Bool)submittability;

@optional

@end

#endif /* TFNLegacyFormDelegate_Protocol_h */
