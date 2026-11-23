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
