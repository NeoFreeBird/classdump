//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDefaultPointerInteractionDelegate_h
#define TFNDefaultPointerInteractionDelegate_h
@import Foundation;

#include "UIPointerInteractionDelegate-Protocol.h"

@class NSObject, NSString;

@interface TFNDefaultPointerInteractionDelegate : NSObject <UIPointerInteractionDelegate>

@property (readonly, copy, nonatomic) id /* block */ styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyleProvider:(id /* block */)provider;
- (id)pointerInteraction:(id)interaction styleForRegion:(id)region;

@end

#endif /* TFNDefaultPointerInteractionDelegate_h */
