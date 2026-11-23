//
#ifndef _TtC13GraphQLModels25TimelineShowAlertFragment_h
#define _TtC13GraphQLModels25TimelineShowAlertFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineAlertType, GraphQLModels.Enumeration GraphQLScalars.TimelineShowAlertDisplayLocation, GraphQLModels.TimelineRichTextFragment ?, GraphQLModels.TimelineShowAlertFragment.IconDisplayInfo ?, GraphQLModels.TimelineShowAlertFragment.NavigationMetadata ?, _$sSa -> GraphQLModels.UserResultsFragment ?, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineShowAlertFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Enumeration GraphQLScalars.TimelineAlertType alertType;
    nominal type descriptor for Swift.Int32 ? displayDurationMs;
    GraphQLModels.Enumeration GraphQLScalars.TimelineShowAlertDisplayLocation displayLocation;
    GraphQLModels.TimelineShowAlertFragment.IconDisplayInfo ? iconDisplayInfo;
    GraphQLModels.TimelineShowAlertFragment.NavigationMetadata ? navigationMetadata;
    GraphQLModels.TimelineRichTextFragment ? richText;
    nominal type descriptor for Swift.Int32 ? triggerDelayMs;
    Swift.Array -> GraphQLModels.UserResultsFragment ? usersResults;
}

@end

#endif /* _TtC13GraphQLModels25TimelineShowAlertFragment_h */
