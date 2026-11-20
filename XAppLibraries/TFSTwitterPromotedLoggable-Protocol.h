//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterPromotedLoggable_Protocol_h
#define TFSTwitterPromotedLoggable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSNumber, NSString, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TFSTwitterPromotedLoggable <NSObject>

@required

@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) NSNumber *statusIDNumber;
@property (nonatomic) _Bool hasRecordedImpression;
@property (nonatomic) _Bool hasRecordedDwellImpression;

@optional

@end

#endif /* TFSTwitterPromotedLoggable_Protocol_h */
