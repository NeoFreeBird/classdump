//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCVideoContainerView_Protocol_h
#define TUCVideoContainerView_Protocol_h
@import Foundation;

@class UIView;

@protocol TUCVideoContainerView

@required

@property (readonly, nonatomic) UIView *currentVideoView;

@optional

@end

#endif /* TUCVideoContainerView_Protocol_h */
