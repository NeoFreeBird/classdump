//
#ifndef TGFFilterRenderer_h
#define TGFFilterRenderer_h
@import Foundation;

@class NSArray, NSObject, NSUUID, UIImage;

@interface TGFFilterRenderer : NSObject {
    /* instance variables */
    NSArray *_filters;
    NSArray *_adjustments;
    id /* block */ _callback;
    NSUUID *_uuid;
}

@property (readonly, nonatomic) UIImage *image;

/* class methods */
+ (id)filterImage:(id)image filter:(id)filter adjustment:(float)adjustment;
+ (id)filterImage:(id)image filters:(id)filters adjustments:(id)adjustments;
+ (void)filterCVPixelBuffer:(struct __CVBuffer *)buffer filters:(id)filters adjustments:(id)adjustments;
+ (void)filterCVPixelBuffer:(struct __CVBuffer *)buffer filter:(id)filter adjustment:(float)adjustment;

/* instance methods */
- (id)initWithImage:(id)image;
- (void)filterImageWithFilter:(id)filter adjustment:(float)adjustment complete:(id /* block */)complete;
- (void)filterImageWithFilters:(id)filters adjustments:(id)adjustments complete:(id /* block */)complete;
- (void)_filterNextPass:(id)pass;

@end

#endif /* TGFFilterRenderer_h */
