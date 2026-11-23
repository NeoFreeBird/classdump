//
#ifndef T1BroadcastContainerErrorCustomConfiguration_h
#define T1BroadcastContainerErrorCustomConfiguration_h
@import Foundation;

#include "T1BroadcastContainerErrorConfiguration-Protocol.h"

@class NSObject, NSString, UIColor;

@interface T1BroadcastContainerErrorCustomConfiguration : NSObject <T1BroadcastContainerErrorConfiguration>

@property (nonatomic) long long style;
@property (nonatomic) long long controlType;
@property (readonly, nonatomic) _Bool showGeoButton;
@property (readonly, nonatomic) _Bool showReloadButton;
@property (readonly, nonatomic) _Bool showImageView;
@property (readonly, nonatomic) _Bool showLabel;
@property (readonly, nonatomic) _Bool preventOutsideTapRecognizers;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) double centerYOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style controlType:(long long)type;

@end

#endif /* T1BroadcastContainerErrorCustomConfiguration_h */
