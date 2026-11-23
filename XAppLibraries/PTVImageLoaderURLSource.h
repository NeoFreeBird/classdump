//
#ifndef PTVImageLoaderURLSource_h
#define PTVImageLoaderURLSource_h
@import Foundation;

#include "PTVImageLoaderSource-Protocol.h"

@class NSObject, NSString, NSURL, UIColor;

@interface PTVImageLoaderURLSource : NSObject <PTVImageLoaderSource>

@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *cacheKeyPrefix;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) _Bool useCircularCrop;
@property (readonly, nonatomic) UIColor *overlayColor;
@property (readonly, nonatomic) id /* block */ processor;
@property (readonly, nonatomic) _Bool useBlur;
@property (readonly, nonatomic) long long blurImageStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageURL:(id)url;
- (id)initWithImageURL:(id)url overlayColor:(id)color useCircularCrop:(_Bool)crop;
- (id)initWithImageURL:(id)url cacheKey:(id)key overlayColor:(id)color useCircularCrop:(_Bool)crop useBlur:(_Bool)blur blurImageStyle:(long long)style;
- (id)imageSourceWithCacheKey:(id)key;
- (id)imageSourceWithUseBlur:(_Bool)blur blurImageStyle:(long long)style;
- (_Bool)isEqualToSource:(id)source;
- (_Bool)isEqualToURLSource:(id)urlsource;
- (id)context;
- (void)performLoad:(id)load withCachePolicy:(long long)policy;

@end

#endif /* PTVImageLoaderURLSource_h */
