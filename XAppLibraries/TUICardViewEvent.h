//
#ifndef TUICardViewEvent_h
#define TUICardViewEvent_h
@import Foundation;

#include "TAVPlaybackState.h"
#include "TFNTwitterAccount.h"
#include "TFNTwitterCardContext.h"
#include "TFNTwitterUser.h"

@class NSArray, NSDictionary, NSNumber, NSObject, NSString, UIView;

@interface TUICardViewEvent : NSObject

@property (readonly, weak, nonatomic) UIView *view;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *imageViews;
@property (retain, nonatomic) NSArray *imageSpecs;
@property (nonatomic) long long imageSpecIndex;
@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSString *composeText;
@property (copy, nonatomic) id /* block */ composeCompletionBlock;
@property (copy, nonatomic) NSString *capiURI;
@property (copy, nonatomic) NSDictionary *capiData;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) UIView *playerContainerView;
@property (copy, nonatomic) NSString *zipcode;
@property (nonatomic) _Bool shouldOpenInExternalBrowser;
@property (nonatomic) unsigned long long buttonIndex;
@property (retain, nonatomic) TFNTwitterCardContext *collectionCardContext;
@property (nonatomic) _Bool shouldShowFullScreen;
@property (retain, nonatomic) TFNTwitterUser *user;
@property (retain, nonatomic) TAVPlaybackState *playbackState;
@property (copy, nonatomic) NSString *appTapScribeActionDebuggingSuffix;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view userID:(id)id eventType:(id)type;
- (id)initWithView:(id)view eventType:(id)type;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TUICardViewEvent_h */
