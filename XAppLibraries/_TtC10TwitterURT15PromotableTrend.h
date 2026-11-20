//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
