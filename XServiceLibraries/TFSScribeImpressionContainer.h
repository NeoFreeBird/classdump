//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeImpressionContainer_h
#define TFSScribeImpressionContainer_h
@import Foundation;

#include "TFSScribeImpression-Protocol.h"

@class NSData, NSDate, NSObject, NSString;

@interface TFSScribeImpressionContainer : NSObject <TFSScribeImpression>

@property (readonly, nonatomic) NSString *group;
@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGroup:(id)group content:(id)content timestamp:(id)timestamp eventName:(id)name query:(id)query;

@end

#endif /* TFSScribeImpressionContainer_h */
