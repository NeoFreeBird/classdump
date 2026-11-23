//
#ifndef T1LiveEventCardViewModel_h
#define T1LiveEventCardViewModel_h
@import Foundation;

#include "T1LiveEvent.h"
#include "T1LiveEventCardViewModelDelegate-Protocol.h"
#include "T1LiveEventCardViewTheme-Protocol.h"
#include "T1LiveEventFeatures.h"
#include "T1LiveEventMediaViewModel.h"
#include "T1LiveEventRemindMeViewModel.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSAttributedString, NSObject, NSString, TFCCardData, TFCImageSpec, TFNTwitterCardContext, TFNTwitterStatus, TFSTwitterBroadcast;
@protocol TFNTwitterAccountFetchCancellable;

@interface T1LiveEventCardViewModel : NSObject

@property (retain, nonatomic) T1LiveEvent *event;
@property (retain, nonatomic) TFSTwitterBroadcast *broadcast;
@property (retain, nonatomic) TFNTwitterStatus *mediaStatus;
@property (nonatomic) _Bool refreshing;
@property (nonatomic) _Bool refreshingFromCAPIEndpoint;
@property (retain, nonatomic) NSString *ubsRefreshIdentifier;
@property (retain, nonatomic) id <TFNTwitterAccountFetchCancellable> mediaStatusFetchRequest;
@property (nonatomic) long long mediaStatusFetchRequestStatusID;
@property (retain, nonatomic) T1LiveEventFeatures *liveEventFeatures;
@property (retain, nonatomic) id <T1LiveEventCardViewTheme> theme;
@property (retain, nonatomic) TFCCardData *latestCardData;
@property (readonly, nonatomic) TFNTwitterCardContext *cardContext;
@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (readonly, nonatomic) T1LiveEventMediaViewModel *mediaViewModel;
@property (readonly, nonatomic) T1LiveEventRemindMeViewModel *remindMeViewModel;
@property (readonly, copy, nonatomic) NSAttributedString *attributedEventBadgeString;
@property (readonly, copy, nonatomic) NSAttributedString *attributedEventCategoryString;
@property (readonly, copy, nonatomic) NSAttributedString *attributedEventTitleString;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> authorUser;
@property (readonly, nonatomic) TFCImageSpec *imageSpec;
@property (weak, nonatomic) id <T1LiveEventCardViewModelDelegate> delegate;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (void)dealloc;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToCardViewModel:(id)model;
- (void)startPeriodicalUpdates;
- (void)stopPeriodicalUpdates;
- (void)_t1_updateMediaViewModel;
- (void)_t1_startPeriodicalCAPIUpdates;
- (void)_t1_stopPeriodicalCAPIUpdates;
- (void)_t1_didReceiveCAPIResponse:(id)capiresponse;
- (void)_t1_startPeriodicalUBSUpdates;
- (void)_t1_stopPeriodicalUBSUpdates;
- (void)_t1_processUBSResponse:(id)ubsresponse;
- (void)_t1_fetchMediaStatusWithStatusID:(long long)id;
- (_Bool)isRefreshing;
- (_Bool)isRefreshingFromCAPIEndpoint;

@end

#endif /* T1LiveEventCardViewModel_h */
