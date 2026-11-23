//
#ifndef TSCOffPlatformShareable_Protocol_h
#define TSCOffPlatformShareable_Protocol_h
@import Foundation;

#include "TSCTextShareable-Protocol.h"

@protocol TSCOffPlatformShareable <TSCTextShareable>

@required

/* required instance methods */
- (id)urlToTwitterFor:(unsigned long long)_for;
- (void)setShareTokenInURLEnabled:(_Bool)urlenabled;

@optional

@end

#endif /* TSCOffPlatformShareable_Protocol_h */
