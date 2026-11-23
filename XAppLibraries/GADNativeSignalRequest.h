//
#ifndef GADNativeSignalRequest_h
#define GADNativeSignalRequest_h
@import Foundation;

#include "GADAdOptionProviding-Protocol.h"
#include "GADSignalRequest.h"
#include "GADVideoOptions.h"

@class NSArray, NSSet, NSString;

@interface GADNativeSignalRequest : GADSignalRequest <GADAdOptionProviding>

@property (nonatomic) unsigned long long swipeGestureDirection;
@property (nonatomic) _Bool tapsAllowed;
@property (nonatomic) _Bool enableSwipeGestureDirectionSignalCollection;
@property (nonatomic) long long numberOfAds;
@property (nonatomic) _Bool disableImageLoading;
@property (nonatomic) _Bool shouldRequestMultipleImages;
@property (nonatomic) long long mediaAspectRatio;
@property (nonatomic) long long preferredAdChoicesPosition;
@property (nonatomic) _Bool customMuteThisAdRequested;
@property (nonatomic) _Bool enableManualImpressions;
@property (copy, nonatomic) GADVideoOptions *videoOptions;
@property (copy, nonatomic) NSArray *adSizes;
@property (copy, nonatomic) NSSet *adLoaderAdTypes;
@property (copy, nonatomic) NSArray *customNativeAdFormatIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSignalType:(id)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)enableSwipeGestureDirection:(unsigned long long)direction tapsAllowed:(_Bool)allowed;
- (id)adOptionParameters;
- (id)adType;

@end

#endif /* GADNativeSignalRequest_h */
