//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVUserFollowingListWorkClient_h
#define PTVUserFollowingListWorkClient_h
@import Foundation;

#include "PTVLoggedInUserProtocol-Protocol.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class NSObject, NSString;
@protocol PTVUserFollowingListWorkClientDelegate;

@interface PTVUserFollowingListWorkClient : NSObject <PTVWorkClientDelegate> {
    /* instance variables */
    NSString *_userID;
    NSObject<PTVLoggedInUserProtocol> *_loggedInUser;
    _Bool _invalidated;
    PTVUserFollowingListWorkClient *_weakSelf;
}

@property (retain, nonatomic) PTVWorkClient *workClient;
@property (weak, nonatomic) id <PTVUserFollowingListWorkClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;
- (void)getFollowingForUserID:(id)id loggedInUser:(id)user;
- (void)invalidate;

@end

#endif /* PTVUserFollowingListWorkClient_h */
