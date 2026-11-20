//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRVoiceMediaAssetViewModel_h
#define TCRVoiceMediaAssetViewModel_h
@import Foundation;

#include "TCRVoiceViewModel-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TTMAssetVoiceRecording.h"

@class NSArray, NSObject, NSString, UIColor;

@interface TCRVoiceMediaAssetViewModel : NSObject <TCRVoiceViewModel>

@property (retain, nonatomic) TTMAssetVoiceRecording *mediaAsset;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithMediaAsset:(id)asset;
- (void)imageWithCompletion:(id /* block */)completion;
- (id)player;
- (id)playerFactoryIdentifier;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToViewModel:(id)model;

@end

#endif /* TCRVoiceMediaAssetViewModel_h */
