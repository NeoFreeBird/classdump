//
#ifndef GADDynamicHeightSearchRequest_h
#define GADDynamicHeightSearchRequest_h
@import Foundation;

#include "GADRequest.h"

@class NSMutableDictionary, NSString;

@interface GADDynamicHeightSearchRequest : GADRequest {
    /* instance variables */
    NSMutableDictionary *_requestParameters;
}

@property (copy, nonatomic) NSString *query;
@property (nonatomic) long long adPage;
@property (nonatomic) _Bool adTestEnabled;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *hostLanguage;
@property (copy, nonatomic) NSString *locationExtensionTextColor;
@property (nonatomic) double locationExtensionFontSize;
@property (nonatomic) _Bool clickToCallExtensionEnabled;
@property (nonatomic) _Bool locationExtensionEnabled;
@property (nonatomic) _Bool plusOnesExtensionEnabled;
@property (nonatomic) _Bool sellerRatingsExtensionEnabled;
@property (nonatomic) _Bool siteLinksExtensionEnabled;
@property (copy, nonatomic) NSString *CSSWidth;
@property (nonatomic) long long numberOfAds;
@property (copy, nonatomic) NSString *fontFamily;
@property (copy, nonatomic) NSString *attributionFontFamily;
@property (nonatomic) double annotationFontSize;
@property (nonatomic) double attributionFontSize;
@property (nonatomic) double descriptionFontSize;
@property (nonatomic) double domainLinkFontSize;
@property (nonatomic) double titleFontSize;
@property (copy, nonatomic) NSString *adBorderColor;
@property (copy, nonatomic) NSString *adSeparatorColor;
@property (copy, nonatomic) NSString *annotationTextColor;
@property (copy, nonatomic) NSString *attributionTextColor;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSString *domainLinkColor;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *titleLinkColor;
@property (copy, nonatomic) NSString *adBorderCSSSelections;
@property (nonatomic) double adjustableLineHeight;
@property (nonatomic) double attributionBottomSpacing;
@property (copy, nonatomic) NSString *borderCSSSelections;
@property (nonatomic) _Bool titleUnderlineHidden;
@property (nonatomic) _Bool boldTitleEnabled;
@property (nonatomic) double verticalSpacing;
@property (nonatomic) _Bool detailedAttributionExtensionEnabled;
@property (nonatomic) _Bool longerHeadlinesExtensionEnabled;
@property (copy, nonatomic) NSString *styleID;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)setAdvancedOptionValue:(id)value forKey:(id)key;
- (void)parameterHelperSetValue:(id)value forKey:(id)key;
- (id)dynamicHeightAdURLFragmentsWithAdUnitID:(id)id;
- (id)CSADynamicHeightSearchRequestURLWithAdUnitID:(id)id;

@end

#endif /* GADDynamicHeightSearchRequest_h */
