//
#ifndef TFCCardLogEvent_h
#define TFCCardLogEvent_h
@import Foundation;

#include "TFCCardData.h"
#include "TFCCardDataSource-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFCCardLogEvent : NSObject

@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) long long displayMode;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDictionary *viewEvent;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) TFCCardData *cardData;
@property (readonly, nonatomic) NSDictionary *cardEvent;
@property (readonly, nonatomic) NSDictionary *engagementMetadata;
@property (readonly, copy, nonatomic) NSString *scribeActionDebuggingSuffix;

/* instance methods */
- (id)initWithCardDataSource:(id)source displayMode:(long long)mode type:(long long)type viewEvent:(id)event;
- (id)initWithCardDataSource:(id)source displayMode:(long long)mode type:(long long)type viewEvent:(id)event duration:(double)duration;
- (id)initWithCardDataSource:(id)source displayMode:(long long)mode type:(long long)type viewEvent:(id)event duration:(double)duration scribeActionDebuggingSuffix:(id)suffix;
- (id)init;

@end

#endif /* TFCCardLogEvent_h */
