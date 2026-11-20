//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventScribableItem_h
#define T1LiveEventScribableItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "T1LiveEvent.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString, TFNTwitterStatus;

@interface T1LiveEventScribableItem : NSObject <NSCopying, TFSTwitterCore.TFSTwitterScribableItem>

@property (readonly, nonatomic) T1LiveEvent *liveEvent;
@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, copy, nonatomic) NSString *scribeItemDebugDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithLiveEvent:(id)event status:(id)status;
- (id)initWithLiveEvent:(id)event;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* T1LiveEventScribableItem_h */
