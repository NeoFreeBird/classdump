//
#ifndef GADOMIDAdSession_h
#define GADOMIDAdSession_h
@import Foundation;

#include "GADOMIDAdEventsPublisher-Protocol.h"
#include "GADOMIDAdSessionConfiguration.h"
#include "GADOMIDAdSessionContext.h"
#include "GADOMIDAdSessionDelegate-Protocol.h"
#include "GADOMIDAdSessionStatePublisher.h"
#include "GADOMIDBridge.h"
#include "GADOMIDEventFilter.h"
#include "GADOMIDFriendlyObstructions.h"
#include "GADOMIDMediaEventsPublisher-Protocol.h"

@class NSArray, NSObject, NSString, UIView;

@interface GADOMIDAdSession : NSObject {
    /* instance variables */
    GADOMIDAdSessionContext *_context;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *friendlyObstructions;
@property (readonly, nonatomic) GADOMIDEventFilter *eventFilter;
@property (readonly, nonatomic) id <GADOMIDAdEventsPublisher> adEventsPublisher;
@property (readonly, nonatomic) id <GADOMIDMediaEventsPublisher> mediaEventsPublisher;
@property (readonly, nonatomic) GADOMIDBridge *bridge;
@property (readonly, nonatomic) GADOMIDAdSessionStatePublisher *statePublisher;
@property (weak, nonatomic) id <GADOMIDAdSessionDelegate> delegate;
@property (nonatomic) _Bool lastPublishedViewStateWasPopulated;
@property (readonly, nonatomic) GADOMIDAdSessionConfiguration *configuration;
@property (weak, nonatomic) UIView *mainAdView;

/* instance methods */
- (id)initWithConfiguration:(id)configuration adSessionContext:(id)context error:(id *)error;
- (id)initWithID:(id)id configuration:(id)configuration adSessionContext:(id)context;
- (void)addToRegistry;
- (void)internal_setMainAdView:(id)view;
- (void)start;
- (void)onStart;
- (void)finish;
- (void)onFinish;
- (_Bool)addFriendlyObstruction:(id)obstruction purpose:(unsigned long long)purpose detailedReason:(id)reason error:(id *)error;
- (void)removeFriendlyObstruction:(id)obstruction;
- (void)removeAllFriendlyObstructions;
- (void)logErrorWithType:(unsigned long long)type message:(id)message;
- (void)setDeviceVolume;
- (double)deviceVolume;
- (id)windowContainer;

@end

#endif /* GADOMIDAdSession_h */
