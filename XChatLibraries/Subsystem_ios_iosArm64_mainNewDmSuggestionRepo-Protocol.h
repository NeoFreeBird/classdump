//
#ifndef Subsystem_ios_iosArm64_mainNewDmSuggestionRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainNewDmSuggestionRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainNewDmSuggestionRepo

@required

/* required instance methods */
- (id)observeFetchErrors;
- (id)observeResults;
- (id)observeResultsWithSettledQuery;
- (void)onSuggestionClickedPosition:(int)position queryLength:(int)length surface:(id)surface;
- (void)onSuggestionClickedPosition:(int)position queryLength:(int)length surface:(id)surface;
- (void)onTypeaheadSessionStartedSurface:(id)surface;
- (void)onTypeaheadSessionStartedSurface:(id)surface;
- (void)updateCurrentParticipantsParticipants:(id)participants;
- (void)updateCurrentParticipantsParticipants:(id)participants;
- (void)updateModeMode:(id)mode convId:(id)id;
- (void)updateModeMode:(id)mode convId:(id)id;
- (void)updateQueryQuery_:(id)query_;
- (void)updateQueryQuery_:(id)query_;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainNewDmSuggestionRepo_Protocol_h */
