//
#ifndef TAVAutoplayViewContainer_Protocol_h
#define TAVAutoplayViewContainer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TVPPlayerSessionSource-Protocol.h"

@class UIImage, UIView;

@protocol TAVAutoplayViewContainer <NSObject>

@required

@property (nonatomic, readonly) id <TVPPlayerSessionSource> playerSessionSource;
@property (nonatomic, readonly) UIView *playerContainerView;
@property (nonatomic, readonly) UIImage *playerPreviewImage;

@optional

@end

#endif /* TAVAutoplayViewContainer_Protocol_h */
