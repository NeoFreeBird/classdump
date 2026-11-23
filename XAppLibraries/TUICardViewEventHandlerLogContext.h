//
#ifndef TUICardViewEventHandlerLogContext_h
#define TUICardViewEventHandlerLogContext_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TFNTwitterCardEventLogger-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TUICardViewEventHandlerLogContext : NSObject

@property (readonly, nonatomic) id <TFNTwitterCardEventLogger> logger;
@property (readonly, nonatomic) long long logEventType;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) NSDictionary *viewEvent;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *scribeActionDebuggingSuffix;

/* instance methods */
- (id)initWithLogger:(id)logger logEventType:(long long)type cardDataSource:(id)source viewEvent:(id)event duration:(double)duration scribeActionDebuggingSuffix:(id)suffix;
- (id)initWithLogger:(id)logger logEventType:(long long)type cardDataSource:(id)source viewEvent:(id)event duration:(double)duration;
- (id)initWithLogger:(id)logger logEventType:(long long)type cardDataSource:(id)source viewEvent:(id)event;
- (id)initWithLogger:(id)logger logEventType:(long long)type cardDataSource:(id)source duration:(double)duration;
- (id)initWithLogger:(id)logger logEventType:(long long)type cardDataSource:(id)source;

@end

#endif /* TUICardViewEventHandlerLogContext_h */
