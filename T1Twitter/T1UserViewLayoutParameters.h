//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserViewLayoutParameters_h
#define T1UserViewLayoutParameters_h
@import Foundation;

#include "T1UserViewLayoutParameters-Protocol.h"
#include "T1UserViewOptions-Protocol.h"

@class NSObject, NSString, TFNCachedTextSizing;

@interface T1UserViewLayoutParameters : NSObject <T1UserViewLayoutParameters>

@property (readonly, nonatomic) _Bool estimated;
@property (readonly, nonatomic) id <T1UserViewOptions> options;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } initialAvatarSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } caretSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } muteBadgeSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } userBadgeSize;
@property (readonly, nonatomic) Class layoutDelegateClass;
@property (readonly, nonatomic) TFNCachedTextSizing *cachedTextSizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOptions:(id)options layoutMetrics:(id)metrics estimated:(_Bool)estimated;
- (struct CGSize { double x0; double x1; })sizeForComponent:(long long)component withSize:(struct CGSize { double x0; double x1; })size layoutMetrics:(id)metrics;

@end

#endif /* T1UserViewLayoutParameters_h */
