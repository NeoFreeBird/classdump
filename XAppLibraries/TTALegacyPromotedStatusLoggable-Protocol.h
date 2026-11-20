//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTALegacyPromotedStatusLoggable_Protocol_h
#define TTALegacyPromotedStatusLoggable_Protocol_h
@import Foundation;

#include "TFCCardData.h"
#include "TFSTwitterPromotedLoggable-Protocol.h"

@protocol TTALegacyPromotedStatusLoggable <TFSTwitterPromotedLoggable>

@required

@property (readonly, nonatomic) TFCCardData *cardData;

@optional

@end

#endif /* TTALegacyPromotedStatusLoggable_Protocol_h */
