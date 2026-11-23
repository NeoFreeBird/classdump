//
#ifndef PTVUserModal_Protocol_h
#define PTVUserModal_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVMergeParticipantUser.h"
#include "PTVModalPresentationManagerDelegate-Protocol.h"
#include "PTVUserModalFollowshipChangeDelegate-Protocol.h"

@class NSString;

@protocol PTVUserModal <NSObject>

@required

@property (retain, nonatomic) PTVMergeParticipantUser *user;
@property (retain, nonatomic) NSString *broadcastID;
@property (copy, nonatomic) NSString *hostViewName;
@property (weak, nonatomic) id <PTVModalPresentationManagerDelegate> modalPresentationDelegate;
@property (weak, nonatomic) id <PTVUserModalFollowshipChangeDelegate> followshipChangeDelegate;
@property (nonatomic) _Bool isPresentingWhileBroadcasting;
@property (retain, nonatomic) NSString *broadcastCellClickThroughSource;
@property (retain, nonatomic) NSString *followSource;
@property (nonatomic) _Bool presentedFromSuggestedFeed;
@property (nonatomic) _Bool initiallyShowFollowers;

@optional

@end

#endif /* PTVUserModal_Protocol_h */
