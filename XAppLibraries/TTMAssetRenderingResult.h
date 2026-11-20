//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMAssetRenderingResult_h
#define TTMAssetRenderingResult_h
@import Foundation;

@class NSArray, NSData, NSDictionary, NSObject, UIImage;

@interface TTMAssetRenderingResult : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSDictionary *imageMetadata;
@property (readonly, copy, nonatomic) NSArray *videoMetadata;
@property (nonatomic) _Bool usedDirectFileExport;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)initWithData:(id)data image:(id)image imageMetadata:(id)metadata;
- (id)initWithData:(id)data videoMetadata:(id)metadata;

@end

#endif /* TTMAssetRenderingResult_h */
