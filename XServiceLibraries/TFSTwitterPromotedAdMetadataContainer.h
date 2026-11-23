//
#ifndef TFSTwitterPromotedAdMetadataContainer_h
#define TFSTwitterPromotedAdMetadataContainer_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterPromotedMetadataSponsorship.h"
#include "TFSTwitterUnifiedCard.h"

@class NSArray, NSObject, NSString, NSURL;

@interface TFSTwitterPromotedAdMetadataContainer : NSObject <NSCoding>

@property (readonly, nonatomic) _Bool removePromotedAttributionForPreroll;
@property (readonly, nonatomic) TFSTwitterPromotedMetadataSponsorship *sponsorship;
@property (readonly, nonatomic) NSArray *skAdNetworkMetadatas;
@property (readonly, nonatomic) NSString *unifiedCardOverride;
@property (readonly, nonatomic) TFSTwitterUnifiedCard *dynamicCardContent;
@property (readonly, nonatomic) _Bool renderLegacyWebsiteCard;
@property (readonly, nonatomic) _Bool renderSalesCTAWebsiteCard;
@property (readonly, nonatomic) _Bool isQuickPromote;
@property (readonly, nonatomic) NSString *promotedByScreenName;
@property (readonly, nonatomic) NSString *promotedByDisplayName;
@property (readonly, nonatomic) NSURL *overlayMediaURL;
@property (readonly, nonatomic) NSArray *destinationURLParams;
@property (readonly, nonatomic) _Bool isExternalBrowser;
@property (readonly, nonatomic) _Bool likelyToOpenLink;
@property (readonly, nonatomic) _Bool showOverlayOnFirstCard;
@property (readonly, nonatomic) _Bool allowSpineClicks;

/* instance methods */
- (id)init;
- (id)initWithRemovePromotedAttributionForPreroll:(_Bool)preroll sponsorship:(id)sponsorship skAdNetworkMetadatas:(id)metadatas unifiedCardOverride:(id)override dynamicCardContent:(id)content renderLegacyWebsiteCard:(_Bool)card renderSalesCTAWebsiteCard:(_Bool)card isQuickPromote:(_Bool)promote promotedByScreenName:(id)name promotedByDisplayName:(id)name overlayMediaURL:(id)url destinationURLParams:(id)urlparams isExternalBrowser:(_Bool)browser likelyToOpenLink:(_Bool)link showOverlayOnFirstCard:(_Bool)card allowSpineClicks:(_Bool)clicks;
- (id)initWithJSONDictionary:(id)jsondictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterPromotedAdMetadataContainer_h */
