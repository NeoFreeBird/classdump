//
#ifndef _TtC13GraphQLModels22BirdwatchPivotFragment_h
#define _TtC13GraphQLModels22BirdwatchPivotFragment_h
@import Foundation;

@class GraphQLModels.BirdwatchNoteFragment ?, GraphQLModels.BirdwatchPivotCallToActionFragment ?, GraphQLModels.Enumeration GraphQLScalars.BirdwatchPivotIconType ?, GraphQLModels.Enumeration GraphQLScalars.BirdwatchPivotVisualStyle ?, GraphQLModels.TimelineRichTextFragment ?, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.BirdwatchPivotFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.BirdwatchPivotCallToActionFragment ? callToAction;
    Swift.String destinationUrl;
    GraphQLModels.TimelineRichTextFragment ? footer;
    GraphQLModels.Enumeration GraphQLScalars.BirdwatchPivotIconType ? footerIconType;
    GraphQLModels.Enumeration GraphQLScalars.BirdwatchPivotIconType ? iconType;
    GraphQLModels.BirdwatchNoteFragment ? note;
    Swift.String? shorttitle;
    GraphQLModels.TimelineRichTextFragment ? subtitle;
    Swift.String title;
    Swift.String? titleDetail;
    GraphQLModels.Enumeration GraphQLScalars.BirdwatchPivotVisualStyle ? visualStyle;
}

@end

#endif /* _TtC13GraphQLModels22BirdwatchPivotFragment_h */
