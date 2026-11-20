//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFBottomOverlayContentViewableDelegate_Protocol_h
#define TAFBottomOverlayContentViewableDelegate_Protocol_h
@import Foundation;

@protocol TAFBottomOverlayContentViewableDelegate

@required

/* required instance methods */
- (void)bottomOverlayWasTappedWithOverlay:(id)overlay;

@optional

@end

#endif /* TAFBottomOverlayContentViewableDelegate_Protocol_h */
