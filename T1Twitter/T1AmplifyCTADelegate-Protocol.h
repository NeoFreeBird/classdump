//
#ifndef T1AmplifyCTADelegate_Protocol_h
#define T1AmplifyCTADelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AmplifyCTADelegate <NSObject>

@required

/* required instance methods */
- (void)ctaWasTappedOnAmplifyCTA:(id)cta;

@optional

@end

#endif /* T1AmplifyCTADelegate_Protocol_h */
