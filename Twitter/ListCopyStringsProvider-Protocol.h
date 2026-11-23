//
#ifndef ListCopyStringsProvider_Protocol_h
#define ListCopyStringsProvider_Protocol_h
@import Foundation;

@protocol ListCopyStringsProvider

@required

/* required instance methods */
- (id)listsLabel;
- (id)listsButtonLabel;
- (id)directMessageQuickShareSheetListSentNotificationFormat;
- (id)reportList;
- (id)blockActionListSubtitleFormat;
- (id)unblockActionListSubtitle;
- (id)muteListSubtitle;
- (id)muteListAmbientMessage;
- (id)muteListErrorMessage;
- (id)muteListTimelineConfirmation;
- (id)muteListTimelineTitle;
- (id)unmuteListSubtitle;
- (id)unmuteListAmbientMessage;
- (id)unmuteListErrorMessage;
- (id)unmuteListTimelineConfirmation;
- (id)unmuteListTimelineTitle;
- (id)listSubscribeActionLabel;
- (id)listUnsubscribeActionLabel;
- (id)listSubscribersLabel;
- (id)listSubscriberCountLabel;
- (id)listSubscribersCountFormat;
- (id)createTitleViewTitle;
- (id)listEditTitle;
- (id)listCreatePrivateSubtitle;
- (id)listNameLengthErrorMessage;
- (id)listDescriptionLengthErrorMessage;
- (id)listDeleteErrorMessage;
- (id)listDeleteTitle;
- (id)listDeleteConfirmationMessage;
- (id)removeBannerLabel;
- (id)listsOwnedSubscribedToEmptyStateDifferentUserFormat;
- (id)listsOwnedSubscribedToEmptyStateText;
- (id)listTweetsEmptyStateHeader;
- (id)listTweetsEmptyStateMessage;
- (id)listMembersEmptyStateHeader;
- (id)listMembersEmptyStateMessage;
- (id)listsSuggestedEmptyStateHeader;
- (id)listsSuggestedEmptyStateMessage;
- (id)listSubscribersEmptyStateHeader;
- (id)listSubscribersEmptyStateMessage;
- (id)listUserRecommendationsEmptyStateTitle;
- (id)listUserRecommendationsEmptyStateSubtitle;
- (id)listUserRecommendationsTitleViewTitle;
- (id)listUserRecommendationsSummaryViewEmptyLabel;
- (id)listUserRecommendationsSummaryViewMultipleUsersLabel;
- (id)listUserRecommendationsSummaryViewOneUserLabel;
- (id)listUserRecommendationsSummaryViewTwoUsersLabel;
- (id)addToListsLabel;
- (id)listsTheyAreMemberOfTimelineTitle;
- (id)listsYouAreMemberOfTimelineTitle;
- (id)listsMemberOfEmptyStateDifferentUserFormat;
- (id)listsMemberOfEmptyStateDifferentUserSubtext;
- (id)listsMemberOfEmptyStateSubtext;
- (id)listsMemberOfEmptyStateText;
- (id)listsOwnedSubscribedToCreateListButtonLabel;
- (id)listCardsTitleLabel;
- (id)listCreateAccessibilityLabel;
- (id)listPinAccessibilityHint;
- (id)listUnpinAccessibilityHint;
- (id)listsTabAccessibilityLabel;
- (id)listsNotLoadingErrorLabel;
- (id)listDiscoveryPageTitle;
- (id)listSearchManagementPagePlaceholderText;
- (id)listTypeaheadEmptyStateMessage;
- (id)listSearchPlaceholderText;
- (id)listTypeaheadEmptyQueryMessage;
- (id)listTypeaheadEmptyPromptMessage;
- (id)managementModuleEmptyStrings;

@optional

@end

#endif /* ListCopyStringsProvider_Protocol_h */
