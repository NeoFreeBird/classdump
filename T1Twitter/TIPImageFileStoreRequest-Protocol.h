//
#ifndef TIPImageFileStoreRequest_Protocol_h
#define TIPImageFileStoreRequest_Protocol_h
@import Foundation;

#include "TIPImageStoreRequest-Protocol.h"

@class NSString;

@protocol TIPImageFileStoreRequest <TIPImageStoreRequest>

@required

@property (readonly, copy, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageDimensions;

@optional

@end

#endif /* TIPImageFileStoreRequest_Protocol_h */
