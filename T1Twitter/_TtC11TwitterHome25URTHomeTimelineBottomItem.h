//
#ifndef _TtC11TwitterHome25URTHomeTimelineBottomItem_h
#define _TtC11TwitterHome25URTHomeTimelineBottomItem_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, Swift.Bool, TwitterHome.URTHomeTimelineBottomItem.CursorType, _$sSS;

@interface TwitterHome.URTHomeTimelineBottomItem : NSObject <NSObject> { // (Swift)
    /* instance variables */
    TwitterHome.URTHomeTimelineBottomItem.CursorType type;
    Swift.String entryID;
    Swift.Bool loading;
}

@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* _TtC11TwitterHome25URTHomeTimelineBottomItem_h */
