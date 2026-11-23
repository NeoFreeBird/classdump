//
#ifndef TUCAppStoreDetailsAdaptable_Protocol_h
#define TUCAppStoreDetailsAdaptable_Protocol_h
@import Foundation;

#include "TUCButtonData.h"
#include "TUCDetailsAdaptable-Protocol.h"

@class NSString, TFSTwitterEntityMedia, UIColor;

@protocol TUCAppStoreDetailsAdaptable <TUCDetailsAdaptable>

@required

@property (readonly, nonatomic) double ratingStars;
@property (readonly, copy, nonatomic) NSString *ratingCount;
@property (readonly, nonatomic) _Bool shouldShowAppRatings;
@property (readonly, nonatomic) TFSTwitterEntityMedia *appIconMediaEntity;
@property (readonly, nonatomic) _Bool isFreeApp;
@property (readonly, copy, nonatomic) NSString *appDescription;
@property (readonly, nonatomic) TUCButtonData *buttonData;
@property (readonly, nonatomic) UIColor *dominantColor;
@property (readonly, nonatomic) _Bool installCardButtonRedesignEnabled;

@optional

@end

#endif /* TUCAppStoreDetailsAdaptable_Protocol_h */
