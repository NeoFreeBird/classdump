//
#ifndef GADNativeAdImage_h
#define GADNativeAdImage_h
@import Foundation;

@class NSObject, NSURL, UIImage;

@interface GADNativeAdImage : NSObject

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) double scale;

/* instance methods */
- (id)initWithImage:(id)image;
- (id)initWithURL:(id)url scale:(double)scale;
- (id)initWithDictionary:(id)dictionary;

@end

#endif /* GADNativeAdImage_h */
