//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImmersiveFullscreenHandler_h
#define T1ImmersiveFullscreenHandler_h
@import Foundation;

#include "T1ImmersiveMediaOriginCoordinating-Protocol.h"
#include "T1ImmersivePlaylist.h"

@class NSArray, NSNumber, NSObject, NSString, TFNTwitterAccount, TFNTwitterStatus, TFSTwitterBroadcast, TFSTwitterEntityTimestamp, TFSTwitterScribeContext, UIView;

@interface T1ImmersiveFullscreenHandler : NSObject {
    /* instance variables */
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
    long long _viewSource;
    TFNTwitterStatus *_initialStatus;
    NSString *_initialStatusID;
    NSString *_associationStatusID;
    TFSTwitterBroadcast *_initialBroadcast;
    NSString *_initialBroadcastID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _mediaAnimationInitialFrame;
    double _mediaAnimationOriginCornerRadius;
    UIView *_mediaOriginView;
    _Bool _desiresFullscreen;
    NSNumber *_aspectRatio;
    NSArray *_standaloneMediaItems;
    long long _morphMode;
    T1ImmersivePlaylist *_playlist;
}

@property (nonatomic) _Bool initiallyMuted;
@property (nonatomic) _Bool startsPaused;
@property (retain, nonatomic) TFSTwitterEntityTimestamp *startingAtTimestamp;
@property (nonatomic) long long initialMediaIndex;
@property (retain, nonatomic) id <T1ImmersiveMediaOriginCoordinating> mediaOriginCoordinator;
@property (nonatomic) _Bool resumesHeldImmersiveSession;
@property (copy, nonatomic) NSString *rawSearchQuery;
@property (nonatomic) _Bool defersPresentTransitionSettle;

/* class methods */
+ (id)mediaOriginCoordinatorWithViewForIndex:(id /* block */)index frameInWindowForIndex:(id /* block */)index contentFrameInWindowForIndex:(id /* block */)index prepareForIndex:(id /* block */)index hideForIndex:(id /* block */)index restoreHiddenViews:(id /* block */)views dismissDidCompleteForIndex:(id /* block */)index;

/* instance methods */
- (id)initWithAccount:(id)account scribeContext:(id)context viewSource:(long long)source initialStatus:(id)status initialStatusID:(id)id associationStatusID:(id)id initialBroadcast:(id)broadcast initialBroadcastID:(id)id mediaAnimationInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame mediaAnimationOriginCornerRadius:(double)radius mediaOriginView:(id)view mediaOriginCoordinator:(id)coordinator startingAtTimestamp:(id)timestamp desiresFullscreen:(_Bool)fullscreen aspectRatio:(id)ratio initialMediaIndex:(long long)index;
- (id)initFromStatusView:(id)view mediaAnimationOriginCornerRadius:(double)radius status:(id)status account:(id)account scribeContext:(id)context mediaOriginCoordinator:(id)coordinator initialMediaIndex:(long long)index;
- (id)initFromStatusViewOnProfilePage:(id)page mediaAnimationOriginCornerRadius:(double)radius status:(id)status account:(id)account scribeContext:(id)context mediaOriginCoordinator:(id)coordinator initialMediaIndex:(long long)index;
- (id)initWithAssociationStatusID:(id)id account:(id)account scribeContext:(id)context;
- (id)initWithInitialStatusID:(id)id viewSource:(long long)source account:(id)account scribeContext:(id)context startingAtTimestamp:(id)timestamp;
- (id)initWithInitialBroadcast:(id)broadcast status:(id)status mediaOriginView:(id)view mediaAnimationInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame mediaAnimationOriginCornerRadius:(double)radius account:(id)account scribeContext:(id)context;
- (id)initFullscreenWithStatusID:(id)id aspectRatio:(id)ratio account:(id)account scribeContext:(id)context;
- (id)initWithStandaloneMediaItems:(id)items account:(id)account scribeContext:(id)context mediaOriginCoordinator:(id)coordinator previewImage:(id)image mediaOriginCornerRadius:(double)radius morphMode:(long long)mode initialMediaIndex:(long long)index;
- (id)initWithPlaylist:(id)playlist account:(id)account scribeContext:(id)context mediaOriginCoordinator:(id)coordinator;
- (void)presentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)makeImmersiveViewController;

@end

#endif /* T1ImmersiveFullscreenHandler_h */
