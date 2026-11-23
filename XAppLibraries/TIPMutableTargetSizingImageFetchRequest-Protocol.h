//
#ifndef TIPMutableTargetSizingImageFetchRequest_Protocol_h
#define TIPMutableTargetSizingImageFetchRequest_Protocol_h
@import Foundation;

#include "TIPImageFetchRequest-Protocol.h"

@protocol TIPMutableTargetSizingImageFetchRequest <TIPImageFetchRequest>

@required

@property (nonatomic) struct CGSize { double x0; double x1; } targetDimensions;
@property (nonatomic) long long targetContentMode;

@optional

@end

#endif /* TIPMutableTargetSizingImageFetchRequest_Protocol_h */
