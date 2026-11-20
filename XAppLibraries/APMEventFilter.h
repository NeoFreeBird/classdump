//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
