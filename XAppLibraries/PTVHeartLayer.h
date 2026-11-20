//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVHeartLayer_h
#define PTVHeartLayer_h
@import Foundation;

#include "PTVLoadingHeartTheme.h"
#include "PTVWorkClient.h"
#include "PTVWorkClientDelegate-Protocol.h"

@class CALayer, NSString;

@interface PTVHeartLayer : CALayer <PTVWorkClientDelegate> {
    /* instance variables */
    PTVWorkClient *_workClient;
    long long _participantIndex;
    CALayer *_borderLayer;
}

@property (retain, nonatomic) PTVLoadingHeartTheme *heartTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithTraitCollection:(id)collection;
- (id)initWithHeartTheme:(id)theme;
- (void)setParticipantIndex:(long long)index;
- (void)renderImage;
- (void)layoutSublayers;
- (void)load:(long long)load;
- (void)immediate:(id)immediate context:(id)context loadingFromNetwork:(_Bool)network;
- (void)eventual:(id)eventual context:(id)context;
- (void)error:(id)error context:(id)context;
- (id)context;

@end

#endif /* PTVHeartLayer_h */
