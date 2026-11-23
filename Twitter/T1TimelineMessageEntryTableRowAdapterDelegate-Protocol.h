//
#ifndef T1TimelineMessageEntryTableRowAdapterDelegate_Protocol_h
#define T1TimelineMessageEntryTableRowAdapterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1TimelineMessageEntryTableRowAdapterDelegate <NSObject>

@required

/* required instance methods */
- (void)timelineMessageEntryTableRowAdapter:(id)adapter dismissItem:(id)item;
- (void)timelineMessageEntryTableRowAdapter:(id)adapter dismissUsers:(id)users entryID:(id)id;
- (void)timelineMessageEntryTableRowAdapter:(id)adapter dismissEntryID:(id)id;

@optional

@end

#endif /* T1TimelineMessageEntryTableRowAdapterDelegate_Protocol_h */
