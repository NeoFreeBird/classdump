//
#ifndef _TtC14T1TwitterSwift32T1UnifiedCardEventHandlerContext_h
#define _TtC14T1TwitterSwift32T1UnifiedCardEventHandlerContext_h
@import Foundation;

#include "TUCTweetPerspective-Protocol.h"

@class TFNTwitterAccount, _$s21TwitterUnifiedCardsUI0B23CardEventHandlerContextCN, _$sSo17TFNTwitterAccountC, _$sSo19TUCTweetPerspective_pSg;

@interface T1TwitterSwift.T1UnifiedCardEventHandlerContext : type metadata for TwitterUnifiedCardsUI.UnifiedCardEventHandlerContext // (Swift)

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) id <TUCTweetPerspective> status;

/* instance methods */
- (id)initWithComponentViewEvent:(id)event presentingViewController:(id)controller scribeContext:(id)context promotedContent:(id)content unifiedCardsFeatures:(id)features eventLogger:(id)logger dwellEventLogger:(id)logger destinationHandlerRegistry:(id)registry destinationHandlerHelperFactory:(id)factory scribeContextBuilder:(id)builder appStoreScribeParametersBuilder:(id)builder unifiedCardView:(id)view presentingCell:(id)cell account:(id)account status:(id)status;
- (id)initWithComponentViewEvent:(id)event presentingViewController:(id)controller scribeContext:(id)context promotedContent:(id)content unifiedCardsFeatures:(id)features eventLogger:(id)logger dwellEventLogger:(id)logger destinationHandlerRegistry:(id)registry destinationHandlerHelperFactory:(id)factory scribeContextBuilder:(id)builder appStoreScribeParametersBuilder:(id)builder unifiedCardView:(id)view presentingCell:(id)cell;

@end

#endif /* _TtC14T1TwitterSwift32T1UnifiedCardEventHandlerContext_h */
