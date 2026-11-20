//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBTimelineMessageEntryTableRowAdapter_h
#define ONBTimelineMessageEntryTableRowAdapter_h
@import Foundation;

#include "T1TimelineMessageEntryTableRowAdapterDelegate-Protocol.h"
#include "T1URTViewControllerAwareAdapter-Protocol.h"

@class T1TimelineMessageEntryTableRowAdapter;

@interface ONBTimelineMessageEntryTableRowAdapter : T1TimelineMessageEntryTableRowAdapter <T1URTViewControllerAwareAdapter>

@property (weak, nonatomic) id <T1TimelineMessageEntryTableRowAdapterDelegate> originalMessageEntryAdapterDelegate;

/* instance methods */
- (void)adapterWasUsedByURTViewController:(id)controller;

@end

#endif /* ONBTimelineMessageEntryTableRowAdapter_h */
