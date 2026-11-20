//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLTSentinelStorage_Protocol_h
#define TLTSentinelStorage_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLTSentinelStorage <NSObject>

@required

/* required instance methods */
- (void)createWithAssociatedValue:(id)value completion:(id /* block */)completion;
- (_Bool)createWithAssociatedValueSync:(id)sync;
- (_Bool)existsWithAssociatedValue:(id)value;
- (id)associatedValue;
- (void)remove;

@optional

@end

#endif /* TLTSentinelStorage_Protocol_h */
