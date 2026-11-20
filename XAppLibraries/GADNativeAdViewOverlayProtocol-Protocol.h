//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeAdViewOverlayProtocol_Protocol_h
#define GADNativeAdViewOverlayProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADNativeAdViewOverlayProtocol <NSObject>

@required

/* required instance methods */
- (void)setOverlayView:(id)view;

@optional

@end

#endif /* GADNativeAdViewOverlayProtocol_Protocol_h */
