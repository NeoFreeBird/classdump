//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift35URTTimelineLabelItemTableRowAdapter_h
#define _TtC14T1TwitterSwift35URTTimelineLabelItemTableRowAdapter_h
@import Foundation;

#include "T1URTViewControllerAwareAdapter-Protocol.h"

@class _$s10TwitterURT53URTTimelineConversationTransparencyVisibilityDelegateMp ?, _$s12CoreGraphics7CGFloatVMn, _$sSo23TFSTwitterScribeContextC, _$sSo32TFNTwitterScribeImpressionLoggerC, _$sSo32TFSTwitterLegacyScribeLogMethods_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTTimelineLabelItemTableRowAdapter : Swift._SwiftObject <T1URTViewControllerAwareAdapter> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat kMinLabelCellHeight;
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    __C.TFSTwitterScribeContext scribeContext;
    __C.TFNTwitterScribeImpressionLogger impressionLogger;
    protocol descriptor for TwitterURT.URTTimelineConversationTransparencyVisibilityDelegate ? conversationTransparencyDelegate;
}

/* instance methods */
- (void)adapterWasUsedByURTViewController:(id)controller;

@end

#endif /* _TtC14T1TwitterSwift35URTTimelineLabelItemTableRowAdapter_h */
