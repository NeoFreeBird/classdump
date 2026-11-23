//
#ifndef T1ProfileHeaderActionHosting_Protocol_h
#define T1ProfileHeaderActionHosting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ProfileHeaderActionHosting <NSObject>

@required

@property (nonatomic, readonly) _Bool canNavigateBackFromProfile;
@property (nonatomic, readonly) _Bool shouldShowProfileCloseButton;

/* required instance methods */
- (void)t1_shareProfileFromSourceView:(id)view;
- (void)t1_shareProfileFromSourceView:(id)view;
- (void)showMentionComposerFromSourceView:(id)view;
- (void)showMentionComposerFromSourceView:(id)view;
- (void)showEditProfile:(id)profile;
- (void)showSetupProfile:(id)profile;
- (void)showProfileSearch:(id)search;
- (void)showGrokProfileSummary:(id)summary;
- (void)navigateBackFromProfile:(id)profile;
- (void)navigateBackFromProfile:(id)profile;
- (void)closeProfile:(id)profile;
- (id)profileMoreActionsBaseActionItemsWithSender:(id)sender;
- (id)profileMoreActionsBaseActionItemsWithSender:(id)sender;
- (id)profileBackNavigationHistoryTitles;
- (void)popProfileNavigationHistoryToIndex:(unsigned long long)index;
- (void)popProfileNavigationHistoryToIndex:(unsigned long long)index;

@optional

@end

#endif /* T1ProfileHeaderActionHosting_Protocol_h */
