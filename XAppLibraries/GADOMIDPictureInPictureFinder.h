//
#ifndef GADOMIDPictureInPictureFinder_h
#define GADOMIDPictureInPictureFinder_h
@import Foundation;

#include "GADOMIDAdSession.h"

@class NSObject, NSString, UIView;

@interface GADOMIDPictureInPictureFinder : NSObject

@property (weak) UIView *pipView;
@property (weak) GADOMIDAdSession *lastPipActiveAdSession;
@property (retain) NSString *idForAdSessionInPip;
@property (retain) NSString *idForAdSessionEnteringPip;
@property (retain) NSString *idForAdSessionExittingPip;

/* class methods */
+ (id)findPipPlayerLayerView:(id)view depth:(int)depth;
+ (id)findAVQueuePlayerFromUIView:(id)uiview;
+ (id)findAVPlayerLayerFromCALayer:(id)calayer depth:(int)depth;
+ (id)sharedInstance;

/* instance methods */
- (id)findPipView;
- (_Bool)isPipView:(id)view activeForAdView:(id)view;
- (_Bool)isPipActiveForAdSession:(id)session;
- (id)activePipAdSessionIdentifier;
- (id)pipWindowContainer;
- (id)getPipView;
- (id)getLastPipActiveAdSession;
- (_Bool)shouldPublishUpdateForSession:(id)session;
- (_Bool)enteredPip:(id)pip;
- (_Bool)exittedPip:(id)pip;
- (id)search:(id)search;

@end

#endif /* GADOMIDPictureInPictureFinder_h */
