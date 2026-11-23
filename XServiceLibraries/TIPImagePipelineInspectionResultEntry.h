//
#ifndef TIPImagePipelineInspectionResultEntry_h
#define TIPImagePipelineInspectionResultEntry_h
@import Foundation;

#include "TIPImagePipelineInspectionResultEntry-Protocol.h"

@class NSObject, NSString, NSURL, UIImage;

@interface TIPImagePipelineInspectionResultEntry : NSObject <TIPImagePipelineInspectionResultEntry>

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) struct CGSize { double x0; double x1; } dimensions;
@property (nonatomic) unsigned long long bytesUsed;
@property (nonatomic) float progress;
@property (retain, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* TIPImagePipelineInspectionResultEntry_h */
