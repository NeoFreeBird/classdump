//
#ifndef PTVMessage_h
#define PTVMessage_h
@import Foundation;

#include "PTVChatOccupant.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSObject, NSString, UIImage, UIViewController;

@interface PTVMessage : NSObject {
    /* instance variables */
    NSMutableArray *_appendedJoinMessages;
    _Bool _doesLoggedInUserFollowAuthor;
    _Bool _isReplyCommentDetermined;
    _Bool _isReplyComment;
}

@property (nonatomic) _Bool isHidden;
@property (retain, nonatomic) NSDate *fadeOutStartDate;
@property (retain, nonatomic) NSArray *fadeOutValues;
@property (retain, nonatomic) NSArray *fadeOutKeyTimes;
@property (nonatomic) double fadeOutDuration;
@property (retain, nonatomic) NSString *giftID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *signature;
@property (readonly) int version;
@property (retain, nonatomic) id rawJSON;
@property (nonatomic) double replayDeliveryTime;
@property (nonatomic) double timestampPlaybackOffset;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long ntpForLiveFrame;
@property (nonatomic) unsigned long long ntpForBroadcasterFrame;
@property (retain, nonatomic) NSDate *programDateTime;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *profileImageURL;
@property (retain, nonatomic) NSString *remoteID;
@property (retain, nonatomic) NSString *twitterID;
@property (nonatomic) long long participant_index;
@property (nonatomic) _Bool isVerified;
@property (nonatomic) _Bool isSubscriber;
@property (retain, nonatomic) NSString *broadcasterBlockedRemoteID;
@property (retain, nonatomic) NSString *broadcasterBlockedUsername;
@property (retain, nonatomic) NSString *broadcasterBlockedMessageBody;
@property (retain, nonatomic) NSString *blockedMessageUUID;
@property (retain, nonatomic) NSString *moderatedMessageUUID;
@property (retain, nonatomic) NSString *moderatedMessageBody;
@property (retain, nonatomic) NSString *viewerBlockedMessage;
@property (retain, nonatomic) NSString *viewerBlockedUserId;
@property (retain, nonatomic) NSString *viewerBlockedUsername;
@property (retain, nonatomic) NSArray *flaggedForAbuse;
@property (nonatomic) double sentenceDuration;
@property (nonatomic) double juryDuration;
@property (nonatomic) unsigned long long moderationType;
@property (nonatomic) unsigned long long moderationVerdict;
@property (nonatomic) unsigned long long moderationReportType;
@property (nonatomic) unsigned long long sentenceType;
@property (nonatomic) _Bool mutedByModerator;
@property (retain, nonatomic) PTVChatOccupant *reporter;
@property (readonly, nonatomic) NSArray *mutingModerators;
@property (retain, nonatomic) NSString *mutedUsername;
@property (retain, nonatomic) NSString *unmutedUsername;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) _Bool isTranscriptionFinal;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) long long invited_count;
@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) double heading;
@property (nonatomic) long long giftAmount;
@property (retain, nonatomic) NSString *giftStyleID;
@property (nonatomic) _Bool hasPendingRequestToCallIn;
@property (readonly, nonatomic) unsigned long long guestChatMessageAPIVersion;
@property (nonatomic) unsigned long long guestBroadcastingEvent;
@property (readonly, nonatomic) _Bool isLiveOnlyGuestBroadcastingEventMessage;
@property (readonly, nonatomic) _Bool isStreamSyncedGuestBroadcastingEventMessage;
@property (readonly, nonatomic) _Bool wasGuestBanned;
@property (retain, nonatomic) NSString *guestRemoteID;
@property (retain, nonatomic) NSString *guestUsername;
@property (retain, nonatomic) NSString *guestSessionUUID;
@property (nonatomic) unsigned long long guestParticipantIndex;
@property (nonatomic) _Bool isAudioOnlyEnabled;
@property (nonatomic) _Bool callInsEnabled;
@property (nonatomic) double guestDeviceMotionX;
@property (nonatomic) double guestDeviceMotionY;
@property (retain, nonatomic) NSDate *guestCountdownEndDate;
@property (readonly, nonatomic) NSArray *twitterParticipantIDs;
@property (readonly, nonatomic) NSString *emoji;
@property (retain, nonatomic) id rawPayload;
@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (nonatomic) _Bool isCurrentContributor;
@property (nonatomic) _Bool isPrivateMessage;
@property (retain, nonatomic) NSString *recipientUserID;
@property (readonly, nonatomic) NSString *usernameToBlock;
@property (readonly, nonatomic) NSString *userIDToBlock;
@property (retain, nonatomic) NSDate *dateReceivedByChatMan;
@property (retain, nonatomic) NSDate *dateSentToChatMan;
@property (nonatomic) _Bool showDebugFallbackToPDT;
@property (nonatomic) _Bool showDebugFallbackToNTP;
@property (nonatomic) _Bool showDebugFallbackToImmediate;
@property (retain, nonatomic) NSString *localizedChatPrompt;
@property (retain, nonatomic) UIImage *localizedChatIcon;
@property (nonatomic) _Bool moderator;
@property (nonatomic) _Bool isFadeDisabled;
@property (readonly, nonatomic) _Bool isStillVisible;
@property (readonly, nonatomic) _Bool hasBegunFadingOut;
@property (readonly, nonatomic) _Bool forcedEarlyFade;
@property (readonly, nonatomic) NSString *replyingToBody;
@property (readonly, nonatomic) NSString *replyingToDisplayName;
@property (readonly, nonatomic) NSString *replyingToUsername;
@property (readonly, nonatomic) NSString *replyingToUUID;
@property (nonatomic) _Bool displayAsBlocked;
@property (nonatomic) _Bool localSharePromptTriggeredByScreenshot;
@property (retain, nonatomic) NSString *overrideCopyForSharePrompt;
@property (retain, nonatomic) UIViewController *twitterCustomViewController;
@property (nonatomic) _Bool isNewUser;
@property (readonly, nonatomic) _Bool hasBeenRead;
@property (readonly, nonatomic) NSDate *dateMessageWasRead;

/* class methods */
+ (id)InviteFollowersLocalizedBodyForInvitedCount:(long long)count;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)encodeToDictionary;
- (id)initWithDictionary:(id)dictionary loggedInUser:(id)user;
- (id)initSentenceChatMessageWithPunishmentType:(unsigned long long)type moderationReportType:(unsigned long long)type sentencedMessageBody:(id)body broadcasterName:(id)name loggedInUser:(id)user;
- (id)initSentenceControlMessageWithType:(unsigned long long)type sentenceDuration:(double)duration loggedInUser:(id)user;
- (id)initGenericChatPromptWithLocalizedPrompt:(id)prompt localizedIcon:(id)icon loggedInUser:(id)user;
- (id)initEmptyJoinMessageWithLoggedInUser:(id)user;
- (id)initMessageWithDisplayName:(id)name remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time type:(long long)type loggedInUser:(id)user;
- (id)initChatMessageWithDisplayName:(id)name username:(id)username remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time body:(id)body keyboardLanguage:(id)language loggedInUser:(id)user replyingTo:(id)to;
- (id)initHeartMessageWithDisplayName:(id)name remoteID:(id)id recipientUserID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initUserIsTypingMessageWithDisplayName:(id)name remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initLoggedOutHeartMessageWithNTPForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time;
- (id)initGiftHeartMessageWithDisplayName:(id)name remoteID:(id)id gift:(id)gift participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initScreenshotMessageWithDisplayName:(id)name remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initInviteFollowersMessageWithUsername:(id)username remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time invited:(long long)invited loggedInUser:(id)user;
- (id)initSharedOnTwitterMessageWithUsername:(id)username remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initSharedOnXMessageWithDisplayName:(id)name username:(id)username body:(id)body remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time keyboardLanguage:(id)language loggedInUser:(id)user;
- (id)initRetweetedOnTwitterMessageWithUsername:(id)username remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initSharedOnFacebookMessageWithUsername:(id)username remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initBroadcasterBlockMessageWithUsername:(id)username remoteID:(id)id blockedUserRemoteID:(id)id blockerUsername:(id)username blockedMessage:(id)message blockedMessageUUID:(id)uuid ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initSubscriberBlockMessageWithRemoteID:(id)id blockedMessage:(id)message ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initModeratorMutedMessageWithUsername:(id)username remoteID:(id)id mutedUserRemoteID:(id)id mutedUsername:(id)username mutedMessage:(id)message mutedMessageUUID:(id)uuid ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initRequestFollowWithRemoteID:(id)id ntpForCurrentFrame:(unsigned long long)frame loggedInUser:(id)user;
- (id)initRequestShareWithRemoteID:(id)id ntpForCurrentFrame:(unsigned long long)frame loggedInUser:(id)user;
- (id)initTimestampMessageWithTimeInterval:(double)interval;
- (id)initGuestBroadcastAlertMessage:(unsigned long long)message displayName:(id)name username:(id)username remoteID:(id)id participant_index:(long long)participant_index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time loggedInUser:(id)user;
- (id)initShouldReportGuestRemoteID:(id)id guestUsername:(id)username loggedInUser:(id)user;
- (id)initAudiospaceSharingEventString:(id)string loggedInUser:(id)user participantIndex:(long long)index ntpForCurrentFrame:(unsigned long long)frame ntpForBroadcasterFrame:(unsigned long long)frame programDateTime:(id)time;
- (id)messageTypeString;
- (_Bool)isDisplayedInChatStream;
- (_Bool)isLocalMessageThatShouldImmediatelyBeDisplayedInChatStream;
- (_Bool)isBroadcasterOnlyMessageType;
- (_Bool)isAdminOnlyMessageType;
- (_Bool)isValidMessageTypeAndVersion;
- (id)atUsername;
- (id)bestReceivedDate;
- (_Bool)canBeDroppedIfHighOccupancy;
- (id)dateFromNTPOrPDTForDeterminingDeliveryDate;
- (unsigned long long)bestNTPValue;
- (unsigned long long)signerTimestamp;
- (id)encodedProgramDateTime;
- (id)programDateTimeFromEncodedString:(id)string;
- (_Bool)isReplyComment;
- (_Bool)bodyContainsAtMentionOfUsername:(id)username;
- (id)appendedJoinMessages;
- (id)mostRecentAppendedJoinMessage;
- (_Bool)hasAppendedJoinMessages;
- (void)appendJoinMessage:(id)message;
- (void)markAsRead;
- (void)markAsUnread;
- (void)addMutingModerator:(id)moderator;
- (void)cancelFadeOut;
- (void)calculateFadeOutStartDateIfNeeded;
- (void)fadeOutEarlyWithDuration:(double)duration;
- (_Bool)hasAbuseWarning;
- (unsigned long long)getModerationVerdictFromInteger:(long long)integer;
- (id)_constructFlaggedForAbuseArray:(id)array;
- (id)initLocationMessageWithLat:(double)lat lng:(double)lng heading:(double)heading ntpForCurrentFrame:(unsigned long long)frame;
- (void)addParticipantIndexIfNeeded:(id)needed;
- (_Bool)isModerator;

@end

#endif /* PTVMessage_h */
