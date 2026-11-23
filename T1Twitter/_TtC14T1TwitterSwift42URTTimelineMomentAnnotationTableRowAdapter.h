//
#ifndef _TtC14T1TwitterSwift42URTTimelineMomentAnnotationTableRowAdapter_h
#define _TtC14T1TwitterSwift42URTTimelineMomentAnnotationTableRowAdapter_h
@import Foundation;

#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"

@class NSObject, TFSTwitterCore18URTImpressionCache_pSg, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _$sSo32TFNTwitterScribeImpressionLoggerC;

@interface T1TwitterSwift.URTTimelineMomentAnnotationTableRowAdapter : NSObject <TFNCellVisibilityBroadcasterDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    TFSTwitterCore18URTImpressionCache_pSg scribeImpressionCache;
    __C.TFNTwitterScribeImpressionLogger impressionLogger;
}

/* instance methods */
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift42URTTimelineMomentAnnotationTableRowAdapter_h */
