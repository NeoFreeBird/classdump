//
#ifndef TUCExperimentSignals_h
#define TUCExperimentSignals_h
@import Foundation;

#include "TUCPosterMetadata.h"

@class NSArray, NSDictionary, NSNumber, NSObject, NSString;

@interface TUCExperimentSignals : NSObject // (Swift)

@property (nonatomic, readonly) NSDictionary *appStoreDetailsButtonDictionary;
@property (nonatomic, readonly) NSArray *dpaProductMetadataObjects;
@property (nonatomic, readonly) _Bool isFallbackBrowser;
@property (nonatomic, readonly) TUCPosterMetadata *posterMetadata;
@property (nonatomic, readonly) long long compactCardLayoutCapability;
@property (nonatomic, readonly) _Bool chromeVanityURLLabelEnabled;
@property (nonatomic, readonly) _Bool chromeVanityTitleLabelEnabled;
@property (nonatomic, readonly) NSString *websiteCTACardLabel;
@property (nonatomic, readonly) _Bool installCardButtonRedesignEnabled;
@property (nonatomic, readonly) NSNumber *swipeableContainerTrailingPadding;
@property (nonatomic, readonly) NSNumber *detailsComponentTitleMaxLines;
@property (nonatomic, readonly) _Bool swipeableMediaComponentShouldRoundBottomCorners;
@property (nonatomic, readonly) _Bool dockedMediaDestinationsDisabled;
@property (nonatomic, readonly) double mediaComponentTallMediaThresholdAspectRatio;
@property (nonatomic, readonly) _Bool mediaComponentShouldClipTallMediaPromotedContent;
@property (nonatomic, readonly) _Bool mediaComponentShouldRenderOverlayDPA;
@property (nonatomic, readonly) _Bool isUnifiedCardsDestinationUrlParamsEnabled;
@property (nonatomic, readonly) _Bool isUnifiedCardsDestinationUrlParamsAllEnabled;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary promotedContent:(id)content;
- (id)initWithAppStoreDetailsButtonDictionary:(id)dictionary dpaProductMetadataObjects:(id)objects isFallbackBrowser:(_Bool)browser posterMetadata:(id)metadata compactCardLayoutCapability:(long long)capability chromeVanityURLLabelEnabled:(_Bool)enabled chromeVanityTitleLabelEnabled:(_Bool)enabled websiteCTACardLabel:(id)label installCardButtonRedesignEnabled:(_Bool)enabled swipeableContainerTrailingPadding:(id)padding detailsComponentTitleMaxLines:(id)lines swipeableMediaComponentShouldRoundBottomCorners:(_Bool)corners dockedMediaDestinationsDisabled:(_Bool)disabled mediaComponentTallMediaThresholdAspectRatio:(double)ratio mediaComponentShouldClipTallMediaPromotedContent:(_Bool)content mediaComponentShouldRenderOverlayDPA:(_Bool)dpa isUnifiedCardsDestinationUrlParamsEnabled:(_Bool)enabled isUnifiedCardsDestinationUrlParamsAllEnabled:(_Bool)enabled;
- (_Bool)isEqual:(id)equal;
- (id)copy;
- (id)init;

@end

#endif /* TUCExperimentSignals_h */
