//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusPhotoVideoForwardViewDelegate_Protocol_h
#define T1StatusPhotoVideoForwardViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StatusPhotoVideoForwardViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)photoVideoForwardView:(id)view didTapImageAtIndex:(unsigned long long)index;
- (void)photoVideoForwardView:(id)view didTapImageAtIndex:(unsigned long long)index;
- (void)photoVideoForwardView:(id)view didLoadImageAtIndex:(unsigned long long)index fromSource:(long long)source error:(id)error;
- (void)photoVideoForwardView:(id)view didLoadImageAtIndex:(unsigned long long)index fromSource:(long long)source error:(id)error;
- (void)photoVideoForwardView:(id)view didTapAltTextForImageAtIndex:(unsigned long long)index altText:(id)text;
- (void)photoVideoForwardView:(id)view didTapAltTextForImageAtIndex:(unsigned long long)index altText:(id)text;
- (void)photoVideoForwardView:(id)view didTapAttributionForMediaEntity:(id)entity;
- (void)photoVideoForwardView:(id)view didLongPressAttributionForMediaEntity:(id)entity;
- (void)photoVideoForwardView:(id)view didTapAttributionForUserReference:(id)reference sourceStatusID:(id)id;
- (void)photoVideoForwardView:(id)view didTapAttributionForUserReference:(id)reference sourceStatusID:(id)id;
- (void)photoVideoForwardView:(id)view didTapPrerollCTAWithModel:(id)model;
- (void)photoVideoForwardView:(id)view didTapPrerollCTAWithModel:(id)model;
- (void)photoVideoForwardView:(id)view didTapDismissButton:(id)button withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)photoVideoForwardView:(id)view willPresentPlayer:(id)player;
- (void)photoVideoForwardView:(id)view willPresentPlayer:(id)player;
- (void)photoVideoForwardViewDidTapResumeImmersiveSession:(id)session;

@end

#endif /* T1StatusPhotoVideoForwardViewDelegate_Protocol_h */
