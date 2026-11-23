//
#ifndef TIPImageFetchable_Protocol_h
#define TIPImageFetchable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TIPImageContainer, UIImage;

@protocol TIPImageFetchable <NSObject>

@required

@property (nonatomic, retain) TIPImageContainer *tip_fetchedImageContainer;
@property (nonatomic, retain) UIImage *tip_fetchedImage;

@optional

@end

#endif /* TIPImageFetchable_Protocol_h */
