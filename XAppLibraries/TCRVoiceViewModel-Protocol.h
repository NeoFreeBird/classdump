//
#ifndef TCRVoiceViewModel_Protocol_h
#define TCRVoiceViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSArray, NSString, UIColor;

@protocol TCRVoiceViewModel <NSObject>

@required

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> representedUser;
@property (readonly, nonatomic) NSString *durationString;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) NSString *positionString;
@property (readonly, nonatomic) NSArray *audiowaveValues;
@property (readonly, nonatomic) NSString *bodyText;
@property (readonly, nonatomic) unsigned long long brightnessOffset;
@property (readonly, nonatomic) _Bool captionsEnabled;
@property (readonly, nonatomic) _Bool transcriptionsEnabled;
@property (readonly, nonatomic) NSString *deadMediaAvailabilityReason;
@property (readonly, nonatomic) NSString *deadMediaCopyrightHolderName;
@property (readonly, nonatomic) _Bool isMediaOwner;

/* required instance methods */
- (void)imageWithCompletion:(id /* block */)completion;
- (id)player;
- (id)playerFactoryIdentifier;

@optional

@end

#endif /* TCRVoiceViewModel_Protocol_h */
