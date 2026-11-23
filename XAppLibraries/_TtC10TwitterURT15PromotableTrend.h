//
#ifndef _TtC10TwitterURT15PromotableTrend_h
#define _TtC10TwitterURT15PromotableTrend_h
@import Foundation;

#include "TFSTwitterPromotableTrend-Protocol.h"

@class NSObject, NSString, Swift.Bool, _$sSSSg;

@interface TwitterURT.PromotableTrend : NSObject <TFSTwitterPromotableTrend> // (Swift)

@property (nonatomic, readonly) _Bool isPromoted;
@property (nonatomic, readonly) NSString *impressionID;
@property (nonatomic, readonly) NSString *promotedTrendID;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT15PromotableTrend_h */
