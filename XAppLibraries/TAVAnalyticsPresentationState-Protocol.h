//
#ifndef TAVAnalyticsPresentationState_Protocol_h
#define TAVAnalyticsPresentationState_Protocol_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"
#include "TAVAnalyticsPresentationScribeParameters.h"
#include "TAVScribeContext.h"

@protocol TAVAnalyticsPresentationState <NSObject, NSCopying, NSCoding>

@required

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

@optional

@end

#endif /* TAVAnalyticsPresentationState_Protocol_h */
