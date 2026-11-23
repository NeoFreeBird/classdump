//
#ifndef _TtC14T1TwitterSwift38URTTimelineThreadHeaderTableRowAdapter_h
#define _TtC14T1TwitterSwift38URTTimelineThreadHeaderTableRowAdapter_h
@import Foundation;

#include "T1URTViewControllerAwareAdapter-Protocol.h"

@class T1TwitterSwift.ThreadHeaderTableRowAdapterDelegate ?, _$sSo16TIPImagePipelineCSg, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _$sSo32TFSTwitterLegacyScribeLogMethods_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTTimelineThreadHeaderTableRowAdapter : Swift._SwiftObject <T1URTViewControllerAwareAdapter> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    __C.TFSTwitterScribeContext scribeContext;
    __C.TIPImagePipeline? imagePipeline;
    T1TwitterSwift.ThreadHeaderTableRowAdapterDelegate ? headerDelegate;
}

/* instance methods */
- (void)adapterWasUsedByURTViewController:(id)controller;

@end

#endif /* _TtC14T1TwitterSwift38URTTimelineThreadHeaderTableRowAdapter_h */
