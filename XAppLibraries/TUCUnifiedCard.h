//
#ifndef TUCUnifiedCard_h
#define TUCUnifiedCard_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TUCAppStoreDetailsComponentModel.h"
#include "TUCButtonGroupComponentModel.h"
#include "TUCComponentContainer-Protocol.h"
#include "TUCDestinationModel.h"
#include "TUCDetailsComponentModel.h"
#include "TUCMediaComponentModel.h"
#include "TUCSwipeableMediaComponentModel.h"

@class NSArray, NSDictionary, NSObject, NSString, _TtC14TFSTwitterCore25TFSTwitterPromotedContent;

@interface TUCUnifiedCard : NSObject <NSCopying>

@property (nonatomic, readonly) TUCAppStoreDetailsComponentModel *appStoreDetailComponentModel;
@property (nonatomic, readonly) TUCMediaComponentModel *mediaComponentModel;
@property (nonatomic, readonly) TUCButtonGroupComponentModel *buttonGroupComponentModel;
@property (nonatomic, readonly) TUCDetailsComponentModel *detailsComponentModel;
@property (nonatomic, readonly) TUCSwipeableMediaComponentModel *swipeableMediaComponentModel;
@property (nonatomic, readonly) _Bool meetsExperiment11556CriteriaForVideoAppCard;
@property (nonatomic, readonly) _Bool isAppCard;
@property (nonatomic, readonly) _Bool isAppPlayableCard;
@property (nonatomic, readonly) NSString *firstAppIdentifierForCurrentPlatform;
@property (nonatomic, readonly) _Bool isWebCard;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *originalType;
@property (readonly, nonatomic) _Bool isCreatedFromOverride;
@property (readonly, nonatomic) id <TUCComponentContainer> container;
@property (readonly, nonatomic) NSArray *allComponents;
@property (readonly, nonatomic) _Bool isFullBleed;
@property (readonly, nonatomic) _Bool isProductExplorer;
@property (readonly, nonatomic) _Bool hasCarousel;
@property (readonly, nonatomic) _Bool hasMultiDestinationCarousel;
@property (readonly, copy, nonatomic) id /* block */ scribeCustomization;
@property (readonly, nonatomic) TFSTwitterCore.TFSTwitterPromotedContent *promotedContent;
@property (readonly, nonatomic) NSArray *allUsers;
@property (readonly, nonatomic) TUCDestinationModel *firstDestination;
@property (readonly, nonatomic) NSDictionary *reportingMetadata;

/* class methods */
+ (id)summaryLargeImageWithURLString:(id)urlstring vanityURLString:(id)urlstring vanityTitle:(id)title title:(id)title mediaEntity:(id)entity scribeItem:(id)item;
+ (id)_tfn_mediaModelsFromJSONDict:(id)jsondict;

/* instance methods */
- (_Bool)shouldHideStatusBodyTextFromFeatures:(id)features;
- (_Bool)shouldHideQuoteStatusFromFeatures:(id)features;
- (id)initWithUnifiedCard:(id)card promotedContent:(id)content scribeItem:(id)item;
- (id)initWithContainer:(id)container promotedContent:(id)content scribeCustomization:(id /* block */)customization originalType:(id)type type:(id)type reportingMetadata:(id)metadata createdFromOverride:(_Bool)override;
- (id)initWithJSONDictionary:(id)jsondictionary unifiedID:(id)id promotedContent:(id)content scribeItem:(id)item createdFromOverride:(_Bool)override;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)withComponentsTransform:(id /* block */)transform;
- (id)withRemovedComponentsOfType:(unsigned long long)type;
- (id)withContainer:(id)container type:(id)type;
- (id)withPromotedContent:(id)content;
- (id)_tfn_componentModelsFromJSONDict:(id)jsondict destinationsDict:(id)dict mediaEntitiesDict:(id)dict appStoreDataDict:(id)dict promotedContent:(id)content usersDict:(id)dict unifiedID:(id)id displayOptions:(id)options experimentSignals:(id)signals scribeItem:(id)item;
- (id)_t1_unifiedCardConvertingComponentsOfType:(unsigned long long)type using:(id /* block */)_using;
- (id)_t1_unifiedCardConvertingComponentsUsing:(id /* block */)_using;
- (id)_tuc_unifiedCardWithNewContainer:(id)container type:(id)type;
- (id)firstDestinationOfMultiDestinationCarouselAtIndex:(unsigned long long)index;
- (id)mediaOfSingleDestinationCarouselAtIndex:(unsigned long long)index;

@end

#endif /* TUCUnifiedCard_h */
