//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestCallerSession_h
#define PTVGuestCallerSession_h
@import Foundation;

#include "PTVGuestCallerSessionDelegate-Protocol.h"
#include "PTVMergeParticipantUser.h"
#include "PTVWebRTCMediaStream.h"

@class NSDate, NSNumber, NSObject, NSString;

@interface PTVGuestCallerSession : NSObject {
    /* instance variables */
    unsigned long long _kIsModifyingStateRemotelyCounter;
}

@property (weak, nonatomic) id <PTVGuestCallerSessionDelegate> delegate;
@property (retain, nonatomic) PTVMergeParticipantUser *guestCaller;
@property (nonatomic) long long participantIndex;
@property (retain, nonatomic) PTVWebRTCMediaStream *mediaStream;
@property (nonatomic) _Bool isAudioOnly;
@property (nonatomic) _Bool isMuted;
@property (nonatomic) _Bool wasMutedByGuest;
@property (nonatomic) unsigned long long state;
@property (nonatomic) _Bool isModifyingStateRemotely;
@property (nonatomic) _Bool isDisabled;
@property (retain, nonatomic) NSDate *countdownStartDate;
@property (retain, nonatomic) NSDate *countdownEndDate;
@property (copy, nonatomic) NSString *requestMessageID;
@property (copy, nonatomic) NSString *sessionUUID;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (retain, nonatomic) NSNumber *janusSessionID;
@property (retain, nonatomic) NSNumber *janusHandlerID;
@property (retain, nonatomic) NSString *janusRoomID;
@property (retain, nonatomic) NSNumber *guestParticipantId;
@property (retain, nonatomic) NSNumber *janusPublisherID;

/* instance methods */
- (id)init;
- (id)initWithGuestServicesResponseDictionary:(id)dictionary loggedInUser:(id)user;
- (void)stateChangedToCountdownWithEndDate:(id)date;
- (void)reconcileSessionFromGuestServicesResponseDictionaryIfNeeded:(id)needed shouldUpdateStateIfNeeded:(_Bool)needed;

@end

#endif /* PTVGuestCallerSession_h */
