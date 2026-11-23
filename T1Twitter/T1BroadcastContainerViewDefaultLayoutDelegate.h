//
#ifndef T1BroadcastContainerViewDefaultLayoutDelegate_h
#define T1BroadcastContainerViewDefaultLayoutDelegate_h
@import Foundation;

#include "T1BroadcastContainerViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1BroadcastContainerViewDefaultLayoutDelegate : NSObject <T1BroadcastContainerViewLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)initPrivate;
- (id)layoutStateForModel:(id)model displayMode:(unsigned long long)mode playbackState:(id)state bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds systemSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (_Bool)shouldLayoutPlayerViewForDisplayMode:(unsigned long long)mode;
- (double)videoAspectRatioForVideoSize:(struct CGSize { double x0; double x1; })size rotation:(double)rotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_contentFrameForPlaybackState:(id)state model:(id)model bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;

@end

#endif /* T1BroadcastContainerViewDefaultLayoutDelegate_h */
