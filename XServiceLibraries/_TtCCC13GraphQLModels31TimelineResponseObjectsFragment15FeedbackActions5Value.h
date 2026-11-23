//
#ifndef _TtCCC13GraphQLModels31TimelineResponseObjectsFragment15FeedbackActions5Value_h
#define _TtCCC13GraphQLModels31TimelineResponseObjectsFragment15FeedbackActions5Value_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineConfirmationDisplayType ?, GraphQLModels.Enumeration GraphQLScalars.TimelineFeedbackType, GraphQLModels.Enumeration GraphQLScalars.TimelineHorizonIcon ?, GraphQLModels.TimelineClientEventInfoFragment ?, GraphQLModels.Union GraphQLModels.TimelineResponseObjectsFragment.FeedbackActions.Value.RichBehavior ?, _$sSSSg, _$sSaySSGSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineResponseObjectsFragment.FeedbackActions.Value : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.String]? childKeys;
    GraphQLModels.TimelineClientEventInfoFragment ? clientEventInfo;
    Swift.String? confirmation;
    GraphQLModels.Enumeration GraphQLScalars.TimelineConfirmationDisplayType ? confirmationDisplayType;
    Swift.String? encodedFeedbackRequest;
    GraphQLModels.Enumeration GraphQLScalars.TimelineFeedbackType feedbackType;
    Swift.String? feedbackUrl;
    Swift.Bool? hasUndoAction;
    GraphQLModels.Enumeration GraphQLScalars.TimelineHorizonIcon ? icon;
    Swift.String? prompt;
    GraphQLModels.Union GraphQLModels.TimelineResponseObjectsFragment.FeedbackActions.Value.RichBehavior ? richBehavior;
    Swift.String? subprompt;
}

@end

#endif /* _TtCCC13GraphQLModels31TimelineResponseObjectsFragment15FeedbackActions5Value_h */
