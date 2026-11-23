//
#ifndef _TtC13GraphQLModels28TimelineNotificationFragment_h
#define _TtC13GraphQLModels28TimelineNotificationFragment_h
@import Foundation;

@class GraphQLModels.TimelineRichTextFragment ?, GraphQLModels.TimelineUrlFragment, GraphQLModels.Union GraphQLModels.TimelineNotificationFragment.Template ?, GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ?, GraphQLScalars.DateTime ?, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineNotificationFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    Swift.String? notificationIcon;
    GraphQLModels.Union GraphQLModels.TimelineSocialContextFragment ? notificationSocialContext;
    GraphQLModels.TimelineUrlFragment notificationUrl;
    GraphQLModels.TimelineRichTextFragment ? richMessage;
    GraphQLModels.Union GraphQLModels.TimelineNotificationFragment.Template ? template;
    GraphQLScalars.DateTime ? timestampMs;
}

@end

#endif /* _TtC13GraphQLModels28TimelineNotificationFragment_h */
