//
#ifndef GADRTBAdapter_Protocol_h
#define GADRTBAdapter_Protocol_h
@import Foundation;

#include "GADMediationAdapter-Protocol.h"

@protocol GADRTBAdapter <GADMediationAdapter>

@required

/* required instance methods */
- (id)init;
- (void)collectSignalsForRequestParameters:(id)parameters completionHandler:(id /* block */)handler;

@optional

@end

#endif /* GADRTBAdapter_Protocol_h */
