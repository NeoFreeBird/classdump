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
