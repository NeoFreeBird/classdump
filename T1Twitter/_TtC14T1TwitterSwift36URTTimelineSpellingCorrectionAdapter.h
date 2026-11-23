//
#ifndef _TtC14T1TwitterSwift36URTTimelineSpellingCorrectionAdapter_h
#define _TtC14T1TwitterSwift36URTTimelineSpellingCorrectionAdapter_h
@import Foundation;

#include "T1URTViewControllerAwareAdapter-Protocol.h"

@class Swift.Bool, _$sSo23TFSTwitterScribeContextC, _$sSo24T1PromptNavigationHelperC, _$sSo32TFSTwitterLegacyScribeLogMethods_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.URTTimelineSpellingCorrectionAdapter : Swift._SwiftObject <T1URTViewControllerAwareAdapter> { // (Swift)
    /* instance variables */
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    __C.TFSTwitterScribeContext scribeContext;
    __C.T1PromptNavigationHelper navigationHelper;
    Swift.Bool shouldLogImpression;
}

/* instance methods */
- (void)adapterWasUsedByURTViewController:(id)controller;

@end

#endif /* _TtC14T1TwitterSwift36URTTimelineSpellingCorrectionAdapter_h */
