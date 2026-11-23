//
#ifndef TIPImageFetchResultInternal_h
#define TIPImageFetchResultInternal_h
@import Foundation;

#include "TIPImageContainer.h"
#include "TIPImageFetchResult-Protocol.h"

@class NSObject, NSString, NSURL;

@interface TIPImageFetchResultInternal : NSObject <TIPImageFetchResult>

@property (readonly, nonatomic) TIPImageContainer *imageContainer;
@property (readonly, nonatomic) long long imageSource;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageOriginalDimensions;
@property (readonly, nonatomic) _Bool imageIsTreatedAsPlaceholder;
@property (readonly, nonatomic) _Bool imageWasTransformed;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* TIPImageFetchResultInternal_h */
