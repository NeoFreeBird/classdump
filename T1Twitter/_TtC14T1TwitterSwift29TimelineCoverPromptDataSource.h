//
#ifndef _TtC14T1TwitterSwift29TimelineCoverPromptDataSource_h
#define _TtC14T1TwitterSwift29TimelineCoverPromptDataSource_h
@import Foundation;

#include "TFNPromptDataSource-Protocol.h"

@class NSArray, NSObject, Swift.Bool, TFNPromptContentViewSpec, TFNPromptImageSpec, TFNPromptTextSpec, TwitterOnboardingFeature0aB24EmbeddedFlowViewProvider_pSgXw, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoCMn ?, _$s10TFSURTCore8URTCoverOMn, _$sSS, _$sSo10TFNToasterC, _$sSo16UIViewControllerCSgXw, _$sSo17TFNTwitterAccountC, _$sSo20TFSURLProtocolRouterC, _$sySa -> _$s10TwitterURT40URTOCFHalfCoverTrayContentViewControllerC6ActionVMn _$sGcSg, _$sySo16UIViewControllerC_yycSgtcSg, _$syyycSgcSg;

@interface T1TwitterSwift.TimelineCoverPromptDataSource : NSObject <TFNPromptDataSource> { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTCover cover;
    __C.TFNTwitterAccount account;
    Swift.String scribePage;
    Swift.String scribeSection;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo ? clientEventInfo;
    __C.TFSURLProtocolRouter router;
    __C.TFNToaster toaster;
    weak __C.UIViewController? presentingViewController;
    (((() -> ())?) -> ())? dismissBlock;
    ((__C.UIViewController, (() -> ())?) -> ())? presentBlock;
    Swift.Bool hostsActionButtons;
     empty-list Swift.Array -> nominal type descriptor for TwitterURT.URTOCFHalfCoverTrayContentViewController.Action _$sGcSg onHostedActionsChange;
    TwitterOnboardingFeature0aB24EmbeddedFlowViewProvider_pSgXw embeddedFlowProvider;
}

@property (nonatomic, readonly) id /* block */ promptViewProvider;
@property (nonatomic, readonly) id /* block */ impressionAction;
@property (nonatomic, readonly) TFNPromptContentViewSpec *contentViewSpec;
@property (nonatomic, readonly) TFNPromptImageSpec *imageSpec;
@property (nonatomic, readonly) TFNPromptTextSpec *primaryTextSpec;
@property (nonatomic, readonly) TFNPromptTextSpec *secondaryTextSpec;
@property (nonatomic, readonly) TFNPromptTextSpec *detailTextSpec;
@property (nonatomic, readonly) NSArray *buttonSpecs;
@property (nonatomic, readonly) _Bool showDismissOption;
@property (nonatomic, readonly) id /* block */ dismissOptionAction;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift29TimelineCoverPromptDataSource_h */
