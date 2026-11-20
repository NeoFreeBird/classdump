//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDismissableView_Protocol_h
#define TFNDismissableView_Protocol_h
@import Foundation;

@protocol TFNDismissDelegate;

@protocol TFNDismissableView

@required

@property (weak, nonatomic) id <TFNDismissDelegate> dismissDelegate;

@optional

@end

#endif /* TFNDismissableView_Protocol_h */
