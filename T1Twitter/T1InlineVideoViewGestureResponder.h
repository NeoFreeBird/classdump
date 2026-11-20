//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1InlineVideoViewGestureResponder_h
#define T1InlineVideoViewGestureResponder_h
@import Foundation;

#include "T1StatusPhotoVideoDetailsViewDelegate-Protocol.h"

@class NSObject;

@interface T1InlineVideoViewGestureResponder : NSObject <T1StatusPhotoVideoDetailsViewDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *onTapBlock;
    NSNumber"16@0:8 *onPrerollCTATap;
    NSNumber"16@0:8 *didTapAttribution;
    NSNumber"16@0:8 *didTapAttributionScribe;
    NSNumber"16@0:8 *didLongPressAttribution;
}

@property (nonatomic, copy) id /* block */ onTapDismissButton;
@property (nonatomic, copy) id /* block */ didTapAttributionSource;
@property (nonatomic, copy) id /* block */ didTapResumeImmersiveSession;

/* instance methods */
- (void)statusPhotoVideoDetailsView:(id)view didTapAttributionForMediaEntity:(id)entity;
- (id)initOnTapBlock:(id /* block */)block onPrerollCTATapBlock:(id /* block */)block didTapAttributionBlock:(id /* block */)block didLongPressAttributionBlock:(id /* block */)block didTapDismissBlock:(id /* block */)block;
- (void)onTapWithTapRecognizer:(id)recognizer;
- (id)init;

@end

#endif /* T1InlineVideoViewGestureResponder_h */
