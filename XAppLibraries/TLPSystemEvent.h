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
