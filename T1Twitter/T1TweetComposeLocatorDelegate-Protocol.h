//
#ifndef T1TweetComposeLocatorDelegate_Protocol_h
#define T1TweetComposeLocatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, TFSTwitterLocation, TFSTwitterPlace, UIViewController;

@protocol T1TweetComposeLocatorDelegate <NSObject>

@required

@property (retain, nonatomic) TFSTwitterLocation *assetLocation;
@property (retain, nonatomic) NSArray *suggestedPlaces;
@property (retain, nonatomic) TFSTwitterPlace *selectedPlace;
@property (readonly, nonatomic) UIViewController *viewControllerForPresentation;
@property (readonly, nonatomic) NSArray *attachments;
@property (retain, nonatomic) TFSTwitterPlace *selectedLocation;

/* required instance methods */
- (void)updateLocationView;
- (void)showAdditionalPOISuggestions:(_Bool)poisuggestions;

@optional

/* optional instance methods */
- (void)tweetComposeLocator:(id)locator didUpdateGeoSupportStatus:(_Bool)status;
- (void)tweetComposeLocatorWillPerformGeoLookup:(id)lookup;
- (void)tweetComposeLocatorDidCompleteGeoLookup:(id)lookup;

@end

#endif /* T1TweetComposeLocatorDelegate_Protocol_h */
