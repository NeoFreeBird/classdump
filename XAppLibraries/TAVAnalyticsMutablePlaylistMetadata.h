//
#ifndef TAVAnalyticsMutablePlaylistMetadata_h
#define TAVAnalyticsMutablePlaylistMetadata_h
@import Foundation;

#include "TAVAnalyticsPlaylistMetadata.h"
#include "TAVAnalyticsPromotedMetadata.h"
#include "TAVAnalyticsVideoAdServerMetadata.h"
#include "TVDIAnalyticsOwnerIdentifier.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface TAVAnalyticsMutablePlaylistMetadata : TAVAnalyticsPlaylistMetadata {
    /* instance variables */
    NSMutableDictionary *_mutableVideos;
}

@property (copy, nonatomic) NSString *contentID;
@property (retain, nonatomic) TVDIAnalyticsOwnerIdentifier *ownerID;
@property (copy, nonatomic) NSMutableDictionary *videos;
@property (copy, nonatomic) TAVAnalyticsVideoAdServerMetadata *adServerMetadata;
@property (copy, nonatomic) NSDictionary *baseScribeItem;
@property (retain, nonatomic) TAVAnalyticsPromotedMetadata *promotedContent;

/* instance methods */
- (id)initWithContentID:(id)id ownerID:(id)id videos:(id)videos adServerMetadata:(id)metadata baseScribeItem:(id)item promotedContent:(id)content contentMediaIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsMutablePlaylistMetadata_h */
