//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerViewPresentationState_h
#define TAVPlayerViewPresentationState_h
@import Foundation;

#include "TAVAnalyticsPresentationScribeParameters.h"
#include "TAVAnalyticsPresentationState-Protocol.h"
#include "TAVScribeContext.h"

@class NSObject, NSString;

@interface TAVPlayerViewPresentationState : NSObject <TAVAnalyticsPresentationState>

@property (readonly, nonatomic) _Bool isFullscreen;
@property (readonly, nonatomic) _Bool isPreview;
@property (readonly, nonatomic) _Bool shouldFirePlayFromTapBillableEvent;
@property (readonly, copy, nonatomic) TAVScribeContext *scribeContext;
@property (readonly, copy, nonatomic) TAVAnalyticsPresentationScribeParameters *scribeParameters;
@property (readonly, nonatomic) double visibilityRatio;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } playerViewSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } windowSize;
@property (readonly, nonatomic) double screenScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithIsFullscreen:(_Bool)fullscreen isPreview:(_Bool)preview scribeContext:(id)context shouldFirePlayFromTapBillableEvent:(_Bool)event visibilityRatio:(double)ratio playerViewSize:(struct CGSize { double x0; double x1; })size videoSize:(struct CGSize { double x0; double x1; })size windowSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale scribeParameters:(id)parameters;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVPlayerViewPresentationState_h */
