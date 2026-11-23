//
#ifndef _TtP21TwitterUnifiedCardsUI36UnifiedCardVisibilityListenerContext__Protocol_h
#define _TtP21TwitterUnifiedCardsUI36UnifiedCardVisibilityListenerContext__Protocol_h
@import Foundation;

#include "TAFEventLogger-Protocol.h"
#include "TUCBrowserDestinationHandlerHelper-Protocol.h"
#include "TUCFeatures-Protocol.h"
#include "TUCUnifiedCardView-Protocol.h"

@class NSIndexPath, UIView, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@protocol TwitterUnifiedCardsUI.UnifiedCardVisibilityListenerContext

@required

@property (nonatomic, readonly) UIView<TUCUnifiedCardView> *unifiedCardView;
@property (nonatomic, readonly) id <TUCFeatures> features;
@property (nonatomic, readonly) id <TAFEventLogger> eventLogger;
@property (nonatomic, readonly) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (nonatomic, readonly) id <TUCBrowserDestinationHandlerHelper> browserHelper;
@property (nonatomic, readonly) _Bool isDataSensitive;
@property (nonatomic, readonly) _Bool isTweetDetails;
@property (nonatomic, readonly) NSIndexPath *indexPath;

@optional

@end

#endif /* _TtP21TwitterUnifiedCardsUI36UnifiedCardVisibilityListenerContext__Protocol_h */
