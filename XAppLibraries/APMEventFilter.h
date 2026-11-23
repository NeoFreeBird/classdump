//
#ifndef APMEventFilter_h
#define APMEventFilter_h
@import Foundation;

#include "APMAudienceFilter-Protocol.h"

@class NSData, NSObject, NSString;

@interface APMEventFilter : NSObject <APMAudienceFilter>

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) int audienceID;
@property (readonly, nonatomic) int filterID;
@property (readonly, nonatomic) _Bool sessionScoped;
@property (readonly, nonatomic) _Bool dynamic;
@property (readonly, nonatomic) _Bool sequence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAudienceID:(int)id filterID:(int)id eventName:(id)name data:(id)data sessionScoped:(_Bool)scoped dynamic:(_Bool)dynamic sequence:(_Bool)sequence;
- (_Bool)isSessionScoped;
- (_Bool)isDynamic;
- (_Bool)isSequence;

@end

#endif /* APMEventFilter_h */
