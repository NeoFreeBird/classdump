//
#ifndef _TtCC13GraphQLModels32TimelinePromotedMetadataFragment19AdMetadataContainer_h
#define _TtCC13GraphQLModels32TimelinePromotedMetadataFragment19AdMetadataContainer_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineSponsorshipType ?, GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.BoostCta ?, GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.OverlayMediaResults ?, GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.PromotedByResults ?, _$sSSSg, _$sSa -> GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.DestinationUrlParams ?, _$sSa -> GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.SkAdNetworkDataList ?, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool? allowSpineClicks;
    GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.BoostCta ? boostCta;
    Swift.Array -> GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.DestinationUrlParams ? destinationUrlParams;
    Swift.Bool? isExternalBrowser;
    Swift.Bool? isQuickPromote;
    Swift.Bool? likelyToOpenLink;
    GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.OverlayMediaResults ? overlayMediaResults;
    GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.PromotedByResults ? promotedByResults;
    Swift.Bool? removePromotedAttributionForPreroll;
    Swift.Bool? renderLegacyWebsiteCard;
    Swift.Bool? renderSalesCtaWebsiteCard;
    Swift.Bool? showOverlayOnFirstCard;
    Swift.Array -> GraphQLModels.TimelinePromotedMetadataFragment.AdMetadataContainer.SkAdNetworkDataList ? skAdNetworkDataList;
    Swift.String? sponsorshipCandidate;
    Swift.String? sponsorshipOrganization;
    Swift.String? sponsorshipOrganizationWebsite;
    GraphQLModels.Enumeration GraphQLScalars.TimelineSponsorshipType ? sponsorshipType;
    Swift.String? unifiedCardOverride;
}

@end

#endif /* _TtCC13GraphQLModels32TimelinePromotedMetadataFragment19AdMetadataContainer_h */
