//
#ifndef _TtCVOV10TFSURTCore16URTTimelineEntry7Content4Item15ClientEventInfo_h
#define _TtCVOV10TFSURTCore16URTTimelineEntry7Content4Item15ClientEventInfo_h
@import Foundation;

#include "TFSURTClientEventInfo-Protocol.h"

@class NSObject, NSString, TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo.Details ?, _$sSSSg;

@interface TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo : NSObject <TFSURTClientEventInfo> { // (Swift)
    /* instance variables */
    TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo.Details ? details;
}

@property (nonatomic, readonly) NSString *component;
@property (nonatomic, readonly) NSString *element;
@property (nonatomic, readonly) NSString *action;
@property (nonatomic, readonly) NSString *entityToken;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtCVOV10TFSURTCore16URTTimelineEntry7Content4Item15ClientEventInfo_h */
