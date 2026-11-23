//
#ifndef TIPImageFetchResult_Protocol_h
#define TIPImageFetchResult_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TIPImageContainer.h"

@class NSString, NSURL;

@protocol TIPImageFetchResult <NSObject>

@required

@property (readonly, nonatomic) TIPImageContainer *imageContainer;
@property (readonly, nonatomic) long long imageSource;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageOriginalDimensions;
@property (readonly, nonatomic) _Bool imageIsTreatedAsPlaceholder;
@property (readonly, nonatomic) _Bool imageWasTransformed;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;

@optional

@end

#endif /* TIPImageFetchResult_Protocol_h */
