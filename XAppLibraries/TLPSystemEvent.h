//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLPSystemEvent_h
#define TLPSystemEvent_h
@import Foundation;

#include "TLPAPIResponseModel.h"
#include "TLPInternalEvent.h"

@class NSDictionary, NSError;

@interface TLPSystemEvent : TLPInternalEvent

@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) TLPAPIResponseModel *subscribeResponse;

/* instance methods */
- (id)initWithEventType:(long long)type topic:(id)topic payload:(id)payload;

@end

#endif /* TLPSystemEvent_h */
