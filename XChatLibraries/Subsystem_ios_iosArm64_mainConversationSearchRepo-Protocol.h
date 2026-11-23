//
#ifndef Subsystem_ios_iosArm64_mainConversationSearchRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainConversationSearchRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainConversationSearchRepo

@required

/* required instance methods */
- (id)observeConversationResultsIncludeTypeahead:(_Bool)typeahead;
- (id)observeConversationResultsIncludeTypeahead:(_Bool)typeahead;
- (void)onSuggestionClickedPosition:(int)position queryLength:(int)length surface:(id)surface;
- (void)onSuggestionClickedPosition:(int)position queryLength:(int)length surface:(id)surface;
- (void)onTypeaheadSessionStartedSurface:(id)surface;
- (void)onTypeaheadSessionStartedSurface:(id)surface;
- (void)updateQueryQuery_:(id)query_;
- (void)updateQueryQuery_:(id)query_;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainConversationSearchRepo_Protocol_h */
