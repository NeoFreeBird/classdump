//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastContainerErrorConfiguration_Protocol_h
#define T1BroadcastContainerErrorConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIColor;

@protocol T1BroadcastContainerErrorConfiguration <NSObject>

@required

@property (readonly, nonatomic) _Bool showGeoButton;
@property (readonly, nonatomic) _Bool showReloadButton;
@property (readonly, nonatomic) _Bool showImageView;
@property (readonly, nonatomic) _Bool showLabel;
@property (readonly, nonatomic) _Bool preventOutsideTapRecognizers;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double centerYOffset;

@optional

@end

#endif /* T1BroadcastContainerErrorConfiguration_Protocol_h */
