//
#ifndef TIPImageFetchable_Protocol_h
#define TIPImageFetchable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TIPImageContainer.h"

@class UIImage;

@protocol TIPImageFetchable <NSObject>

@required

@optional

@property (retain, nonatomic) TIPImageContainer *tip_fetchedImageContainer;
@property (retain, nonatomic) UIImage *tip_fetchedImage;

@end

#endif /* TIPImageFetchable_Protocol_h */
