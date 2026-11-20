//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSSearchTypeaheadViewControllerContext_Protocol_h
#define TTSSearchTypeaheadViewControllerContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTSSearchFeatureSwitches-Protocol.h"

@class TASActionService, TIPImagePipeline, TTSTypeaheadStore;

@protocol TTSSearchTypeaheadViewControllerContext <NSObject>

@required

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) id <TTSSearchFeatureSwitches> searchFeatures;
@property (readonly, nonatomic) TTSTypeaheadStore *typeaheadStore;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) unsigned long long typeaheadMaxQueryMatches;
@property (readonly, nonatomic) unsigned long long typeaheadMaxRecentSearches;
@property (readonly, nonatomic) unsigned long long typeaheadMaxRecentSearchesHorizontallyScrolling;
@property (readonly, nonatomic) unsigned long long typeaheadMaxUserMatches;
@property (readonly, nonatomic) TASActionService *actionService;

/* required instance methods */
- (id)userPresenceBridgedObservableForUserID:(long long)id;
- (void)loadUserPresenceCollectionWithUserIDs:(id)ids completion:(id /* block */)completion;
- (id)makeTypeaheadUserTableRowAdapterContext;
- (id)makeRecentSearchCollectionViewCellContext;
- (id)makeRecentSearchCollectionItemAdapterContext;
- (id)makeExternalViewContext;
- (void)lookUpUserForID:(long long)id completionBlock:(id /* block */)block;
- (id)scrollScribeLogActionDidScrollToTop:(_Bool)top;
- (_Bool)isPossibleTwitterUsername:(id)username;

@optional

@end

#endif /* TTSSearchTypeaheadViewControllerContext_Protocol_h */
