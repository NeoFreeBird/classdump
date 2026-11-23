//
#ifndef TTSSearchViewControllerOptions_h
#define TTSSearchViewControllerOptions_h
@import Foundation;

#include "TTSSearchResultsParameters.h"

@class NSObject, NSString, TFSTwitterScribeContext;

@interface TTSSearchViewControllerOptions : NSObject

@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (copy, nonatomic) NSString *scribeParameterContext;
@property (retain, nonatomic) TTSSearchResultsParameters *parameters;
@property (nonatomic) _Bool searchInputEnabled;
@property (nonatomic) _Bool shouldFocusOnSearchField;
@property (nonatomic) _Bool shouldShowComposeTooltip;
@property (nonatomic) _Bool shouldHideTypeahead;
@property (nonatomic) long long selectedTab;
@property (copy, nonatomic) NSString *prefilledQuery;
@property (copy, nonatomic) NSString *prefilledSource;
@property (copy, nonatomic) NSString *searchBarPlaceholder;
@property (copy, nonatomic) NSString *communityId;

/* class methods */
+ (id)viewControllerOptionsFromURLParameters:(id)urlparameters urtRequestParameters:(id)parameters;

/* instance methods */
- (id)init;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToSearchViewControllerOptions:(id)options;

@end

#endif /* TTSSearchViewControllerOptions_h */
