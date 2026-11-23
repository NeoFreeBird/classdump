//
#ifndef TFSTwitterPromotableTrend_Protocol_h
#define TFSTwitterPromotableTrend_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTwitterPromotableTrend <NSObject>

@required

@property (nonatomic, readonly) _Bool isPromoted;
@property (nonatomic, readonly) NSString *impressionID;
@property (nonatomic, readonly) NSString *promotedTrendID;

@optional

@end

#endif /* TFSTwitterPromotableTrend_Protocol_h */
