//
#ifndef _TtC10TFNUISwift14LegacyTabGroup_h
#define _TtC10TFNUISwift14LegacyTabGroup_h
@import Foundation;

#include "_TtC10TFNUISwift19LegacyTabGroupEntry.h"

@class NSArray, NSObject, _$sSa -> TFNUISwift.LegacyTabGroupEntry, _$sSi;

@interface TFNUISwift.LegacyTabGroup : NSObject // (Swift)

@property (nonatomic, readonly) NSArray *entries;
@property (nonatomic) long long activeIndex;
@property (nonatomic, readonly) TFNUISwift.LegacyTabGroupEntry *activeEntry;

/* instance methods */
- (id)initWithEntries:(id)entries activeIndex:(long long)index;
- (id)init;

@end

#endif /* _TtC10TFNUISwift14LegacyTabGroup_h */
