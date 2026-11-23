//
#ifndef T1ImageDisplayViewDownloadDelegate_Protocol_h
#define T1ImageDisplayViewDownloadDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1ImageDisplayViewDownloadDelegate <NSObject>

@required

/* required instance methods */
- (void)imageDisplayViewDidSuccessfullyLoadImage:(id)image;
- (void)imageDisplayView:(id)view didFailToLoadImageWithError:(id)error;
- (void)imageDisplayViewDidReset:(id)reset;

@optional

@end

#endif /* T1ImageDisplayViewDownloadDelegate_Protocol_h */
