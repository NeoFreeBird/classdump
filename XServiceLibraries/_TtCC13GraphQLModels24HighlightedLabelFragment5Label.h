//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC13GraphQLModels24HighlightedLabelFragment5Label_h
#define _TtCC13GraphQLModels24HighlightedLabelFragment5Label_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.UserLabelDisplayType ?, GraphQLModels.Enumeration GraphQLScalars.UserLabelType ?, GraphQLModels.HighlightedLabelFragment.Label.Badge ?, GraphQLModels.HighlightedLabelFragment.Label.Icon ?, GraphQLModels.TimelineRichTextLiteFragment ?, GraphQLModels.TimelineUrlFragment ?, _$sSS, _$sSa -> GraphQLModels.HighlightedLabelFragment.Label.AuxiliaryUserLabels ?, _TtCs12_SwiftObject;

@interface GraphQLModels.HighlightedLabelFragment.Label : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> GraphQLModels.HighlightedLabelFragment.Label.AuxiliaryUserLabels ? auxiliaryUserLabels;
    GraphQLModels.HighlightedLabelFragment.Label.Badge ? badge;
    Swift.String description;
    GraphQLModels.HighlightedLabelFragment.Label.Icon ? icon;
    GraphQLModels.TimelineRichTextLiteFragment ? longDescription;
    GraphQLModels.TimelineUrlFragment ? url;
    GraphQLModels.Enumeration GraphQLScalars.UserLabelDisplayType ? userLabelDisplayType;
    GraphQLModels.Enumeration GraphQLScalars.UserLabelType ? userLabelType;
}

@end

#endif /* _TtCC13GraphQLModels24HighlightedLabelFragment5Label_h */
