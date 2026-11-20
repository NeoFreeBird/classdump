//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCVideoContainerView_Protocol_h
#define TUCVideoContainerView_Protocol_h
@import Foundation;

@class UIView;

@protocol TUCVideoContainerView

@required

@property (nonatomic, readonly) UIView *currentVideoView;

@optional

@end

#endif /* TUCVideoContainerView_Protocol_h */
