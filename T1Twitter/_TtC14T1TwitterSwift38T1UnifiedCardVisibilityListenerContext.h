//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift38T1UnifiedCardVisibilityListenerContext_h
#define _TtC14T1TwitterSwift38T1UnifiedCardVisibilityListenerContext_h
@import Foundation;

#include "TAFEventLogger-Protocol.h"
#include "TUCBrowserDestinationHandlerHelper-Protocol.h"
#include "TUCFeatures-Protocol.h"
#include "TUCUnifiedCardView-Protocol.h"
#include "_TtP21TwitterUnifiedCardsUI36UnifiedCardVisibilityListenerContext_-Protocol.h"

@class NSIndexPath, NSObject, Swift.Bool, UIView, _$s10Foundation9IndexPathVMn, _$s14TFSTwitterCore0A15PromotedContentCMn ?, _$sSo11TUCFeatures_p, _$sSo14TAFEventLogger_p, _$sSo18TUCUnifiedCardView_So6UIViewCXc, _$sSo34TUCBrowserDestinationHandlerHelper_pSg, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface T1TwitterSwift.T1UnifiedCardVisibilityListenerContext : NSObject <TwitterUnifiedCardsUI.UnifiedCardVisibilityListenerContext> // (Swift)

@property (nonatomic, readonly) UIView<TUCUnifiedCardView> *unifiedCardView;
@property (nonatomic, readonly) id <TUCFeatures> features;
@property (nonatomic, readonly) id <TAFEventLogger> eventLogger;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) id <TUCBrowserDestinationHandlerHelper> browserHelper;
@property (nonatomic, readonly) _Bool isTweetDetails;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) _Bool isDataSensitive;

/* instance methods */
- (id)initWithUnifiedCardView:(id)view dataViewController:(id)controller account:(id)account promotedContent:(id)content browserHelper:(id)helper indexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift38T1UnifiedCardVisibilityListenerContext_h */
