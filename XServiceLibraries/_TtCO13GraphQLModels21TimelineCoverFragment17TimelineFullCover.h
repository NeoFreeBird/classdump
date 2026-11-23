//
#ifndef _TtCO13GraphQLModels21TimelineCoverFragment17TimelineFullCover_h
#define _TtCO13GraphQLModels21TimelineCoverFragment17TimelineFullCover_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineFullCoverDisplayType, GraphQLModels.TimelineCoverCtaFragment, GraphQLModels.TimelineCoverCtaFragment ?, GraphQLModels.TimelineDismissInfoFragment ?, GraphQLModels.TimelineImageVariantFragment ?, GraphQLModels.TimelineRichTextFragment, GraphQLModels.TimelineRichTextFragment ?, _$sSa -> GraphQLModels.TimelineCallbackFragment ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineCoverFragment.TimelineFullCover : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.TimelineRichTextFragment ? details;
    GraphQLModels.TimelineDismissInfoFragment ? dismissInfo;
    GraphQLModels.Enumeration GraphQLScalars.TimelineFullCoverDisplayType fullCoverDisplayType;
    GraphQLModels.TimelineImageVariantFragment ? image;
    Swift.Array -> GraphQLModels.TimelineCallbackFragment ? impressionCallbacks;
    GraphQLModels.TimelineCoverCtaFragment primaryCoverCta;
    GraphQLModels.TimelineRichTextFragment primaryText;
    GraphQLModels.TimelineCoverCtaFragment ? secondaryCoverCta;
    GraphQLModels.TimelineRichTextFragment ? secondaryText;
}

@end

#endif /* _TtCO13GraphQLModels21TimelineCoverFragment17TimelineFullCover_h */
