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
