//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AppealFreedomOfSpeechAuthorPivotViewModelProtocol_Protocol_h
#define T1AppealFreedomOfSpeechAuthorPivotViewModelProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, TFNAttributedActiveTextModel, UIColor;

@protocol T1AppealFreedomOfSpeechAuthorPivotViewModelProtocol <NSObject>

@required

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, nonatomic) TFNAttributedActiveTextModel *labelTextModel;
@property (readonly, copy, nonatomic) NSString *accessibilityString;

@optional

@end

#endif /* T1AppealFreedomOfSpeechAuthorPivotViewModelProtocol_Protocol_h */
