//
#ifndef LHLSiOSCaptionDelegate_Protocol_h
#define LHLSiOSCaptionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol LHLSiOSCaptionDelegate <NSObject>

@required

/* required instance methods */
- (void)renderCaption:(id)caption;

@optional

@end

#endif /* LHLSiOSCaptionDelegate_Protocol_h */
