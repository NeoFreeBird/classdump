//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SearchTypeaheadViewControllerContext_h
#define T1SearchTypeaheadViewControllerContext_h
@import Foundation;

#include "T1FleetsContext.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTSSearchFeatureSwitches-Protocol.h"
#include "TTSSearchTypeaheadViewControllerContext-Protocol.h"

@class NSObject, NSString, TASActionService, TFNTwitterAccount, TIPImagePipeline, TTSTypeaheadStore;

@interface T1SearchTypeaheadViewControllerContext : NSObject <TTSSearchTypeaheadViewControllerContext>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1FleetsContext *fleetsContext;
@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) id <TTSSearchFeatureSwitches> searchFeatures;
@property (readonly, nonatomic) TTSTypeaheadStore *typeaheadStore;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) unsigned long long typeaheadMaxQueryMatches;
@property (readonly, nonatomic) unsigned long long typeaheadMaxRecentSearches;
@property (readonly, nonatomic) unsigned long long typeaheadMaxRecentSearchesHorizontallyScrolling;
@property (readonly, nonatomic) unsigned long long typeaheadMaxUserMatches;
@property (readonly, nonatomic) TASActionService *actionService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)loadUserPresenceCollectionWithUserIDs:(id)ids completion:(id /* block */)completion;
- (id)userPresenceBridgedObservableForUserID:(long long)id;
- (id)makeTypeaheadUserTableRowAdapterContext;
- (id)makeRecentSearchCollectionViewCellContext;
- (id)makeExternalViewContext;
- (id)makeRecentSearchCollectionItemAdapterContext;
- (void)lookUpUserForID:(long long)id completionBlock:(id /* block */)block;
- (id)scrollScribeLogActionDidScrollToTop:(_Bool)top;
- (_Bool)isPossibleTwitterUsername:(id)username;

@end

#endif /* T1SearchTypeaheadViewControllerContext_h */
