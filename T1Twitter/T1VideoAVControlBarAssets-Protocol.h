//
#ifndef T1VideoAVControlBarAssets_Protocol_h
#define T1VideoAVControlBarAssets_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIImage;

@protocol T1VideoAVControlBarAssets <NSObject>

@required

@property (nonatomic, readonly) UIImage *playImage;
@property (nonatomic, readonly) UIImage *pauseImage;
@property (nonatomic, readonly) UIImage *replayImage;
@property (nonatomic, readonly) UIImage *dockImage;
@property (nonatomic, readonly) UIImage *expandImage;
@property (nonatomic, readonly) UIImage *collapseImage;
@property (nonatomic, readonly) UIImage *soundOnImage;
@property (nonatomic, readonly) UIImage *soundOffImage;

@optional

@end

#endif /* T1VideoAVControlBarAssets_Protocol_h */
