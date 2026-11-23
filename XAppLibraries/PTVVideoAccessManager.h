//
#ifndef PTVVideoAccessManager_h
#define PTVVideoAccessManager_h
@import Foundation;

#include "PTVAccessVideo.h"
#include "PTVVideoAccessManagerDelegate-Protocol.h"

@class NSObject, NSTimer;

@interface PTVVideoAccessManager : NSObject {
    /* instance variables */
    PTVVideoAccessManager *_weakSelf;
}

@property (retain, nonatomic) NSTimer *accessVideoReloadTimer;
@property (weak, nonatomic) id <PTVVideoAccessManagerDelegate> delegate;
@property (nonatomic) _Bool shouldFetchHighlightURLs;
@property (nonatomic) _Bool canRetryOnFailure;
@property (readonly, nonatomic) PTVAccessVideo *videoAccess;

/* instance methods */
- (void)dealloc;
- (id)initWithDelegate:(id)delegate;
- (void)logEvent:(id)event;
- (void)fetchVideoAccessWithCachePolicy:(long long)policy;
- (void)didFetchVideoAccess:(id)access;
- (void)didFailToFetchVideoAccessWithError:(id)error;
- (void)reloadVideoAccess;
- (void)willBeginReloadingVideoAccess;
- (void)didBeginReloadingVideoAccess;
- (void)reloadVideoAccessAfterDelayCanRetryOnFailure:(_Bool)failure;
- (void)cancelPendingReload;
- (void)reset;

@end

#endif /* PTVVideoAccessManager_h */
