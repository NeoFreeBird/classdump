//
#ifndef Subsystem_ios_iosArm64_mainShareSheetSuggestionRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainShareSheetSuggestionRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainShareSheetSuggestionRepo

@required

/* required instance methods */
- (id)coldInboxSuggestionResult:(id)result;
- (id)coldInboxSuggestionResult:(id)result;
- (id)coldInboxSuggestionReasonResult:(id)result;
- (id)coldInboxSuggestionReasonResult:(id)result;
- (id)observeResults;
- (id)observeSuggestions;
- (void)onSuggestionClickedPosition:(int)position queryLength:(int)length;
- (void)onSuggestionClickedPosition:(int)position queryLength:(int)length;
- (void)onTypeaheadSessionStarted;
- (void)updateExternalCandidatesCandidates:(id)candidates;
- (void)updateExternalCandidatesCandidates:(id)candidates;
- (void)updateQueryQuery_:(id)query_;
- (void)updateQueryQuery_:(id)query_;
- (void)updateSelectedSelected:(id)selected selectedFromSearch:(id)search;
- (void)updateSelectedSelected:(id)selected selectedFromSearch:(id)search;
- (void)updateSelectedSuggestionsSelected:(id)selected selectedFromSearch:(id)search;
- (void)updateSelectedSuggestionsSelected:(id)selected selectedFromSearch:(id)search;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainShareSheetSuggestionRepo_Protocol_h */
