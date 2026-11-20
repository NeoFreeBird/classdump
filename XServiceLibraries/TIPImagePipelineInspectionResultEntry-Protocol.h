//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImagePipelineInspectionResultEntry_Protocol_h
#define TIPImagePipelineInspectionResultEntry_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, NSURL, UIImage;

@protocol TIPImagePipelineInspectionResultEntry <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (readonly, nonatomic) unsigned long long bytesUsed;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) UIImage *image;

@optional

@end

#endif /* TIPImagePipelineInspectionResultEntry_Protocol_h */
