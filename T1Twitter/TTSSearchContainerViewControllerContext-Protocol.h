//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSSearchContainerViewControllerContext_Protocol_h
#define TTSSearchContainerViewControllerContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"
#include "TTSSearchFeatureSwitches-Protocol.h"

@class NSString, TTSTypeaheadStore;

@protocol TTSSearchContainerViewControllerContext <NSObject>

@required

@property (readonly, nonatomic) id <TTSSearchFeatureSwitches> searchFeatures;
@property (readonly, nonatomic) id <TFSTwitterLegacyScribeLogMethods> scribe;
@property (readonly, nonatomic) TTSTypeaheadStore *typeaheadStore;
@property (readonly, nonatomic) NSString *searchFilterItemAccessibilityIdentifier;
@property (readonly, nonatomic) NSString *autocompleteLoggingChannel;
@property (copy, nonatomic) NSString *navigationSubtitle;
@property (copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long accountUserID;
@property (readonly, nonatomic) _Bool isExploreMessageEnabled;

/* required instance methods */
- (_Bool)shouldShowStaticSearch:(id)search;
- (_Bool)shouldShowCommunitiesHashtagSearch:(id)search;
- (_Bool)onlyShowLatestTab:(id)tab;
- (_Bool)showCommunitiesTabs:(id)tabs;
- (_Bool)isAdvancedSearchEnabled;
- (void)openFromSourceViewController:(id)controller url:(id)url completionBlock:(id /* block */)block;
- (void)handleURLFromSourceViewController:(id)controller url:(id)url;
- (void)presentShareForSearchQuery:(id)query URL:(id)url fromSourceViewController:(id)controller barButtonItem:(id)item;
- (id)makeSearchFiltersViewControllerContext;
- (id)makeSearchTypeaheadViewControllerContext;
- (id)makeSearchContainerViewControllerContext;
- (id)currentLocation;
- (id)makeSearchResultsViewControllerWithScribeContext:(id)context searchParameters:(id)parameters searchTerm:(id)term selectedTab:(long long)tab tabScribeElements:(id)elements subtitleAction:(id /* block */)action onInitialLoad:(id /* block */)load;
- (long long)selectedTabForSearchResultsViewController:(id)controller;
- (id)makeProfileViewControllerFromSourceViewController:(id)controller userReference:(id)reference;
- (id)makeOneOnOneConversationViewControllerForUserID:(long long)id;
- (void)lookUpUserForUserReference:(id)reference completionBlock:(id /* block */)block;
- (void)requestAuthorizationForGeoService:(id /* block */)service;
- (void)getRealtimeLocationWithCallback:(id /* block */)callback;
- (id)makeSearchResultsParameters:(id)parameters source:(id)source;
- (id)makeSearchResultSourceForRecentSearch:(id)search;
- (void)presentGrokChatFrom:(id)from query:(id)query;

@optional

@end

#endif /* TTSSearchContainerViewControllerContext_Protocol_h */
