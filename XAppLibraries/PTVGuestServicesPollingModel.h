//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestServicesPollingModel_h
#define PTVGuestServicesPollingModel_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVGuestCallerSession.h"
#include "PTVGuestServicesPollingModelDelegate-Protocol.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString, NSTimer;

@interface PTVGuestServicesPollingModel : NSObject <PTVWorkClientDelegate> {
    /* instance variables */
    PTVGuestServicesPollingModel *_weakSelf;
    id <PTVGuestServicesPollingModelDelegate> _delegate;
    PTVWorkClient *_workClient;
    NSString *_workClientContext;
    NSDictionary *_guestCallerSessions;
    NSDictionary *_deletedGuestCallerSessions;
}

@property (retain, nonatomic) NSTimer *pollingTimer;
@property (readonly, nonatomic) NSString *contextForPollingGuestServices;
@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (retain, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (retain, nonatomic) PTVGuestCallerSession *loggedInUserGuestCallerSession;
@property (nonatomic) _Bool isLoggedInUserTheOriginalBroadcasterOrAdmin;
@property (nonatomic) _Bool doesBroadcasterAcceptNewCallIns;
@property (readonly, nonatomic) _Bool isPollingGuestServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (id)initWithDelegate:(id)delegate broadcast:(id)broadcast loggedInUser:(id)user loggedInUserGuestCallerSession:(id)session isLoggedInUserTheOriginalBroadcasterOrAdmin:(_Bool)admin doesBroadcasterAcceptNewCallIns:(_Bool)ins guestCallerSessions:(id)sessions deletedGuestCallerSessions:(id)sessions;
- (_Bool)shouldExclusivelyPollGuestServicesForLoggedInUserGuestCallerSession;
- (_Bool)shouldUseRapidPollingFrequency;
- (void)beginPollingGuestServices;
- (void)executePollingGuestServices;
- (void)stopPollingGuestServices;
- (void)loggedInUserGuestCallerSessionStateDidChange;
- (void)pollingContextDidChangeWithGuestCallerSessions:(id)sessions deletedGuestCallerSessions:(id)sessions didLoggedInUserGuestCallerSessionStateChange:(_Bool)change;
- (void)pollingContextDidChange;

@end

#endif /* PTVGuestServicesPollingModel_h */
