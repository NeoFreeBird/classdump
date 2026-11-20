//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeEventContainer_h
#define TFSScribeEventContainer_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSScribeEvent-Protocol.h"
#include "TFSScribeEventSerializer-Protocol.h"

@class NSData, NSDate, NSNumber, NSObject, NSString;

@interface TFSScribeEventContainer : NSObject <TFSScribeEvent, TFSScribeEventSerializer>

@property (readonly, nonatomic) NSNumber *rowId;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSNumber *retryCount;
@property (readonly, nonatomic) NSString *group;
@property (readonly, nonatomic) NSData *content;
@property (readonly, nonatomic) id <NSCoding> metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGroup:(id)group content:(id)content metadata:(id)metadata retryCount:(id)count rowId:(id)id timestamp:(id)timestamp;
- (id)data;
- (id)dictionaryRepresentation;
- (void)setClientEventSequenceStartTimestamp:(long long)timestamp sequenceNumber:(long long)number;
- (void)setSessionId:(id)id;
- (_Bool)usesTimestampSequenceNumber;

@end

#endif /* TFSScribeEventContainer_h */
