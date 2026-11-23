//
#ifndef TFNTwitterURLParserResult_h
#define TFNTwitterURLParserResult_h
@import Foundation;

#include "GrokURLParams.h"
#include "ImagineURLParams.h"
#include "RadarURLParams.h"

@class NSArray, NSObject, NSString;

@interface TFNTwitterURLParserResult : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long searchType;
@property (copy, nonatomic) NSString *nativeURLString;
@property (copy, nonatomic) NSString *screenName;
@property (nonatomic) long long tweetId;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSString *universalLinkURLString;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *slug;
@property (copy, nonatomic) NSString *timelineID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *directMessageConversationID;
@property (copy, nonatomic) NSString *highlightsStoryID;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *stickerTabID;
@property (copy, nonatomic) NSString *topicID;
@property (copy, nonatomic) NSString *topicImpressionID;
@property (copy, nonatomic) NSString *topicTaxonomyKey;
@property (copy, nonatomic) NSString *topicTaxonomyValue;
@property (copy, nonatomic) NSString *momentID;
@property (copy, nonatomic) NSString *reportingFollowupURLString;
@property (copy, nonatomic) NSString *communityNotesURLString;
@property (copy, nonatomic) NSString *listID;
@property (copy, nonatomic) NSArray *pinnedTweetIDs;
@property (copy, nonatomic) NSString *chartTimeframe;
@property (copy, nonatomic) NSString *searchTabType;
@property (copy, nonatomic) NSString *broadcastID;
@property (copy, nonatomic) NSString *spaceID;
@property (copy, nonatomic) NSString *sourceID;
@property (nonatomic) long long noteID;
@property (nonatomic) long long suggestionID;
@property (copy, nonatomic) NSString *communityID;
@property (copy, nonatomic) NSString *referringEvent;
@property (copy, nonatomic) NSString *referringPage;
@property (copy, nonatomic) NSString *creatorID;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NSString *jobID;
@property (copy, nonatomic) NSString *trackingID;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) GrokURLParams *grokInfo;
@property (retain, nonatomic) ImagineURLParams *imagineInfo;
@property (retain, nonatomic) RadarURLParams *radarInfo;
@property (copy, nonatomic) NSString *jfPath;
@property (copy, nonatomic) NSString *jfUrl;
@property (nonatomic) long long aiTrendID;
@property (copy, nonatomic) NSString *aiTrendMode;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic) NSString *returnURLString;
@property (copy, nonatomic) NSString *boostTab;
@property (readonly, copy, nonatomic) NSString *displayTitleForWebView;
@property (readonly, nonatomic) _Bool shouldUseHTMLTitleForWebView;

/* instance methods */

@end

#endif /* TFNTwitterURLParserResult_h */
