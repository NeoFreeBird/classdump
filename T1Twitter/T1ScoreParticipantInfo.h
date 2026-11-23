//
#ifndef T1ScoreParticipantInfo_h
#define T1ScoreParticipantInfo_h
@import Foundation;

@class NSObject, NSString;

@interface T1ScoreParticipantInfo : NSObject

@property (readonly, nonatomic) NSString *mediaURL;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *scoreNote;
@property (readonly, nonatomic) _Bool winner;
@property (readonly, nonatomic) _Bool strongScoreNote;

/* instance methods */
- (id)initWithMediaURL:(id)url name:(id)name scoreNote:(id)note winner:(_Bool)winner strongScoreNote:(_Bool)note;
- (_Bool)isWinner;
- (_Bool)isScoreNoteStrong;

@end

#endif /* T1ScoreParticipantInfo_h */
